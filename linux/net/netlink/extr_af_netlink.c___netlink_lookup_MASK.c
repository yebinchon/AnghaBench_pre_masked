
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct netlink_table {int hash; } ;
struct netlink_compare_arg {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct netlink_compare_arg*,struct net*,int ) ;
 int VAR_0 ;
 struct sock* FUNC_1 (int *,struct netlink_compare_arg*,int ) ;

__attribute__((used)) static struct sock *FUNC_2(struct netlink_table *VAR_1, u32 VAR_2,
         struct net *VAR_3)
{
 struct netlink_compare_arg VAR_4;

 FUNC_0(&VAR_4, VAR_3, VAR_2);
 return FUNC_1(&VAR_1->hash, &VAR_4,
          VAR_0);
}
