
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genradix_root {void* data; struct genradix_root** children; } ;
struct genradix_node {void* data; struct genradix_node** children; } ;
struct __genradix {struct genradix_root* root; } ;
typedef int gfp_t ;


 struct genradix_root* FUNC_0 (struct genradix_root*) ;
 struct genradix_root* FUNC_1 (struct genradix_root**,struct genradix_root*,struct genradix_root*) ;
 struct genradix_root* FUNC_2 (int ) ;
 size_t FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct genradix_root*) ;
 unsigned int FUNC_6 (struct genradix_root*) ;
 struct genradix_root* FUNC_7 (struct genradix_root*) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (struct genradix_root*,struct genradix_root*) ;

void *FUNC_10(struct __genradix *VAR_0, size_t VAR_1,
      gfp_t VAR_2)
{
 struct genradix_root *VAR_3 = FUNC_0(VAR_0->root);
 struct genradix_node *VAR_4, *VAR_5 = ((void*)0);
 unsigned VAR_6;


 while (1) {
  struct genradix_root *VAR_7 = VAR_3, *VAR_8;

  VAR_4 = FUNC_7(VAR_7);
  VAR_6 = FUNC_6(VAR_7);

  if (VAR_4 && FUNC_8(VAR_1) < FUNC_3(VAR_6))
   break;

  if (!VAR_5) {
   VAR_5 = FUNC_2(VAR_2);
   if (!VAR_5)
    return ((void*)0);
  }

  VAR_5->children[0] = VAR_4;
  VAR_8 = ((struct genradix_root *)
       ((unsigned long) VAR_5 | (VAR_4 ? VAR_6 + 1 : 0)));

  if ((VAR_3 = FUNC_1(&VAR_0->root, VAR_7, VAR_8)) == VAR_7) {
   VAR_3 = VAR_8;
   VAR_5 = ((void*)0);
  }
 }

 while (VAR_6--) {
  struct genradix_node **VAR_9 =
   &VAR_4->children[VAR_1 >> FUNC_3(VAR_6)];
  VAR_1 &= FUNC_4(VAR_6) - 1;

  VAR_4 = FUNC_0(*VAR_9);
  if (!VAR_4) {
   if (!VAR_5) {
    VAR_5 = FUNC_2(VAR_2);
    if (!VAR_5)
     return ((void*)0);
   }

   if (!(VAR_4 = FUNC_1(VAR_9, ((void*)0), VAR_5)))
    FUNC_9(VAR_4, VAR_5);
  }
 }

 if (VAR_5)
  FUNC_5(VAR_5);

 return &VAR_4->data[VAR_1];
}
