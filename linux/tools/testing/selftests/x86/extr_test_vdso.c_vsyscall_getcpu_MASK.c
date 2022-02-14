
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,void**,void**,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void *FUNC_6(void)
{

 FILE *VAR_1;
 char VAR_2[VAR_0];
 bool VAR_3 = 0;

 VAR_1 = FUNC_2("/proc/self/maps", "r");
 if (!VAR_1)
  return ((void*)0);

 while (FUNC_1(VAR_2, VAR_0, VAR_1)) {
  char VAR_4, VAR_5;
  void *VAR_6, *VAR_7;
  char VAR_8[VAR_0];


  if (FUNC_4(VAR_2, "%p-%p %c-%cp %*x %*x:%*x %*u %s",
      &VAR_6, &VAR_7, &VAR_4, &VAR_5, VAR_8) != 5)
   continue;

  if (FUNC_5(VAR_8, "[vsyscall]"))
   continue;


  VAR_3 = 1;
  break;
 }

 FUNC_0(VAR_1);

 if (!VAR_3) {
  FUNC_3("Warning: failed to find vsyscall getcpu\n");
  return ((void*)0);
 }
 return (void *) (0xffffffffff600800);



}
