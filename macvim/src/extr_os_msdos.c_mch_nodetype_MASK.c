
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char_u ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int
FUNC_3(char_u *VAR_3)
{
    if (FUNC_0(VAR_3, "AUX") == 0
     || FUNC_0(VAR_3, "CON") == 0
     || FUNC_0(VAR_3, "CLOCK$") == 0
     || FUNC_0(VAR_3, "NUL") == 0
     || FUNC_0(VAR_3, "PRN") == 0
     || ((FUNC_1(VAR_3, "COM", 3) == 0
      || FUNC_1(VAR_3, "LPT", 3) == 0)
  && FUNC_2(VAR_3[3])
  && VAR_3[4] == VAR_2))
 return VAR_1;

    return VAR_0;
}
