
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy_walk {int dummy; } ;
struct netlink_callback {scalar_t__ args; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfrm_policy_walk*,int ) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_1)
{
 struct xfrm_policy_walk *VAR_2 = (struct xfrm_policy_walk *)VAR_1->args;

 FUNC_0(sizeof(*VAR_2) > sizeof(VAR_1->args));

 FUNC_1(VAR_2, VAR_0);
 return 0;
}
