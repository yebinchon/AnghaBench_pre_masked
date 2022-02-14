
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct block_range {scalar_t__ start; int coverage; scalar_t__ end; int taken; scalar_t__ pred; scalar_t__ is_branch; scalar_t__ entry; scalar_t__ is_target; } ;


 struct block_range* FUNC_0 (struct block_range*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct block_range *VAR_0, u64 VAR_1)
{
 bool VAR_2 = 1;

 if (!VAR_0)
  return;


 if (VAR_0->is_target && VAR_0->start == VAR_1) {
  struct block_range *VAR_3 = VAR_0;
  double VAR_4;




  while (!VAR_3->is_branch)
   VAR_3 = FUNC_0(VAR_3);

  VAR_4 = 100 *(double)VAR_0->entry / VAR_3->coverage;

  if (VAR_4 > 0.1) {
   if (VAR_2) {
    VAR_2 = 0;
    FUNC_1("\t#");
   }





   FUNC_1(" +%.2f%%", VAR_4);
  }
 }

 if (VAR_0->is_branch && VAR_0->end == VAR_1) {
  double VAR_5 = 100*(double)VAR_0->taken / VAR_0->coverage;

  if (VAR_5 > 0.1) {
   if (VAR_2) {
    VAR_2 = 0;
    FUNC_1("\t#");
   }





   FUNC_1(" -%.2f%% (p:%.2f%%)", VAR_5, 100*(double)VAR_0->pred / VAR_0->taken);
  }
 }
}
