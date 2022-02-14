
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_if_parms {int if_id; int link; } ;
struct xfrm_if {struct xfrm_if_parms p; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfrm_if* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, const struct net_device *VAR_4)
{
 struct xfrm_if *VAR_5 = FUNC_0(VAR_4);
 struct xfrm_if_parms *VAR_6 = &VAR_5->p;

 if (FUNC_1(VAR_3, VAR_2, VAR_6->link) ||
     FUNC_1(VAR_3, VAR_1, VAR_6->if_id))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -VAR_0;
}
