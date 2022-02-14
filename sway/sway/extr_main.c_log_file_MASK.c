
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int *) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1) {
 char *VAR_2 = ((void*)0);
 size_t VAR_3 = 0;
 ssize_t VAR_4;
 while ((VAR_4 = FUNC_1(&VAR_2, &VAR_3, VAR_1)) != -1) {
  if (VAR_2[VAR_4 - 1] == '\n') {
   VAR_2[VAR_4 - 1] = '\0';
  }
  FUNC_2(VAR_0, "%s", VAR_2);
 }
 FUNC_0(VAR_2);
}
