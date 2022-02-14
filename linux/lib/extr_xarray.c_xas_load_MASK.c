
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {scalar_t__ xa_shift; } ;
struct xa_node {scalar_t__ shift; } ;


 scalar_t__ FUNC_0 (void*) ;
 struct xa_node* FUNC_1 (void*) ;
 void* FUNC_2 (struct xa_state*,struct xa_node*) ;
 void* FUNC_3 (struct xa_state*) ;

void *FUNC_4(struct xa_state *VAR_0)
{
 void *VAR_1 = FUNC_3(VAR_0);

 while (FUNC_0(VAR_1)) {
  struct xa_node *VAR_2 = FUNC_1(VAR_1);

  if (VAR_0->xa_shift > VAR_2->shift)
   break;
  VAR_1 = FUNC_2(VAR_0, VAR_2);
  if (VAR_2->shift == 0)
   break;
 }
 return VAR_1;
}
