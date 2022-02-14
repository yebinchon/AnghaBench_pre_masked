
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_stack {scalar_t__ pos; struct intel_pt_blk* blk; struct intel_pt_blk* spare; } ;
struct intel_pt_blk {struct intel_pt_blk* prev; } ;


 int VAR_0 ;
 struct intel_pt_blk* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_stack *VAR_1)
{
 struct intel_pt_blk *VAR_2;

 if (VAR_1->spare) {
  VAR_2 = VAR_1->spare;
  VAR_1->spare = ((void*)0);
 } else {
  VAR_2 = FUNC_0(sizeof(struct intel_pt_blk));
  if (!VAR_2)
   return -VAR_0;
 }

 VAR_2->prev = VAR_1->blk;
 VAR_1->blk = VAR_2;
 VAR_1->pos = 0;
 return 0;
}
