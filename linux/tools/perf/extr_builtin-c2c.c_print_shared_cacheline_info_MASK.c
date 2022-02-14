
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2c_stats {int lcl_hitm; int rmt_hitm; int load; int ld_fbhit; int ld_l1hit; int ld_l2hit; int ld_llchit; int locks; int store; int st_l1hit; } ;
struct TYPE_2__ {int shared_clines; struct c2c_stats hitm_stats; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_1)
{
 struct c2c_stats *VAR_2 = &VAR_0.hitm_stats;
 int VAR_3 = VAR_2->lcl_hitm + VAR_2->rmt_hitm;

 FUNC_0(VAR_1, "=================================================\n");
 FUNC_0(VAR_1, "    Global Shared Cache Line Event Information   \n");
 FUNC_0(VAR_1, "=================================================\n");
 FUNC_0(VAR_1, "  Total Shared Cache Lines          : %10d\n", VAR_0.shared_clines);
 FUNC_0(VAR_1, "  Load HITs on shared lines         : %10d\n", VAR_2->load);
 FUNC_0(VAR_1, "  Fill Buffer Hits on shared lines  : %10d\n", VAR_2->ld_fbhit);
 FUNC_0(VAR_1, "  L1D hits on shared lines          : %10d\n", VAR_2->ld_l1hit);
 FUNC_0(VAR_1, "  L2D hits on shared lines          : %10d\n", VAR_2->ld_l2hit);
 FUNC_0(VAR_1, "  LLC hits on shared lines          : %10d\n", VAR_2->ld_llchit + VAR_2->lcl_hitm);
 FUNC_0(VAR_1, "  Locked Access on shared lines     : %10d\n", VAR_2->locks);
 FUNC_0(VAR_1, "  Store HITs on shared lines        : %10d\n", VAR_2->store);
 FUNC_0(VAR_1, "  Store L1D hits on shared lines    : %10d\n", VAR_2->st_l1hit);
 FUNC_0(VAR_1, "  Total Merged records              : %10d\n", VAR_3 + VAR_2->store);
}
