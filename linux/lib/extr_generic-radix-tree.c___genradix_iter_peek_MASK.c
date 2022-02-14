
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genradix_root {int dummy; } ;
struct genradix_node {void* data; struct genradix_node** children; } ;
struct genradix_iter {int offset; size_t pos; } ;
struct __genradix {int root; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct genradix_root* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct genradix_root*) ;
 struct genradix_node* FUNC_4 (struct genradix_root*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

void *FUNC_7(struct genradix_iter *VAR_3,
      struct __genradix *VAR_4,
      size_t VAR_5)
{
 struct genradix_root *VAR_6;
 struct genradix_node *VAR_7;
 unsigned VAR_8, VAR_9;
restart:
 VAR_6 = FUNC_0(VAR_4->root);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_6);
 VAR_8 = FUNC_3(VAR_6);

 if (FUNC_5(VAR_3->offset) >= FUNC_1(VAR_8))
  return ((void*)0);

 while (VAR_8) {
  VAR_8--;

  VAR_9 = (VAR_3->offset >> FUNC_1(VAR_8)) &
   (VAR_0 - 1);

  while (!VAR_7->children[VAR_9]) {
   VAR_9++;
   VAR_3->offset = FUNC_6(VAR_3->offset +
        FUNC_2(VAR_8),
        FUNC_2(VAR_8));
   VAR_3->pos = (VAR_3->offset >> VAR_1) *
    VAR_5;
   if (VAR_9 == VAR_0)
    goto restart;
  }

  VAR_7 = VAR_7->children[VAR_9];
 }

 return &VAR_7->data[VAR_3->offset & (VAR_2 - 1)];
}
