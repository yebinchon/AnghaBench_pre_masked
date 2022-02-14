
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char*,char*,unsigned long*) ;

unsigned long FUNC_4(void)
{
 unsigned long VAR_0 = 0;
 char *VAR_1 = ((void*)0);
 size_t VAR_2 = 0;
 FILE *VAR_3 = FUNC_0("/proc/meminfo", "r");
 if (!VAR_3)
  return 0;
 while (FUNC_2(&VAR_1, &VAR_2, VAR_3) > 0) {
  if (FUNC_3(VAR_1, "Hugepagesize:       %lu kB", &VAR_0) == 1) {
   VAR_0 <<= 10;
   break;
  }
 }
 FUNC_1(VAR_1);
 return VAR_0;
}
