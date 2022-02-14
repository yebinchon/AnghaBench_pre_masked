
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct fib6_node {int fn_flags; int parent; } ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fib6_node* FUNC_1 (struct fib6_node*,int *,struct in6_addr*) ;
 struct fib6_node* FUNC_2 (int ) ;

__attribute__((used)) static struct fib6_node* FUNC_3(struct fib6_node *VAR_2,
     struct in6_addr *VAR_3)
{
 struct fib6_node *VAR_4, *VAR_5;
 while (1) {
  if (VAR_2->fn_flags & VAR_1)
   return ((void*)0);
  VAR_4 = FUNC_2(VAR_2->parent);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 && VAR_5 != VAR_2)
   VAR_2 = FUNC_1(VAR_5, ((void*)0), VAR_3);
  else
   VAR_2 = VAR_4;
  if (VAR_2->fn_flags & VAR_0)
   return VAR_2;
 }
}
