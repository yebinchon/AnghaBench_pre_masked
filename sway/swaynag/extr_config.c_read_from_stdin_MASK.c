
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int ) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_4(void) {
 char *VAR_1 = ((void*)0);
 size_t VAR_2 = 0;
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 ssize_t VAR_5;
 while ((VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_0)) != -1) {
  VAR_1 = FUNC_2(VAR_1, VAR_2 + VAR_5 + 1);
  FUNC_3(&VAR_1[VAR_2], VAR_5 + 1, "%s", VAR_3);
  VAR_2 += VAR_5;
 }
 FUNC_0(VAR_3);

 while (VAR_1 && VAR_1[VAR_2 - 1] == '\n') {
  VAR_1[--VAR_2] = '\0';
 }

 return VAR_1;
}
