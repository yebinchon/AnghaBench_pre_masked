
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt6key {int addr; } ;
struct in6_addr {int dummy; } ;
struct fib6_node {int fn_bit; int fn_flags; int left; int right; int leaf; } ;
struct fib6_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr const*,int) ;
 int FUNC_1 (int *,struct in6_addr const*,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static struct fib6_node *FUNC_3(struct fib6_node *VAR_1,
           const struct in6_addr *VAR_2,
           int VAR_3, int VAR_4,
           bool VAR_5)
{
 struct fib6_node *VAR_6, *VAR_7 = ((void*)0);

 for (VAR_6 = VAR_1; VAR_6 ; ) {
  struct fib6_info *VAR_8 = FUNC_2(VAR_6->leaf);
  struct rt6key *VAR_9;


  if (!VAR_8) {
   if (VAR_3 <= VAR_6->fn_bit)
    goto out;
   else
    goto next;
  }

  VAR_9 = (struct rt6key *)((u8 *)VAR_8 + VAR_4);




  if (VAR_3 < VAR_6->fn_bit ||
      !FUNC_1(&VAR_9->addr, VAR_2, VAR_6->fn_bit))
   goto out;

  if (VAR_3 == VAR_6->fn_bit)
   return VAR_6;

  if (VAR_6->fn_flags & VAR_0)
   VAR_7 = VAR_6;

next:



  if (FUNC_0(VAR_2, VAR_6->fn_bit))
   VAR_6 = FUNC_2(VAR_6->right);
  else
   VAR_6 = FUNC_2(VAR_6->left);
 }
out:
 if (VAR_5)
  return ((void*)0);
 else
  return VAR_7;
}
