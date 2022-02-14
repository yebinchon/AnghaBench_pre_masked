
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; int prev; } ;
struct xa_node {int ** marks; TYPE_1__ private_list; int array; int nr_values; int count; int shift; scalar_t__ parent; int offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(const struct xa_node *VAR_2)
{
 unsigned VAR_3, VAR_4;

 if (!VAR_2)
  return;
 if ((unsigned long)VAR_2 & 3) {
  FUNC_0("node %px\n", VAR_2);
  return;
 }

 FUNC_0("node %px %s %d parent %px shift %d count %d values %d "
  "array %px list %px %px marks",
  VAR_2, VAR_2->parent ? "offset" : "max", VAR_2->offset,
  VAR_2->parent, VAR_2->shift, VAR_2->count, VAR_2->nr_values,
  VAR_2->array, VAR_2->private_list.prev, VAR_2->private_list.next);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_0(" %lx", VAR_2->marks[VAR_3][VAR_4]);
 FUNC_0("\n");
}
