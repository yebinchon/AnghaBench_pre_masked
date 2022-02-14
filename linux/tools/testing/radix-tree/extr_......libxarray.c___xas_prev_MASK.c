
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct xa_state {int xa_offset; TYPE_1__* xa_node; int xa; int xa_index; } ;
struct TYPE_8__ {int offset; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 void* FUNC_1 (struct xa_state*) ;
 void* FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (struct xa_state*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct xa_state*) ;

void *FUNC_10(struct xa_state *VAR_0)
{
 void *VAR_1;

 if (!FUNC_6(VAR_0->xa_node))
  VAR_0->xa_index--;
 if (!VAR_0->xa_node)
  return FUNC_1(VAR_0);
 if (FUNC_8(VAR_0->xa_node))
  return FUNC_7(VAR_0);

 if (VAR_0->xa_offset != FUNC_0(VAR_0->xa_index, VAR_0->xa_node))
  VAR_0->xa_offset--;

 while (VAR_0->xa_offset == 255) {
  VAR_0->xa_offset = VAR_0->xa_node->offset - 1;
  VAR_0->xa_node = FUNC_4(VAR_0->xa, VAR_0->xa_node);
  if (!VAR_0->xa_node)
   return FUNC_1(VAR_0);
 }

 for (;;) {
  VAR_1 = FUNC_2(VAR_0->xa, VAR_0->xa_node, VAR_0->xa_offset);
  if (!FUNC_3(VAR_1))
   return VAR_1;

  VAR_0->xa_node = FUNC_5(VAR_1);
  FUNC_9(VAR_0);
 }
}
