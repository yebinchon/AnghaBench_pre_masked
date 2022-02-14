
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4(char **VAR_3, char *VAR_4)
{
 int VAR_5 = VAR_2;
 int VAR_6 = VAR_0;

 while (**VAR_3)
 {
  if (VAR_5 == VAR_2)
  {
   if (FUNC_2(*VAR_3, '#'))
    return 0;
   else if (!FUNC_3(*VAR_3))
   {
    int VAR_7 = FUNC_1(*VAR_3);

    if (VAR_7 < VAR_6)
    {
     FUNC_0(VAR_4, *VAR_3);
     VAR_4 += VAR_7;
     VAR_6 -= VAR_7;
    }
    VAR_5 = VAR_1;
   }
  }
  else
  {
   if (FUNC_3(*VAR_3))
   {
    *VAR_4 = '\0';
    return 1;
   }
   else
   {
    int VAR_8 = FUNC_1(*VAR_3);

    if (VAR_8 < VAR_6)
    {
     FUNC_0(VAR_4, *VAR_3);
     VAR_4 += VAR_8;
     VAR_6 -= VAR_8;
    }
   }
  }
  *VAR_3 += FUNC_1(*VAR_3);
 }

 *VAR_4 = '\0';

 return (VAR_5 == VAR_1);
}
