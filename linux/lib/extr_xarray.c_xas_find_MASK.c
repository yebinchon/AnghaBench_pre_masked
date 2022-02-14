
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct xa_state {int xa_index; int xa_offset; TYPE_1__* xa_node; int xa; } ;
struct TYPE_8__ {scalar_t__ offset; int shift; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct xa_state*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (void*) ;
 int FUNC_7 (struct xa_state*) ;
 scalar_t__ FUNC_8 (struct xa_state*) ;
 void* FUNC_9 (struct xa_state*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

void *FUNC_12(struct xa_state *VAR_3, unsigned long VAR_4)
{
 void *VAR_5;

 if (FUNC_8(VAR_3))
  return ((void*)0);

 if (!VAR_3->xa_node) {
  VAR_3->xa_index = 1;
  return FUNC_0(VAR_3);
 } else if (FUNC_11(VAR_3->xa_node)) {
  VAR_5 = FUNC_9(VAR_3);
  if (VAR_5 || FUNC_10(VAR_3->xa_node))
   return VAR_5;
 } else if (!VAR_3->xa_node->shift &&
      VAR_3->xa_offset != (VAR_3->xa_index & VAR_1)) {
  VAR_3->xa_offset = ((VAR_3->xa_index - 1) & VAR_1) + 1;
 }

 FUNC_7(VAR_3);

 while (VAR_3->xa_node && (VAR_3->xa_index <= VAR_4)) {
  if (FUNC_1(VAR_3->xa_offset == VAR_2)) {
   VAR_3->xa_offset = VAR_3->xa_node->offset + 1;
   VAR_3->xa_node = FUNC_5(VAR_3->xa, VAR_3->xa_node);
   continue;
  }

  VAR_5 = FUNC_2(VAR_3->xa, VAR_3->xa_node, VAR_3->xa_offset);
  if (FUNC_3(VAR_5)) {
   VAR_3->xa_node = FUNC_6(VAR_5);
   VAR_3->xa_offset = 0;
   continue;
  }
  if (VAR_5 && !FUNC_4(VAR_5))
   return VAR_5;

  FUNC_7(VAR_3);
 }

 if (!VAR_3->xa_node)
  VAR_3->xa_node = VAR_0;
 return ((void*)0);
}
