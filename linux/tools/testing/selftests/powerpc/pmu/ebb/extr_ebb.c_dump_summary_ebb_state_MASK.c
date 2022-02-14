
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ebb_count; int spurious; int negative; int no_overflow; int * pmc_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int,int,int,int,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(void)
{
 FUNC_0("ebb_state:\n" "  ebb_count    = %d\n" "  spurious     = %d\n" "  negative     = %d\n" "  no_overflow  = %d\n" "  pmc[1] count = 0x%llx\n" "  pmc[2] count = 0x%llx\n" "  pmc[3] count = 0x%llx\n" "  pmc[4] count = 0x%llx\n" "  pmc[5] count = 0x%llx\n" "  pmc[6] count = 0x%llx\n",
  VAR_0.stats.ebb_count, VAR_0.stats.spurious,
  VAR_0.stats.negative, VAR_0.stats.no_overflow,
  VAR_0.stats.pmc_count[0], VAR_0.stats.pmc_count[1],
  VAR_0.stats.pmc_count[2], VAR_0.stats.pmc_count[3],
  VAR_0.stats.pmc_count[4], VAR_0.stats.pmc_count[5]);
}
