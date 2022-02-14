
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,unsigned long*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

int FUNC_7(void)
{
 FILE *VAR_0;
 int VAR_1 = -1;
 char VAR_2[1024] = {0};
 unsigned long VAR_3 = 0;

 VAR_0 = FUNC_2("/proc/self/status", "r");
 if (!VAR_0) {
  FUNC_3("fopen");
  return -1;
 }

 while (FUNC_1(VAR_2, 1024, VAR_0)) {
  if (FUNC_6(VAR_2, "VmLck")) {
   VAR_1 = FUNC_5(VAR_2, "VmLck:\t%8lu kB", &VAR_3);
   if (VAR_1 <= 0) {
    FUNC_4("sscanf() on VmLck error: %s: %d\n",
      VAR_2, VAR_1);
    FUNC_0(VAR_0);
    return -1;
   }
   FUNC_0(VAR_0);
   return (int)(VAR_3 << 10);
  }
 }

 FUNC_3("cann't parse VmLck in /proc/self/status\n");
 FUNC_0(VAR_0);
 return -1;
}
