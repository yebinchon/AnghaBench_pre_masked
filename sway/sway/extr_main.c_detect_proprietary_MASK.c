
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(int VAR_2) {
 FILE *VAR_3 = FUNC_2("/proc/modules", "r");
 if (!VAR_3) {
  return;
 }
 char *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 while (FUNC_4(&VAR_4, &VAR_5, VAR_3) != -1) {
  if (FUNC_5(VAR_4, "nvidia ", 7) == 0) {
   if (VAR_2) {
    FUNC_7(VAR_1,
      "!!! Proprietary Nvidia drivers are in use !!!");
   } else {
    FUNC_7(VAR_1,
     "Proprietary Nvidia drivers are NOT supported. "
     "Use Nouveau. To launch sway anyway, launch with "
     "--my-next-gpu-wont-be-nvidia and DO NOT report issues.");
    FUNC_0(VAR_0);
   }
   break;
  }
  if (FUNC_6(VAR_4, "fglrx")) {
   if (VAR_2) {
    FUNC_7(VAR_1,
      "!!! Proprietary AMD drivers are in use !!!");
   } else {
    FUNC_7(VAR_1, "Proprietary AMD drivers do NOT support "
     "Wayland. Use radeon. To try anyway, launch sway with "
     "--unsupported-gpu and DO NOT report issues.");
    FUNC_0(VAR_0);
   }
   break;
  }
 }
 FUNC_3(VAR_4);
 FUNC_1(VAR_3);
}
