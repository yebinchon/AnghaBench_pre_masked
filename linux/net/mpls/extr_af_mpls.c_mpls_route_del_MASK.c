
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net* nl_net; } ;
struct mpls_route_config {unsigned int rc_label; TYPE_1__ rc_nlinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,unsigned int*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net*,unsigned int,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct mpls_route_config *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct net *VAR_3 = VAR_1->rc_nlinfo.nl_net;
 unsigned VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = VAR_1->rc_label;

 if (!FUNC_0(VAR_3, &VAR_4, VAR_2))
  goto errout;

 FUNC_1(VAR_3, VAR_4, ((void*)0), &VAR_1->rc_nlinfo);

 VAR_5 = 0;
errout:
 return VAR_5;
}
