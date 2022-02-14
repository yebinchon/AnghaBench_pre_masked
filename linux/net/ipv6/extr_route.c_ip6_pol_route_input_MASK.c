
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rt6_info {int dummy; } ;
struct net {int dummy; } ;
struct flowi6 {int flowi6_iif; } ;
struct fib6_table {int dummy; } ;


 struct rt6_info* FUNC_0 (struct net*,struct fib6_table*,int ,struct flowi6*,struct sk_buff const*,int) ;

__attribute__((used)) static struct rt6_info *FUNC_1(struct net *VAR_0,
         struct fib6_table *VAR_1,
         struct flowi6 *VAR_2,
         const struct sk_buff *VAR_3,
         int VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->flowi6_iif, VAR_2, VAR_3, VAR_4);
}
