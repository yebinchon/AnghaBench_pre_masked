
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_cpus; int max_cpu_num; } ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 char FUNC_2 (int *) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*,int,int) ;

int FUNC_5(void)
{
 static FILE *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_0("/proc/interrupts", "r");
 else
  FUNC_3(VAR_3);


 for (VAR_4 = 0; VAR_4 < VAR_2.num_cpus; ++VAR_4) {
  int VAR_6;

  VAR_5 = FUNC_1(VAR_3, " CPU%d", &VAR_6);
  if (VAR_5 != 1)
   break;

  if (VAR_6 > VAR_2.max_cpu_num) {
   FUNC_4("/proc/interrupts: cpu%d: > %d", VAR_6, VAR_2.max_cpu_num);
   return 1;
  }

  VAR_0[VAR_4] = VAR_6;
  VAR_1[VAR_6] = 0;
 }


 while (1) {
  int VAR_7;
  char VAR_8[64];

  VAR_5 = FUNC_1(VAR_3, " %s:", VAR_8);
  if (VAR_5 != 1)
   break;


  for (VAR_7 = 0; VAR_7 < VAR_2.num_cpus; ++VAR_7) {

   int VAR_9, VAR_10;

   VAR_5 = FUNC_1(VAR_3, " %d", &VAR_10);
   if (VAR_5 != 1)
    break;

   VAR_9 = VAR_0[VAR_7];
   VAR_1[VAR_9] += VAR_10;

  }

  while (FUNC_2(VAR_3) != '\n')
   ;

 }
 return 0;
}
