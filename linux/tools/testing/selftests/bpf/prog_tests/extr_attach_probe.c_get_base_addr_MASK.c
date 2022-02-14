
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,size_t*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

ssize_t FUNC_4() {
 size_t VAR_2;
 char VAR_3[256];
 FILE *VAR_4;

 VAR_4 = FUNC_1("/proc/self/maps", "r");
 if (!VAR_4)
  return -VAR_1;

 while (FUNC_2(VAR_4, "%zx-%*x %s %*s\n", &VAR_2, VAR_3) == 2) {
  if (FUNC_3(VAR_3, "r-xp") == 0) {
   FUNC_0(VAR_4);
   return VAR_2;
  }
 }

 FUNC_0(VAR_4);
 return -VAR_0;
}
