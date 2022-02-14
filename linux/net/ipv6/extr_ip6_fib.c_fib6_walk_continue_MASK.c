
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_walker {int state; int (* func ) (struct fib6_walker*) ;struct fib6_node* node; void* leaf; struct fib6_node* root; int count; int skip; } ;
struct fib6_node {int fn_flags; int leaf; int right; int left; int parent; } ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;

 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (struct fib6_walker*) ;

__attribute__((used)) static int FUNC_5(struct fib6_walker *VAR_4)
{
 struct fib6_node *VAR_5, *VAR_6, *VAR_7, *VAR_8;


 FUNC_2(!(VAR_4->root->fn_flags & VAR_3));

 for (;;) {
  VAR_5 = VAR_4->node;
  if (!VAR_5)
   return 0;

  switch (VAR_4->state) {
  case 131:
   VAR_7 = FUNC_3(VAR_5->left, 1);
   if (VAR_7) {
    VAR_4->node = VAR_7;
    VAR_4->state = VAR_0;
    continue;
   }
   VAR_4->state = 130;

  case 130:
   VAR_8 = FUNC_3(VAR_5->right, 1);
   if (VAR_8) {
    VAR_4->node = VAR_8;
    VAR_4->state = VAR_0;
    continue;
   }
   VAR_4->state = 132;
   VAR_4->leaf = FUNC_3(VAR_5->leaf, 1);

  case 132:
   if (VAR_4->leaf && VAR_5->fn_flags & VAR_2) {
    int VAR_9;

    if (VAR_4->skip) {
     VAR_4->skip--;
     goto skip;
    }

    VAR_9 = VAR_4->func(VAR_4);
    if (VAR_9)
     return VAR_9;

    VAR_4->count++;
    continue;
   }
skip:
   VAR_4->state = 128;

  case 128:
   if (VAR_5 == VAR_4->root)
    return 0;
   VAR_6 = FUNC_3(VAR_5->parent, 1);
   VAR_7 = FUNC_3(VAR_6->left, 1);
   VAR_8 = FUNC_3(VAR_6->right, 1);
   VAR_4->node = VAR_6;







   if (VAR_7 == VAR_5) {
    VAR_4->state = 130;
    continue;
   }
   if (VAR_8 == VAR_5) {
    VAR_4->state = 132;
    VAR_4->leaf = FUNC_3(VAR_4->node->leaf, 1);
    continue;
   }



  }
 }
}
