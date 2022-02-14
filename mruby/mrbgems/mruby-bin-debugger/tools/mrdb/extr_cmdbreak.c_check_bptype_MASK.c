
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_debug_bptype ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;

mrb_debug_bptype
FUNC_6(char* VAR_7)
{
  char* VAR_8 = VAR_7;

  if (FUNC_0(*VAR_8)||FUNC_1(*VAR_8)) {
    FUNC_4(VAR_0);
    return VAR_6;
  }

  if (!FUNC_2(*VAR_8)) {
    return VAR_5;
  }

  while (!(FUNC_0(*VAR_8)||FUNC_1(*VAR_8))) {
    if (!FUNC_2(*VAR_8)) {
      FUNC_3(VAR_1, VAR_7);
      return VAR_6;
    }
    VAR_8++;
  }

  if ((*VAR_7 == '0')||(FUNC_5(VAR_7) >= VAR_3)) {
    FUNC_4(VAR_2);
    return VAR_6;
  }

  return VAR_4;
}
