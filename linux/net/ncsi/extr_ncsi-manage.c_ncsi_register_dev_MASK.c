
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; int func; int type; } ;
struct ncsi_dev {void (* handler ) (struct ncsi_dev*) ;struct net_device* dev; int state; } ;
struct ncsi_dev_priv {TYPE_1__ ptype; int node; TYPE_2__* requests; int request_id; int packages; int lock; int package_whitelist; int work; int vlan_vids; int channel_queue; scalar_t__ pending_req_num; struct ncsi_dev ndev; } ;
struct TYPE_4__ {int id; int timer; struct ncsi_dev_priv* ndp; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct ncsi_dev_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ncsi_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int ,int ) ;

struct ncsi_dev *FUNC_13(struct net_device *VAR_10,
       void (*VAR_11)(struct ncsi_dev *VAR_12))
{
 struct ncsi_dev_priv *VAR_13;
 struct ncsi_dev *VAR_14;
 unsigned long VAR_15;
 int VAR_16;


 VAR_14 = FUNC_7(VAR_10);
 if (VAR_14)
  return VAR_14;


 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return ((void*)0);

 VAR_14 = &VAR_13->ndev;
 VAR_14->state = VAR_6;
 VAR_14->dev = VAR_10;
 VAR_14->handler = VAR_11;
 VAR_13->pending_req_num = 0;
 FUNC_1(&VAR_13->channel_queue);
 FUNC_1(&VAR_13->vlan_vids);
 FUNC_2(&VAR_13->work, VAR_7);
 VAR_13->package_whitelist = VAR_3;


 FUNC_9(&VAR_13->lock);
 FUNC_1(&VAR_13->packages);
 VAR_13->request_id = VAR_2;
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13->requests); VAR_16++) {
  VAR_13->requests[VAR_16].id = VAR_16;
  VAR_13->requests[VAR_16].ndp = VAR_13;
  FUNC_12(&VAR_13->requests[VAR_16].timer, VAR_9, 0);
 }

 FUNC_10(&VAR_5, VAR_15);
 FUNC_6(&VAR_13->node, &VAR_4);
 FUNC_11(&VAR_5, VAR_15);


 VAR_13->ptype.type = FUNC_3(VAR_0);
 VAR_13->ptype.func = VAR_8;
 VAR_13->ptype.dev = VAR_10;
 FUNC_4(&VAR_13->ptype);


 FUNC_8(VAR_10);

 return VAR_14;
}
