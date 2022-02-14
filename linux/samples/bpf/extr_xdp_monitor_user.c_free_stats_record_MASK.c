
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct stats_record* cpu; } ;
struct TYPE_7__ {struct stats_record* cpu; } ;
struct stats_record {TYPE_4__* xdp_cpumap_enqueue; TYPE_3__ xdp_devmap_xmit; TYPE_2__ xdp_cpumap_kthread; TYPE_1__* xdp_exception; TYPE_5__* xdp_redirect; } ;
struct TYPE_10__ {struct stats_record* cpu; } ;
struct TYPE_9__ {struct stats_record* cpu; } ;
struct TYPE_6__ {struct stats_record* cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stats_record*) ;

__attribute__((used)) static void FUNC_1(struct stats_record *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3->xdp_redirect[VAR_4].cpu);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3->xdp_exception[VAR_4].cpu);

 FUNC_0(VAR_3->xdp_cpumap_kthread.cpu);
 FUNC_0(VAR_3->xdp_devmap_xmit.cpu);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3->xdp_cpumap_enqueue[VAR_4].cpu);

 FUNC_0(VAR_3);
}
