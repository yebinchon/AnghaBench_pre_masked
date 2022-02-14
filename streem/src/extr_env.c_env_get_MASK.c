
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef int strm_env ;
typedef scalar_t__ khiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(strm_env* VAR_2, strm_string VAR_3, strm_value* VAR_4)
{
  khiter_t VAR_5;

  if (!FUNC_3(VAR_3)) {
    VAR_3 = FUNC_4(VAR_3);
  }
  VAR_5 = FUNC_1(VAR_2, VAR_2, VAR_3);
  if (VAR_5 == FUNC_0(VAR_2)) return VAR_0;
  *VAR_4 = FUNC_2(VAR_2, VAR_5);
  return VAR_1;
}
