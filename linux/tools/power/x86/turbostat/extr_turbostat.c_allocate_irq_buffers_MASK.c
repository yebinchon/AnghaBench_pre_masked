
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_cpu_num; scalar_t__ num_cpus; } ;


 void* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_2(void)
{
 VAR_0 = FUNC_0(VAR_2.num_cpus, sizeof(int));
 if (VAR_0 == ((void*)0))
  FUNC_1(-1, "calloc %d", VAR_2.num_cpus);

 VAR_1 = FUNC_0(VAR_2.max_cpu_num + 1, sizeof(int));
 if (VAR_1 == ((void*)0))
  FUNC_1(-1, "calloc %d", VAR_2.max_cpu_num + 1);
}
