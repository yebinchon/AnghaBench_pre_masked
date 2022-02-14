
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_cpu_num; } ;


 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,char*) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2(void)
{
 VAR_0 = FUNC_0(VAR_1.max_cpu_num + 1, sizeof(int));
 if (VAR_0 == ((void*)0))
  FUNC_1(-1, "calloc fd_percpu");
}
