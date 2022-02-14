
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long gp_start; unsigned long jiffies_resched; int n_force_qs; int n_force_qs_gpstart; int jiffies_stall; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_2 = VAR_0;
 unsigned long VAR_3;

 VAR_1.gp_start = VAR_2;
 VAR_3 = FUNC_1();

 FUNC_2(&VAR_1.jiffies_stall, VAR_2 + VAR_3);
 VAR_1.jiffies_resched = VAR_2 + VAR_3 / 2;
 VAR_1.n_force_qs_gpstart = FUNC_0(VAR_1.n_force_qs);
}
