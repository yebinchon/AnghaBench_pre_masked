
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genradix_root {int dummy; } ;
struct genradix_node {void* data; struct genradix_node** children; } ;
struct __genradix {int root; } ;


 struct genradix_root* FUNC_0 (int ) ;
 size_t FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct genradix_root*) ;
 struct genradix_node* FUNC_4 (struct genradix_root*) ;
 size_t FUNC_5 (size_t) ;

void *FUNC_6(struct __genradix *VAR_0, size_t VAR_1)
{
 struct genradix_root *VAR_2 = FUNC_0(VAR_0->root);
 struct genradix_node *VAR_3 = FUNC_4(VAR_2);
 unsigned VAR_4 = FUNC_3(VAR_2);

 if (FUNC_5(VAR_1) >= FUNC_1(VAR_4))
  return ((void*)0);

 while (1) {
  if (!VAR_3)
   return ((void*)0);
  if (!VAR_4)
   break;

  VAR_4--;

  VAR_3 = VAR_3->children[VAR_1 >> FUNC_1(VAR_4)];
  VAR_1 &= FUNC_2(VAR_4) - 1;
 }

 return &VAR_3->data[VAR_1];
}
