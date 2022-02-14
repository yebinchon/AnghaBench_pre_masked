
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_6__ {scalar_t__ serial; int tv; TYPE_2__* kvs; } ;
typedef TYPE_1__ strm_txn ;
typedef int strm_string ;
typedef int strm_stream ;
struct TYPE_7__ {int lock; int kv; } ;
typedef TYPE_2__ strm_kvs ;
typedef scalar_t__ khiter_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  strm_txn* VAR_7 = FUNC_0(VAR_4, VAR_5);
  strm_kvs* VAR_8;
  strm_string VAR_9 = FUNC_8(FUNC_9(VAR_5[1]));
  khiter_t VAR_10;

  if (!VAR_7) return FUNC_11(VAR_3);
  VAR_8 = VAR_7->kvs;
  if (VAR_7->serial != FUNC_4(VAR_8)) {
    return FUNC_10(VAR_7);
  }
  VAR_10 = FUNC_2(VAR_2, VAR_7->tv, VAR_9);
  if (VAR_10 == FUNC_1(VAR_7->tv)) {
    FUNC_5(&VAR_8->lock);
    VAR_10 = FUNC_2(VAR_1, VAR_8->kv, VAR_9);
    if (VAR_10 == FUNC_1(VAR_8->kv)) {
      *VAR_6 = FUNC_7();
    }
    else {
      *VAR_6 = FUNC_3(VAR_8->kv, VAR_10);
    }
    FUNC_6(&VAR_8->lock);
  }
  else {
    *VAR_6 = FUNC_3(VAR_7->tv, VAR_10);
  }
  return VAR_0;
}
