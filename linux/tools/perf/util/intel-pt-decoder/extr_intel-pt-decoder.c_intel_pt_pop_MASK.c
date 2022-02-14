
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct intel_pt_stack {size_t pos; TYPE_1__* blk; } ;
struct TYPE_2__ {int * ip; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct intel_pt_stack*) ;

__attribute__((used)) static uint64_t FUNC_1(struct intel_pt_stack *VAR_1)
{
 if (!VAR_1->pos) {
  if (!VAR_1->blk)
   return 0;
  FUNC_0(VAR_1);
  if (!VAR_1->blk)
   return 0;
  VAR_1->pos = VAR_0;
 }
 return VAR_1->blk->ip[--VAR_1->pos];
}
