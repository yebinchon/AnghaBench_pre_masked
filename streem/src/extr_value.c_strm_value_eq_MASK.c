
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ strm_value ;
typedef int strm_cfunc ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(strm_value VAR_2, strm_value VAR_3)
{
  if (VAR_2 == VAR_3) return VAR_1;
  if (FUNC_4(VAR_2) != FUNC_4(VAR_3)) goto typediff;
  switch (FUNC_4(VAR_2)) {
  case 133:
  case 128:
    return FUNC_0(VAR_2, VAR_3);
  case 129:
  case 130:
    return FUNC_2(VAR_2, VAR_3);
  case 132:
    return (strm_cfunc)(intptr_t)FUNC_5(VAR_2) == (strm_cfunc)(intptr_t)FUNC_5(VAR_3);
  case 131:
    return FUNC_6(VAR_2) == FUNC_6(VAR_3);
  typediff:
  default:
    if (FUNC_1(VAR_2) && FUNC_1(VAR_3)) {
      return FUNC_3(VAR_2) == FUNC_3(VAR_3);
    }
    return VAR_0;
  }
}
