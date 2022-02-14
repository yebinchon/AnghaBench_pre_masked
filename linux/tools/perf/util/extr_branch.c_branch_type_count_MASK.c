
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct branch_type_stat {int cross_4k; int cross_2m; int cond_bwd; int cond_fwd; int * counts; } ;
struct branch_flags {size_t type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;

void FUNC_1(struct branch_type_stat *VAR_4, struct branch_flags *VAR_5,
         u64 VAR_6, u64 VAR_7)
{
 if (VAR_5->type == VAR_3 || VAR_6 == 0)
  return;

 VAR_4->counts[VAR_5->type]++;

 if (VAR_5->type == VAR_2) {
  if (VAR_7 > VAR_6)
   VAR_4->cond_fwd++;
  else
   VAR_4->cond_bwd++;
 }

 if (FUNC_0(VAR_6, VAR_7, VAR_0))
  VAR_4->cross_2m++;
 else if (FUNC_0(VAR_6, VAR_7, VAR_1))
  VAR_4->cross_4k++;
}
