
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct netlink_sock {int * groups; int ngroups; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int *) ;
 struct netlink_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->groups == ((void*)0))
  return 0;

 return FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_3->ngroups),
         VAR_3->groups);
}
