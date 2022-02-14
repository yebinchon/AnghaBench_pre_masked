
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void) {
 FILE *VAR_1 = FUNC_2("uname -a", "r");
 if (!VAR_1) {
  FUNC_3(VAR_0, "Unable to determine kernel version");
  return;
 }
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
