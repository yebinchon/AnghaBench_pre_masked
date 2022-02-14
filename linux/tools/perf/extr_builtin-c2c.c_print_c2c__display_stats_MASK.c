
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct c2c_stats {int lcl_dram; int rmt_dram; int rmt_hit; int rmt_hitm; double nr_entries; double locks; double load; double ld_uncache; double ld_io; double ld_miss; double ld_noadrs; double ld_fbhit; double ld_l1hit; double ld_l2hit; double ld_llchit; double lcl_hitm; double ld_excl; double ld_shared; double store; double st_uncache; double st_noadrs; double st_l1hit; double st_l1miss; double nomap; double noparse; } ;
struct TYPE_3__ {struct c2c_stats stats; } ;
struct TYPE_4__ {TYPE_1__ hists; } ;
typedef int FILE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_1)
{
 int VAR_2;
 struct c2c_stats *VAR_3 = &VAR_0.hists.stats;

 VAR_2 = VAR_3->lcl_dram +
       VAR_3->rmt_dram +
       VAR_3->rmt_hit +
       VAR_3->rmt_hitm;

 FUNC_0(VAR_1, "=================================================\n");
 FUNC_0(VAR_1, "            Trace Event Information              \n");
 FUNC_0(VAR_1, "=================================================\n");
 FUNC_0(VAR_1, "  Total records                     : %10d\n", VAR_3->nr_entries);
 FUNC_0(VAR_1, "  Locked Load/Store Operations      : %10d\n", VAR_3->locks);
 FUNC_0(VAR_1, "  Load Operations                   : %10d\n", VAR_3->load);
 FUNC_0(VAR_1, "  Loads - uncacheable               : %10d\n", VAR_3->ld_uncache);
 FUNC_0(VAR_1, "  Loads - IO                        : %10d\n", VAR_3->ld_io);
 FUNC_0(VAR_1, "  Loads - Miss                      : %10d\n", VAR_3->ld_miss);
 FUNC_0(VAR_1, "  Loads - no mapping                : %10d\n", VAR_3->ld_noadrs);
 FUNC_0(VAR_1, "  Load Fill Buffer Hit              : %10d\n", VAR_3->ld_fbhit);
 FUNC_0(VAR_1, "  Load L1D hit                      : %10d\n", VAR_3->ld_l1hit);
 FUNC_0(VAR_1, "  Load L2D hit                      : %10d\n", VAR_3->ld_l2hit);
 FUNC_0(VAR_1, "  Load LLC hit                      : %10d\n", VAR_3->ld_llchit + VAR_3->lcl_hitm);
 FUNC_0(VAR_1, "  Load Local HITM                   : %10d\n", VAR_3->lcl_hitm);
 FUNC_0(VAR_1, "  Load Remote HITM                  : %10d\n", VAR_3->rmt_hitm);
 FUNC_0(VAR_1, "  Load Remote HIT                   : %10d\n", VAR_3->rmt_hit);
 FUNC_0(VAR_1, "  Load Local DRAM                   : %10d\n", VAR_3->lcl_dram);
 FUNC_0(VAR_1, "  Load Remote DRAM                  : %10d\n", VAR_3->rmt_dram);
 FUNC_0(VAR_1, "  Load MESI State Exclusive         : %10d\n", VAR_3->ld_excl);
 FUNC_0(VAR_1, "  Load MESI State Shared            : %10d\n", VAR_3->ld_shared);
 FUNC_0(VAR_1, "  Load LLC Misses                   : %10d\n", VAR_2);
 FUNC_0(VAR_1, "  LLC Misses to Local DRAM          : %10.1f%%\n", ((double)VAR_3->lcl_dram/(double)VAR_2) * 100.);
 FUNC_0(VAR_1, "  LLC Misses to Remote DRAM         : %10.1f%%\n", ((double)VAR_3->rmt_dram/(double)VAR_2) * 100.);
 FUNC_0(VAR_1, "  LLC Misses to Remote cache (HIT)  : %10.1f%%\n", ((double)VAR_3->rmt_hit /(double)VAR_2) * 100.);
 FUNC_0(VAR_1, "  LLC Misses to Remote cache (HITM) : %10.1f%%\n", ((double)VAR_3->rmt_hitm/(double)VAR_2) * 100.);
 FUNC_0(VAR_1, "  Store Operations                  : %10d\n", VAR_3->store);
 FUNC_0(VAR_1, "  Store - uncacheable               : %10d\n", VAR_3->st_uncache);
 FUNC_0(VAR_1, "  Store - no mapping                : %10d\n", VAR_3->st_noadrs);
 FUNC_0(VAR_1, "  Store L1D Hit                     : %10d\n", VAR_3->st_l1hit);
 FUNC_0(VAR_1, "  Store L1D Miss                    : %10d\n", VAR_3->st_l1miss);
 FUNC_0(VAR_1, "  No Page Map Rejects               : %10d\n", VAR_3->nomap);
 FUNC_0(VAR_1, "  Unable to parse data source       : %10d\n", VAR_3->noparse);
}
