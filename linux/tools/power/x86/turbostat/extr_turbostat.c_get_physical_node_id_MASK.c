
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_topology {int logical_cpu_id; } ;
struct TYPE_2__ {int max_cpu_num; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(struct cpu_topology *VAR_1)
{
 char VAR_2[80];
 FILE *VAR_3;
 int VAR_4;
 int VAR_5 = VAR_1->logical_cpu_id;

 for (VAR_4 = 0; VAR_4 <= VAR_0.max_cpu_num; VAR_4++) {
  FUNC_2(VAR_2, "/sys/devices/system/cpu/cpu%d/node%i/cpulist",
   VAR_5, VAR_4);
  VAR_3 = FUNC_1(VAR_2, "r");
  if (!VAR_3)
   continue;
  FUNC_0(VAR_3);
  return VAR_4;
 }
 return -1;
}
