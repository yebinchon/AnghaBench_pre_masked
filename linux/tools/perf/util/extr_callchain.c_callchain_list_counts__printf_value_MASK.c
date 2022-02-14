
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct callchain_list {int brtype_stat; int from_count; int iter_cycles; int iter_count; int cycles_count; int abort_count; int predicted_count; int branch_count; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int ,int ,int ,int ,int ,int ,int ,int *) ;

int FUNC_1(struct callchain_list *VAR_0,
     FILE *VAR_1, char *VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5;
 u64 VAR_6, VAR_7;
 u64 VAR_8, VAR_9;
 u64 VAR_10;

 VAR_4 = VAR_0->branch_count;
 VAR_5 = VAR_0->predicted_count;
 VAR_6 = VAR_0->abort_count;
 VAR_7 = VAR_0->cycles_count;
 VAR_8 = VAR_0->iter_count;
 VAR_9 = VAR_0->iter_cycles;
 VAR_10 = VAR_0->from_count;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6,
           VAR_7, VAR_8, VAR_9,
           VAR_10, &VAR_0->brtype_stat);
}
