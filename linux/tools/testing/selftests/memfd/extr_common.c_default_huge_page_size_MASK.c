
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char*,unsigned long*) ;

unsigned long FUNC_5(void)
{
 unsigned long VAR_0 = 0;
 char *VAR_1 = ((void*)0);
 size_t VAR_2 = 0;
 FILE *VAR_3 = FUNC_1("/proc/meminfo", "r");

 if (!VAR_3)
  return 0;
 while (FUNC_3(&VAR_1, &VAR_2, VAR_3) > 0) {
  if (FUNC_4(VAR_1, "Hugepagesize:       %lu kB", &VAR_0) == 1) {
   VAR_0 <<= 10;
   break;
  }
 }

 FUNC_2(VAR_1);
 FUNC_0(VAR_3);
 return VAR_0;
}
