
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;
typedef int available_cpus ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 () ;

int FUNC_13(int VAR_1, char **VAR_2)
{
 int VAR_3;
 bool VAR_4 = 1;
 bool VAR_5 = 1;
 unsigned int VAR_6 = 0;
 cpu_set_t VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_5();

 while ((VAR_3 = FUNC_1(VAR_1, VAR_2, "n")) != -1) {
  switch (VAR_3) {
  case 'n':
   VAR_4 = 0;
   break;
  default:
   FUNC_9("Usage: %s [-n]\n", VAR_2[0]);
   FUNC_9("        -n: do not trigger a suspend/resume cycle before the test\n");
   return -1;
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!FUNC_0(VAR_9, &VAR_7))
   continue;
  VAR_6++;
 }
 FUNC_6(VAR_6);

 if (VAR_4)
  FUNC_12();

 VAR_8 = FUNC_11(0, sizeof(VAR_7), &VAR_7);
 if (VAR_8 < 0)
  FUNC_3("sched_getaffinity() failed\n");

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  bool VAR_10;

  if (!FUNC_0(VAR_9, &VAR_7))
   continue;

  VAR_10 = FUNC_10(VAR_9);
  if (VAR_10) {
   FUNC_8("CPU %d\n", VAR_9);
  } else {
   FUNC_7("CPU %d\n", VAR_9);
   VAR_5 = 0;
  }
 }

 if (VAR_5)
  FUNC_4();
 else
  FUNC_2();
}
