
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct intel_pt_stack {scalar_t__ pos; TYPE_1__* blk; } ;
struct TYPE_2__ {int * ip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_pt_stack*) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_stack *VAR_1, uint64_t VAR_2)
{
 int VAR_3;

 if (!VAR_1->blk || VAR_1->pos == VAR_0) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 VAR_1->blk->ip[VAR_1->pos++] = VAR_2;
 return 0;
}
