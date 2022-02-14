
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;

void FUNC_6(void) {
 bool VAR_1 = 0;
 FILE *VAR_2 = FUNC_1("/sys/firmware/devicetree/base/model", "r");
 if (!VAR_2) {
  return;
 }
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 while (FUNC_4(&VAR_3, &VAR_4, VAR_2) != -1) {
  if (FUNC_5(VAR_3, "Raspberry Pi")) {
   VAR_1 = 1;
   break;
  }
 }
 FUNC_0(VAR_2);
 FILE *VAR_5 = FUNC_1("/proc/modules", "r");
 if (!VAR_5) {
  FUNC_3(VAR_3);
  return;
 }
 bool VAR_6 = 0;
 while (FUNC_4(&VAR_3, &VAR_4, VAR_5) != -1) {
  if (FUNC_5(VAR_3, "vc4")) {
   VAR_6 = 1;
   break;
  }
 }
 FUNC_3(VAR_3);
 FUNC_0(VAR_5);
 if (!VAR_6 && VAR_1) {
  FUNC_2(VAR_0, "\x1B[1;31mWarning: You have a "
    "Raspberry Pi, but the vc4 Module is "
    "not loaded! Set 'dtoverlay=vc4-kms-v3d'"
    "in /boot/config.txt and reboot.\x1B[0m\n");
 }
}
