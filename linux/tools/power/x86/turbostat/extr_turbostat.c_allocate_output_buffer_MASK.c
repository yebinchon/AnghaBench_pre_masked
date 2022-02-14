
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_cpus; } ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_2()
{
 VAR_1 = FUNC_0(1, (1 + VAR_2.num_cpus) * 2048);
 VAR_0 = VAR_1;
 if (VAR_0 == ((void*)0))
  FUNC_1(-1, "calloc output buffer");
}
