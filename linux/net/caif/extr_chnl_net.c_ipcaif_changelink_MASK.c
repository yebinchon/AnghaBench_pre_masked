
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct chnl_net {int conn_req; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct nlattr**,int *) ;
 struct chnl_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct nlattr *VAR_1[],
        struct nlattr *VAR_2[],
        struct netlink_ext_ack *VAR_3)
{
 struct chnl_net *VAR_4;
 FUNC_0();
 VAR_4 = FUNC_2(VAR_0);
 FUNC_1(VAR_2, &VAR_4->conn_req);
 FUNC_3(VAR_0);
 return 0;
}
