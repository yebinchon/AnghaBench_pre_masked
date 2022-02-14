
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char) ;

bool
FUNC_4(const char *VAR_5)
{
 int VAR_6 = VAR_4;
 const char *VAR_7 = VAR_5;

 while (*VAR_7)
 {
  if (VAR_6 == VAR_4)
  {
   if (FUNC_2(VAR_7))
                ;
   else if (FUNC_3(VAR_7, '['))
    VAR_6 = VAR_2;
   else
    return 0;
  }
  else if (VAR_6 == VAR_2)
  {
   if (FUNC_3(VAR_7, '^'))
    VAR_6 = VAR_1;
   else if (FUNC_2(VAR_7))
    VAR_6 = VAR_3;
   else
    return 0;
  }
  else if (VAR_6 == VAR_3 || VAR_6 == VAR_1)
  {
   if (FUNC_2(VAR_7))
                ;
   else if (FUNC_3(VAR_7, ']'))
    VAR_6 = VAR_4;
   else
    return 0;
  }
  else
   FUNC_0(VAR_0, "internal error in RS_isRegis: state %d", VAR_6);
  VAR_7 += FUNC_1(VAR_7);
 }

 return (VAR_6 == VAR_4);
}
