
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int state; int ifindex; int * netdev_ops; scalar_t__ dev_addr; int addr_assign_type; } ;
struct lowpan_btle_dev {int list; int peers; TYPE_1__* hdev; struct net_device* netdev; } ;
struct l2cap_chan {int src_type; int src; int dst_type; int dst; TYPE_3__* conn; } ;
struct TYPE_6__ {TYPE_2__* hcon; } ;
struct TYPE_5__ {TYPE_1__* hdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,int ,int *,int ,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (struct net_device*,int *) ;
 int VAR_5 ;
 struct net_device* FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (void*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 struct lowpan_btle_dev* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct l2cap_chan *VAR_11, struct lowpan_btle_dev **VAR_12)
{
 struct net_device *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_6(FUNC_3(sizeof(struct lowpan_btle_dev)),
         VAR_1, VAR_4,
         VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->addr_assign_type = VAR_3;
 FUNC_7((void *)VAR_13->dev_addr, &VAR_11->src);

 VAR_13->netdev_ops = &VAR_9;
 FUNC_4(VAR_13, &VAR_11->conn->hcon->hdev->dev);
 FUNC_5(VAR_13, &VAR_7);

 *VAR_12 = FUNC_11(VAR_13);
 (*VAR_12)->netdev = VAR_13;
 (*VAR_12)->hdev = VAR_11->conn->hcon->hdev;
 FUNC_2(&(*VAR_12)->peers);

 FUNC_14(&VAR_8);
 FUNC_2(&(*VAR_12)->list);
 FUNC_9(&(*VAR_12)->list, &VAR_6);
 FUNC_15(&VAR_8);

 VAR_14 = FUNC_12(VAR_13, VAR_2);
 if (VAR_14 < 0) {
  FUNC_1("register_netdev failed %d", VAR_14);
  FUNC_14(&VAR_8);
  FUNC_10(&(*VAR_12)->list);
  FUNC_15(&VAR_8);
  FUNC_8(VAR_13);
  goto out;
 }

 FUNC_0("ifindex %d peer bdaddr %pMR type %d my addr %pMR type %d",
        VAR_13->ifindex, &VAR_11->dst, VAR_11->dst_type,
        &VAR_11->src, VAR_11->src_type);
 FUNC_13(VAR_5, &VAR_13->state);

 return 0;

out:
 return VAR_14;
}
