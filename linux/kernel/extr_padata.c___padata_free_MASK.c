
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbcpu; int pcpu; } ;
struct padata_instance {int parallel_wq; int serial_wq; TYPE_1__ cpumask; int pd; int node; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct padata_instance*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct padata_instance*) ;

__attribute__((used)) static void FUNC_6(struct padata_instance *VAR_1)
{




 FUNC_5(VAR_1);
 FUNC_4(VAR_1->pd);
 FUNC_2(VAR_1->cpumask.pcpu);
 FUNC_2(VAR_1->cpumask.cbcpu);
 FUNC_1(VAR_1->serial_wq);
 FUNC_1(VAR_1->parallel_wq);
 FUNC_3(VAR_1);
}
