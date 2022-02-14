
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 unsigned long FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;

int FUNC_5(unsigned long *VAR_0, unsigned long *VAR_1)
{
 char VAR_2[256] = {0};
 char *VAR_3 = "cat /proc/meminfo | grep -i memfree | grep -o '[0-9]*'";
 FILE *VAR_4 = FUNC_4(VAR_3, "r");

 if (!(FUNC_1(VAR_2, sizeof(VAR_2), VAR_4))) {
  FUNC_3("Failed to read meminfo\n");
  return -1;
 }

 FUNC_2(VAR_4);

 *VAR_0 = FUNC_0(VAR_2);
 VAR_3 = "cat /proc/meminfo | grep -i hugepagesize | grep -o '[0-9]*'";
 VAR_4 = FUNC_4(VAR_3, "r");

 if (!(FUNC_1(VAR_2, sizeof(VAR_2), VAR_4))) {
  FUNC_3("Failed to read meminfo\n");
  return -1;
 }

 FUNC_2(VAR_4);
 *VAR_1 = FUNC_0(VAR_2);

 return 0;
}
