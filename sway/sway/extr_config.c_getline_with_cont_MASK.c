
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int *) ;
 char* FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(char **VAR_0, size_t *VAR_1, FILE *VAR_2,
  int *VAR_3) {
 char *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 ssize_t VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 *VAR_3 = VAR_6 == -1 ? 0 : 1;
 while (VAR_6 >= 2 && FUNC_3(&(*VAR_0)[VAR_6 - 2], "\\\n") == 0 && (*VAR_0)[0] != '#') {
  ssize_t VAR_7 = FUNC_1(&VAR_4, &VAR_5, VAR_2);
  if (VAR_7 == -1) {
   break;
  }
  (*VAR_3)++;

  VAR_6 += VAR_7 - 2;
  if ((ssize_t) *VAR_1 < VAR_6 + 1) {
   *VAR_1 = VAR_6 + 1;
   char *VAR_8 = *VAR_0;
   *VAR_0 = FUNC_2(*VAR_0, *VAR_1);
   if (!*VAR_0) {
    FUNC_0(VAR_8);
    VAR_6 = -1;
    break;
   }
  }
  FUNC_4(&(*VAR_0)[VAR_6 - VAR_7], VAR_4);
 }
 FUNC_0(VAR_4);
 return VAR_6;
}
