
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phpdbg_init_state {scalar_t__ code; int member_0; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,struct phpdbg_init_state*) ;
 char* FUNC_2 (char*,char*) ;

void FUNC_3(char *VAR_0) {
 struct phpdbg_init_state VAR_1 = {0};
 char *VAR_2 = FUNC_2(VAR_0, "\n");

 while (VAR_2) {
  FUNC_1(VAR_2, &VAR_1);

  VAR_2 = FUNC_2(((void*)0), "\n");
 }

 if (VAR_1.code) {
  FUNC_0(VAR_1.code);
 }
}
