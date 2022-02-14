
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_t ;


 char* FUNC_0 (int *,char*,int*,int*) ;
 char* FUNC_1 (int *,int *,char*,int,char*,int*,int*) ;

char *FUNC_2(list_t *VAR_0, list_t *VAR_1, char *VAR_2, int VAR_3,
  char *VAR_4, int *VAR_5, int *VAR_6) {

 char *VAR_7 = ((void*)0);
 if (VAR_4) {
  VAR_7 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6);
 }
 if (!VAR_7) {
  VAR_7 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, "Hicolor",
    VAR_5, VAR_6);
 }
 if (!VAR_7) {
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);
 }
 return VAR_7;
}
