
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_stack {struct intel_pt_blk* spare; struct intel_pt_blk* blk; } ;
struct intel_pt_blk {struct intel_pt_blk* prev; } ;


 int FUNC_0 (struct intel_pt_blk*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_stack *VAR_0)
{
 struct intel_pt_blk *VAR_1 = VAR_0->blk;

 VAR_0->blk = VAR_1->prev;
 if (!VAR_0->spare)
  VAR_0->spare = VAR_1;
 else
  FUNC_0(VAR_1);
}
