
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct wb_domain {int completions; } ;
struct dirty_throttle_control {unsigned long thresh; int wb; int wb_completions; } ;


 int VAR_0 ;
 int FUNC_0 (long,long) ;
 struct wb_domain* FUNC_1 (struct dirty_throttle_control*) ;
 int FUNC_2 (int *,int ,long*,long*) ;
 int FUNC_3 (int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_4(struct dirty_throttle_control *VAR_1)
{
 struct wb_domain *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3 = VAR_1->thresh;
 u64 VAR_4;
 long VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;




 FUNC_2(&VAR_2->completions, VAR_1->wb_completions,
         &VAR_5, &VAR_6);

 VAR_4 = (VAR_3 * (100 - VAR_0)) / 100;
 VAR_4 *= VAR_5;
 FUNC_0(VAR_4, VAR_6);

 FUNC_3(VAR_1->wb, &VAR_7, &VAR_8);

 VAR_4 += (VAR_3 * VAR_7) / 100;
 if (VAR_4 > (VAR_3 * VAR_8) / 100)
  VAR_4 = VAR_3 * VAR_8 / 100;

 return VAR_4;
}
