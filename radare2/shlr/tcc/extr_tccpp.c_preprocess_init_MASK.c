
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ifdef_stack_ptr; } ;
struct TYPE_4__ {scalar_t__* pack_stack; scalar_t__* pack_stack_ptr; int ifdef_stack_ptr; int ifdef_stack; int include_stack; int include_stack_ptr; } ;
typedef TYPE_1__ TCCState ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(TCCState *VAR_3)
{
 VAR_3->include_stack_ptr = VAR_3->include_stack;


 VAR_3->ifdef_stack_ptr = VAR_3->ifdef_stack;
 VAR_0->ifdef_stack_ptr = VAR_3->ifdef_stack_ptr;

 VAR_2 = VAR_1 - 1;
 VAR_3->pack_stack[0] = 0;
 VAR_3->pack_stack_ptr = VAR_3->pack_stack;
}
