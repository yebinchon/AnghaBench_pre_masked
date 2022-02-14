
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (void*,char*) ;

int FUNC_2(int VAR_1, char **VAR_2) {
 void *VAR_3 = FUNC_0(((void*)0), VAR_0);
 void *VAR_4 = FUNC_1 (VAR_3, "r_main_radare2");
 if (VAR_4) {
  int (*VAR_5)(int VAR_6, char **VAR_7) = VAR_4;
  return VAR_5 (VAR_1, VAR_2);
 }
 return 0;
}
