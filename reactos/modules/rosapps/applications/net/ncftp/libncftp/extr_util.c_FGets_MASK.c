
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(char *VAR_0, size_t VAR_1, FILE *VAR_2)
{
 char *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_0, ((int) VAR_1) - 1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  VAR_3[((int) VAR_1) - 1] = '\0';
  VAR_4 = VAR_3 + FUNC_2(VAR_3) - 1;
  if (*VAR_4 == '\n')
   *VAR_4 = '\0';
 } else {
  FUNC_1(VAR_0, 0, VAR_1);
 }
 return VAR_3;
}
