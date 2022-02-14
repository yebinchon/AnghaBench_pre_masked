
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dev_addr; } ;
struct hsr_priv {int self_node_db; } ;
struct hsr_port {TYPE_1__* dev; struct hsr_priv* hsr; int type; } ;
struct TYPE_3__ {int mtu; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hsr_priv*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct hsr_port*) ;
 int FUNC_5 (struct hsr_priv*) ;
 struct hsr_port* FUNC_6 (struct hsr_priv*,int ) ;
 struct hsr_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 struct net_device* FUNC_9 (void*) ;
 struct hsr_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_12(struct notifier_block *VAR_5, unsigned long VAR_6,
        void *VAR_7)
{
 struct net_device *VAR_8;
 struct hsr_port *VAR_9, *VAR_10;
 struct hsr_priv *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_8 = FUNC_9(VAR_7);
 VAR_9 = FUNC_7(VAR_8);
 if (!VAR_9) {
  if (!FUNC_8(VAR_8))
   return VAR_4;
  VAR_11 = FUNC_10(VAR_8);
  VAR_9 = FUNC_6(VAR_11, VAR_0);
  if (!VAR_9) {

   return VAR_4;
  }
 } else {
  VAR_11 = VAR_9->hsr;
 }

 switch (VAR_6) {
 case 128:
 case 131:
 case 134:
  FUNC_2(VAR_11);
  break;
 case 133:
  if (VAR_9->type == VAR_0) {




   break;
  }

  VAR_10 = FUNC_6(VAR_11, VAR_0);

  if (VAR_9->type == VAR_1) {
   FUNC_1(VAR_10->dev->dev_addr, VAR_8->dev_addr);
   FUNC_0(133,
       VAR_10->dev);
  }


  VAR_9 = FUNC_6(VAR_11, VAR_2);
  VAR_13 = FUNC_3(&VAR_11->self_node_db,
        VAR_10->dev->dev_addr,
        VAR_9 ?
      VAR_9->dev->dev_addr :
      VAR_10->dev->dev_addr);
  if (VAR_13)
   FUNC_11(VAR_10->dev,
        "Could not update HSR node address.\n");
  break;
 case 132:
  if (VAR_9->type == VAR_0)
   break;
  VAR_12 = FUNC_5(VAR_9->hsr);
  VAR_10 = FUNC_6(VAR_9->hsr, VAR_0);
  VAR_10->dev->mtu = VAR_12;
  break;
 case 129:
  FUNC_4(VAR_9);
  break;
 case 130:



  return VAR_3;
 }

 return VAR_4;
}
