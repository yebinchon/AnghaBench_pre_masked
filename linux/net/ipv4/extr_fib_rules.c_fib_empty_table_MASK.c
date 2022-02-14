
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct fib_table {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net*,int) ;
 struct fib_table* FUNC_1 (struct net*,int) ;

__attribute__((used)) static struct fib_table *FUNC_2(struct net *VAR_1)
{
 u32 VAR_2 = 1;

 while (1) {
  if (!FUNC_0(VAR_1, VAR_2))
   return FUNC_1(VAR_1, VAR_2);

  if (VAR_2++ == VAR_0)
   break;
 }
 return ((void*)0);
}
