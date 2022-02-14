
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int strm_value ;
typedef int strm_stream ;
struct TYPE_3__ {int kv; } ;
typedef TYPE_1__ strm_kvs ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  strm_kvs* VAR_7 = FUNC_0(VAR_4, VAR_5);
  if (!VAR_7) {
    FUNC_2(VAR_3, "no kvs given");
    return VAR_0;
  }
  FUNC_1(VAR_2, VAR_7->kv);
  return VAR_1;
}
