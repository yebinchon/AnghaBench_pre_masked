
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct cyc_hist {int num_aggr; int num; int cycles_aggr; int cycles; int start; } ;
struct block_info {int end; int num_aggr; int num; int cycles_aggr; int cycles; int start; struct symbol* sym; } ;



__attribute__((used)) static void FUNC_0(struct block_info *VAR_0, struct symbol *VAR_1,
       struct cyc_hist *VAR_2, int VAR_3)
{
 VAR_0->sym = VAR_1;
 VAR_0->start = VAR_2->start;
 VAR_0->end = VAR_3;
 VAR_0->cycles = VAR_2->cycles;
 VAR_0->cycles_aggr = VAR_2->cycles_aggr;
 VAR_0->num = VAR_2->num;
 VAR_0->num_aggr = VAR_2->num_aggr;
}
