
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ ifindex; } ;
struct net {int dummy; } ;
struct TYPE_5__ {scalar_t__ connection_id; } ;
struct TYPE_6__ {TYPE_1__ dgm; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {int protocol; TYPE_3__ sockaddr; } ;
struct chnl_net {TYPE_4__ conn_req; int list_field; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nlattr**,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 struct chnl_net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_3, struct net_device *VAR_4,
     struct nlattr *VAR_5[], struct nlattr *VAR_6[],
     struct netlink_ext_ack *VAR_7)
{
 int VAR_8;
 struct chnl_net *VAR_9;
 FUNC_0();
 VAR_9 = FUNC_3(VAR_4);
 FUNC_1(VAR_6, &VAR_9->conn_req);

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8)
  FUNC_4("device rtml registration failed\n");
 else
  FUNC_2(&VAR_9->list_field, &VAR_2);


 if (VAR_9->conn_req.sockaddr.u.dgm.connection_id == VAR_1) {
  VAR_9->conn_req.sockaddr.u.dgm.connection_id = VAR_4->ifindex;
  VAR_9->conn_req.protocol = VAR_0;
 }
 return VAR_8;
}
