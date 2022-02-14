
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char* FUNC_0 (char*,char*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_1) {
 int VAR_2 = 0;
 char *VAR_3 = VAR_0[VAR_2++];
 char *VAR_4 = FUNC_0 (VAR_1, VAR_3);
 while (VAR_3) {
  VAR_4 = FUNC_0 (VAR_4, VAR_3);
  VAR_3 = VAR_0[VAR_2++];
 }
 return VAR_4;
}
