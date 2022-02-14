
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,void**,void**,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(void)
{

 int VAR_3 = 0;
 FILE *VAR_4;
 char VAR_5[VAR_0];
 bool VAR_6 = 0;

 VAR_4 = FUNC_2("/proc/self/maps", "r");
 if (!VAR_4) {
  FUNC_3("[WARN]\tCould not open /proc/self/maps -- assuming vsyscall is r-x\n");
  VAR_1 = 1;
  return 0;
 }

 while (FUNC_1(VAR_5, VAR_0, VAR_4)) {
  char VAR_7, VAR_8;
  void *VAR_9, *VAR_10;
  char VAR_11[VAR_0];


  if (FUNC_4(VAR_5, "%p-%p %c-%cp %*x %*x:%*x %*u %s",
      &VAR_9, &VAR_10, &VAR_7, &VAR_8, VAR_11) != 5)
   continue;

  if (FUNC_5(VAR_11, "[vsyscall]"))
   continue;

  FUNC_3("\tvsyscall map: %s", VAR_5);

  if (VAR_9 != (void *)0xffffffffff600000 ||
      VAR_10 != (void *)0xffffffffff601000) {
   FUNC_3("[FAIL]\taddress range is nonsense\n");
   VAR_3++;
  }

  FUNC_3("\tvsyscall permissions are %c-%c\n", VAR_7, VAR_8);
  VAR_1 = (VAR_7 == 'r');
  VAR_2 = (VAR_8 == 'x');

  VAR_6 = 1;
  break;
 }

 FUNC_0(VAR_4);

 if (!VAR_6) {
  FUNC_3("\tno vsyscall map in /proc/self/maps\n");
  VAR_1 = 0;
  VAR_2 = 0;
 }

 return VAR_3;



}
