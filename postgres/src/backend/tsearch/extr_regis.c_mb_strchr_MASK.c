
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool
FUNC_1(char *VAR_0, char *VAR_1)
{
 int VAR_2,
    VAR_3,
    VAR_4;
 char *VAR_5 = VAR_0;
 bool VAR_6 = 0;

 VAR_2 = FUNC_0(VAR_1);
 while (*VAR_5 && !VAR_6)
 {
  VAR_3 = FUNC_0(VAR_5);
  if (VAR_3 == VAR_2)
  {
   VAR_4 = VAR_3;
   VAR_6 = 1;
   while (VAR_4--)
    if (*(VAR_5 + VAR_4) != *(VAR_1 + VAR_4))
    {
     VAR_6 = 0;
     break;
    }
  }

  VAR_5 += VAR_3;
 }

 return VAR_6;
}
