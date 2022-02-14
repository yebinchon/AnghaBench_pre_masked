
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct compute_stats {int load; int lcl_hitm; int rmt_hitm; } ;
struct c2c_stats {scalar_t__ load; scalar_t__ lcl_hitm; scalar_t__ rmt_hitm; } ;
struct c2c_hist_entry {struct compute_stats cstats; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct c2c_hist_entry *VAR_0,
     struct c2c_stats *VAR_1,
     u64 VAR_2)
{
 struct compute_stats *VAR_3 = &VAR_0->cstats;

 if (VAR_1->rmt_hitm)
  FUNC_0(&VAR_3->rmt_hitm, VAR_2);
 else if (VAR_1->lcl_hitm)
  FUNC_0(&VAR_3->lcl_hitm, VAR_2);
 else if (VAR_1->load)
  FUNC_0(&VAR_3->load, VAR_2);
}
