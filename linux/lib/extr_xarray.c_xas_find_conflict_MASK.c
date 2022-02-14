
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xa_state {scalar_t__ xa_shift; int xa_offset; int xa_sibs; TYPE_1__* xa_node; int xa; } ;
struct xa_node {int dummy; } ;
struct TYPE_5__ {scalar_t__ shift; int offset; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (struct xa_state*,struct xa_node*) ;
 scalar_t__ FUNC_6 (struct xa_state*) ;
 void* FUNC_7 (struct xa_state*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

void *FUNC_9(struct xa_state *VAR_1)
{
 void *VAR_2;

 if (FUNC_6(VAR_1))
  return ((void*)0);

 if (!VAR_1->xa_node)
  return ((void*)0);

 if (FUNC_8(VAR_1->xa_node)) {
  VAR_2 = FUNC_7(VAR_1);
  if (!VAR_2)
   return ((void*)0);
  while (FUNC_1(VAR_2)) {
   struct xa_node *VAR_3 = FUNC_4(VAR_2);
   VAR_2 = FUNC_5(VAR_1, VAR_3);
  }
  if (VAR_2)
   return VAR_2;
 }

 if (VAR_1->xa_node->shift > VAR_1->xa_shift)
  return ((void*)0);

 for (;;) {
  if (VAR_1->xa_node->shift == VAR_1->xa_shift) {
   if ((VAR_1->xa_offset & VAR_1->xa_sibs) == VAR_1->xa_sibs)
    break;
  } else if (VAR_1->xa_offset == VAR_0) {
   VAR_1->xa_offset = VAR_1->xa_node->offset;
   VAR_1->xa_node = FUNC_3(VAR_1->xa, VAR_1->xa_node);
   if (!VAR_1->xa_node)
    break;
   continue;
  }
  VAR_2 = FUNC_0(VAR_1->xa, VAR_1->xa_node, ++VAR_1->xa_offset);
  if (FUNC_2(VAR_2))
   continue;
  while (FUNC_1(VAR_2)) {
   VAR_1->xa_node = FUNC_4(VAR_2);
   VAR_1->xa_offset = 0;
   VAR_2 = FUNC_0(VAR_1->xa, VAR_1->xa_node, 0);
  }
  if (VAR_2)
   return VAR_2;
 }
 VAR_1->xa_offset -= VAR_1->xa_sibs;
 return ((void*)0);
}
