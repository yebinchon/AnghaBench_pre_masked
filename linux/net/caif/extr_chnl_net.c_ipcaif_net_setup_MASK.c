
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int needs_free_netdev; int tx_queue_len; int mtu; int flags; int priv_destructor; int * netdev_ops; } ;
struct TYPE_7__ {int connection_id; } ;
struct TYPE_8__ {TYPE_2__ dgm; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct TYPE_10__ {TYPE_4__ sockaddr; int priority; int link_selector; int protocol; } ;
struct TYPE_6__ {int ctrlcmd; int receive; } ;
struct chnl_net {int flowenabled; int netmgmt_wq; TYPE_5__ conn_req; struct net_device* netdev; TYPE_1__ chnl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int VAR_11 ;
 struct chnl_net* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_12)
{
 struct chnl_net *VAR_13;
 VAR_12->netdev_ops = &VAR_11;
 VAR_12->needs_free_netdev = 1;
 VAR_12->priv_destructor = VAR_9;
 VAR_12->flags |= VAR_5;
 VAR_12->flags |= VAR_6;
 VAR_12->mtu = VAR_4;
 VAR_12->tx_queue_len = VAR_2;

 VAR_13 = FUNC_1(VAR_12);
 VAR_13->chnl.receive = VAR_10;
 VAR_13->chnl.ctrlcmd = VAR_8;
 VAR_13->netdev = VAR_12;
 VAR_13->conn_req.protocol = VAR_0;
 VAR_13->conn_req.link_selector = VAR_1;
 VAR_13->conn_req.priority = VAR_3;

 VAR_13->conn_req.sockaddr.u.dgm.connection_id = VAR_7;
 VAR_13->flowenabled = 0;

 FUNC_0(&VAR_13->netmgmt_wq);
}
