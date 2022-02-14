
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt6key {int plen; int addr; } ;
struct lookup_args {scalar_t__ offset; int addr; } ;
struct fib6_node {int fn_flags; int parent; int leaf; int left; int right; int fn_bit; } ;
struct fib6_info {int dummy; } ;
typedef scalar_t__ __be32 ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct fib6_node *FUNC_5(struct fib6_node *VAR_2,
         struct lookup_args *VAR_3)
{
 struct fib6_node *VAR_4;
 __be32 VAR_5;

 if (FUNC_4(VAR_3->offset == 0))
  return ((void*)0);





 VAR_4 = VAR_2;

 for (;;) {
  struct fib6_node *VAR_6;

  VAR_5 = FUNC_1(VAR_3->addr, VAR_4->fn_bit);

  VAR_6 = VAR_5 ? FUNC_3(VAR_4->right) :
        FUNC_3(VAR_4->left);

  if (VAR_6) {
   VAR_4 = VAR_6;
   continue;
  }
  break;
 }

 while (VAR_4) {
  struct fib6_node *VAR_7 = FUNC_0(VAR_4);

  if (VAR_7 || VAR_4->fn_flags & VAR_1) {
   struct fib6_info *VAR_8 = FUNC_3(VAR_4->leaf);
   struct rt6key *VAR_9;

   if (!VAR_8)
    goto backtrack;

   VAR_9 = (struct rt6key *) ((u8 *)VAR_8 + VAR_3->offset);

   if (FUNC_2(&VAR_9->addr, VAR_3->addr, VAR_9->plen)) {
    if (VAR_4->fn_flags & VAR_1)
     return VAR_4;
   }
  }
backtrack:
  if (VAR_4->fn_flags & VAR_0)
   break;

  VAR_4 = FUNC_3(VAR_4->parent);
 }

 return ((void*)0);
}
