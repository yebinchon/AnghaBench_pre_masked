
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct xa_state {scalar_t__ xa_offset; TYPE_1__* xa_node; int xa; int xa_index; } ;
struct TYPE_8__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 void* FUNC_1 (struct xa_state*) ;
 void* FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (void*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (struct xa_state*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct xa_state*) ;

void *FUNC_10(struct xa_state *VAR_1)
{
 void *VAR_2;

 if (!FUNC_6(VAR_1->xa_node))
  VAR_1->xa_index++;
 if (!VAR_1->xa_node)
  return FUNC_1(VAR_1);
 if (FUNC_8(VAR_1->xa_node))
  return FUNC_7(VAR_1);

 if (VAR_1->xa_offset != FUNC_0(VAR_1->xa_index, VAR_1->xa_node))
  VAR_1->xa_offset++;

 while (VAR_1->xa_offset == VAR_0) {
  VAR_1->xa_offset = VAR_1->xa_node->offset + 1;
  VAR_1->xa_node = FUNC_4(VAR_1->xa, VAR_1->xa_node);
  if (!VAR_1->xa_node)
   return FUNC_1(VAR_1);
 }

 for (;;) {
  VAR_2 = FUNC_2(VAR_1->xa, VAR_1->xa_node, VAR_1->xa_offset);
  if (!FUNC_3(VAR_2))
   return VAR_2;

  VAR_1->xa_node = FUNC_5(VAR_2);
  FUNC_9(VAR_1);
 }
}
