
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;
struct TYPE_3__ {int lock; int kv; } ;
typedef TYPE_1__ strm_kvs ;
typedef scalar_t__ khiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  strm_kvs* VAR_7 = FUNC_0(VAR_4, VAR_5);
  strm_string VAR_8 = FUNC_8(FUNC_9(VAR_5[1]));
  khiter_t VAR_9;

  if (!VAR_7) {
    FUNC_7(VAR_3, "no kvs given");
    return VAR_0;
  }
  FUNC_4(&VAR_7->lock);
  VAR_9 = FUNC_2(VAR_2, VAR_7->kv, VAR_8);
  if (VAR_9 == FUNC_1(VAR_7->kv)) {
    *VAR_6 = FUNC_6();
  }
  else {
    *VAR_6 = FUNC_3(VAR_7->kv, VAR_9);
  }
  FUNC_5(&VAR_7->lock);
  return VAR_1;
}
