
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xa_state {unsigned int xa_index; TYPE_1__* xa_node; } ;
struct TYPE_2__ {unsigned int shift; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct xa_state *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3 = VAR_1->xa_node->shift;
 VAR_1->xa_index &= ~VAR_0 << VAR_3;
 VAR_1->xa_index += VAR_2 << VAR_3;
}
