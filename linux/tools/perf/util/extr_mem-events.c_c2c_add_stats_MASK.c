
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2c_stats {scalar_t__ noparse; scalar_t__ nomap; scalar_t__ rmt_dram; scalar_t__ lcl_dram; scalar_t__ rmt_hit; scalar_t__ tot_hitm; scalar_t__ rmt_hitm; scalar_t__ lcl_hitm; scalar_t__ ld_llchit; scalar_t__ ld_l2hit; scalar_t__ ld_l1hit; scalar_t__ ld_fbhit; scalar_t__ ld_noadrs; scalar_t__ ld_miss; scalar_t__ ld_io; scalar_t__ ld_uncache; scalar_t__ ld_shared; scalar_t__ ld_excl; scalar_t__ load; scalar_t__ st_l1miss; scalar_t__ st_l1hit; scalar_t__ st_noadrs; scalar_t__ st_uncache; scalar_t__ store; scalar_t__ locks; scalar_t__ nr_entries; } ;



void FUNC_0(struct c2c_stats *VAR_0, struct c2c_stats *VAR_1)
{
 VAR_0->nr_entries += VAR_1->nr_entries;

 VAR_0->locks += VAR_1->locks;
 VAR_0->store += VAR_1->store;
 VAR_0->st_uncache += VAR_1->st_uncache;
 VAR_0->st_noadrs += VAR_1->st_noadrs;
 VAR_0->st_l1hit += VAR_1->st_l1hit;
 VAR_0->st_l1miss += VAR_1->st_l1miss;
 VAR_0->load += VAR_1->load;
 VAR_0->ld_excl += VAR_1->ld_excl;
 VAR_0->ld_shared += VAR_1->ld_shared;
 VAR_0->ld_uncache += VAR_1->ld_uncache;
 VAR_0->ld_io += VAR_1->ld_io;
 VAR_0->ld_miss += VAR_1->ld_miss;
 VAR_0->ld_noadrs += VAR_1->ld_noadrs;
 VAR_0->ld_fbhit += VAR_1->ld_fbhit;
 VAR_0->ld_l1hit += VAR_1->ld_l1hit;
 VAR_0->ld_l2hit += VAR_1->ld_l2hit;
 VAR_0->ld_llchit += VAR_1->ld_llchit;
 VAR_0->lcl_hitm += VAR_1->lcl_hitm;
 VAR_0->rmt_hitm += VAR_1->rmt_hitm;
 VAR_0->tot_hitm += VAR_1->tot_hitm;
 VAR_0->rmt_hit += VAR_1->rmt_hit;
 VAR_0->lcl_dram += VAR_1->lcl_dram;
 VAR_0->rmt_dram += VAR_1->rmt_dram;
 VAR_0->nomap += VAR_1->nomap;
 VAR_0->noparse += VAR_1->noparse;
}
