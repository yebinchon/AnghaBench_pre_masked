
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {scalar_t__ phys_addr; } ;
struct c2c_hist_entry {int paddr_zero; scalar_t__ paddr; int paddr_cnt; int nodeset; } ;
struct TYPE_2__ {int mem2node; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct c2c_hist_entry *VAR_1,
        struct perf_sample *VAR_2)
{
 int VAR_3;

 if (!VAR_2->phys_addr) {
  VAR_1->paddr_zero = 1;
  return;
 }

 VAR_3 = FUNC_1(&VAR_0.mem2node, VAR_2->phys_addr);
 if (FUNC_0(VAR_3 < 0, "WARNING: failed to find node\n"))
  return;

 FUNC_2(VAR_3, VAR_1->nodeset);

 if (VAR_1->paddr != VAR_2->phys_addr) {
  VAR_1->paddr_cnt++;
  VAR_1->paddr = VAR_2->phys_addr;
 }
}
