
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_1 < 0)
 VAR_1 = FUNC_1(VAR_0);
    if (VAR_3 < 0)
 VAR_3 = FUNC_1(VAR_2);
    for (VAR_4 = 0; ; ++VAR_4)
    {

 if (VAR_4 == VAR_1)
 {
     if (VAR_4 == VAR_3)
  return 0;
     if (VAR_4 == VAR_3 - 1 && (VAR_2[VAR_4] == '\\' || VAR_2[VAR_4] == '/'))
  return 0;
     return 1;
 }


 if (VAR_4 == VAR_3)
 {
     if (VAR_4 == VAR_1)
  return 0;
     if (VAR_4 == VAR_1 - 1 && (VAR_0[VAR_4] == '\\' || VAR_0[VAR_4] == '/'))
  return 0;
     return 1;
 }

 if (!(FUNC_0(VAR_0[VAR_4]) == FUNC_0(VAR_2[VAR_4])
  || ((VAR_0[VAR_4] == '/' || VAR_0[VAR_4] == '\\')
      && (VAR_2[VAR_4] == '/' || VAR_2[VAR_4] == '\\'))))
     return 1;
    }

}
