
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3,
      *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 char VAR_6;


 if (!*VAR_1)
 {
  VAR_2 = VAR_1;
  return VAR_2;
 }


 while (VAR_1[VAR_5] == '%' && VAR_1[VAR_5 + 1])
 {






  VAR_5 += 2;
 }
 VAR_3 = FUNC_0(VAR_1 + VAR_5, '%');
 if (VAR_3)
 {







  VAR_4 = VAR_3;
  while (*(VAR_4 - 1) == ' ' && VAR_4 - 1 > VAR_1 + VAR_5)
   VAR_4--;
  VAR_6 = *VAR_4;
  *VAR_4 = '\0';
  while (*VAR_0 == ' ')
   VAR_0++;
  VAR_2 = FUNC_2(VAR_0, VAR_1 + VAR_5);
  *VAR_4 = VAR_6;
 }
 else
 {




  VAR_2 = VAR_0 + FUNC_1(VAR_0);
 }
 if (!VAR_2)
 {
  if ((VAR_1 + VAR_5)[0] == ' ' && VAR_1 + VAR_5 + 1 == VAR_4)
   VAR_2 = VAR_0 + FUNC_1(VAR_0);
 }
 return VAR_2;
}
