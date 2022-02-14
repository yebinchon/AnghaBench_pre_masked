
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct netlink_table {int hash; } ;
struct netlink_compare_arg {int dummy; } ;
struct TYPE_2__ {int node; int portid; } ;


 int FUNC_0 (struct netlink_compare_arg*,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct netlink_compare_arg*,int *,int ) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct netlink_table *VAR_1, struct sock *VAR_2)
{
 struct netlink_compare_arg VAR_3;

 FUNC_0(&VAR_3, FUNC_3(VAR_2), FUNC_1(VAR_2)->portid);
 return FUNC_2(&VAR_1->hash, &VAR_3,
         &FUNC_1(VAR_2)->node,
         VAR_0);
}
