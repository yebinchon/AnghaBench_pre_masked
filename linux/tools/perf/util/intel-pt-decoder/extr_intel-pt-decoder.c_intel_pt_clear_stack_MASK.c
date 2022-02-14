
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_stack {scalar_t__ pos; scalar_t__ blk; } ;


 int FUNC_0 (struct intel_pt_stack*) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_stack *VAR_0)
{
 while (VAR_0->blk)
  FUNC_0(VAR_0);
 VAR_0->pos = 0;
}
