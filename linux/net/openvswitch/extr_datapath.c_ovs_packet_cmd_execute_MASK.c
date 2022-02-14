
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct vport {int dev; } ;
struct sw_flow_actions {int dummy; } ;
struct TYPE_6__ {int in_port; int skb_mark; int priority; } ;
struct TYPE_7__ {TYPE_1__ phy; } ;
struct sw_flow {TYPE_2__ key; int sf_acts; } ;
struct sk_buff {int ignore_df; int dev; int mark; int priority; int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct ovs_header* userhdr; } ;
struct datapath {int dummy; } ;
struct TYPE_8__ {struct vport* input_vport; int mru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sw_flow*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_2 (struct sw_flow*) ;
 struct sk_buff* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct datapath* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 int FUNC_11 (int ,struct nlattr*,int) ;
 int FUNC_12 (struct datapath*,struct sk_buff*,struct sw_flow_actions*,TYPE_2__*) ;
 struct sw_flow* FUNC_13 () ;
 int FUNC_14 (struct sw_flow*,int) ;
 int FUNC_15 (struct net*,struct nlattr*,struct sk_buff*,TYPE_2__*,int) ;
 int FUNC_16 (struct net*,struct nlattr*,TYPE_2__*,struct sw_flow_actions**,int) ;
 struct vport* FUNC_17 (struct datapath*,int ) ;
 int FUNC_18 (int ,struct sw_flow_actions*) ;
 struct sw_flow_actions* FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (struct sk_buff*,scalar_t__) ;
 struct net* FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 struct ovs_header *VAR_13 = VAR_12->userhdr;
 struct net *VAR_14 = FUNC_23(VAR_11->sk);
 struct nlattr **VAR_15 = VAR_12->attrs;
 struct sw_flow_actions *VAR_16;
 struct sk_buff *VAR_17;
 struct sw_flow *VAR_18;
 struct sw_flow_actions *VAR_19;
 struct datapath *VAR_20;
 struct vport *VAR_21;
 u16 VAR_22 = 0;
 int VAR_23;
 int VAR_24;
 bool VAR_25 = !VAR_15[VAR_10];

 VAR_24 = -VAR_0;
 if (!VAR_15[VAR_9] || !VAR_15[VAR_7] ||
     !VAR_15[VAR_6])
  goto err;

 VAR_23 = FUNC_10(VAR_15[VAR_9]);
 VAR_17 = FUNC_3(VAR_4 + VAR_23, VAR_3);
 VAR_24 = -VAR_2;
 if (!VAR_17)
  goto err;
 FUNC_22(VAR_17, VAR_4);

 FUNC_11(FUNC_4(VAR_17, VAR_23), VAR_15[VAR_9], VAR_23);


 if (VAR_15[VAR_8]) {
  VAR_22 = FUNC_9(VAR_15[VAR_8]);
  VAR_17->ignore_df = 1;
 }
 FUNC_1(VAR_17)->mru = VAR_22;


 VAR_18 = FUNC_13();
 VAR_24 = FUNC_2(VAR_18);
 if (FUNC_0(VAR_18))
  goto err_kfree_skb;

 VAR_24 = FUNC_15(VAR_14, VAR_15[VAR_7],
          VAR_17, &VAR_18->key, VAR_25);
 if (VAR_24)
  goto err_flow_free;

 VAR_24 = FUNC_16(VAR_14, VAR_15[VAR_6],
       &VAR_18->key, &VAR_16, VAR_25);
 if (VAR_24)
  goto err_flow_free;

 FUNC_18(VAR_18->sf_acts, VAR_16);
 VAR_17->priority = VAR_18->key.phy.priority;
 VAR_17->mark = VAR_18->key.phy.skb_mark;

 FUNC_20();
 VAR_20 = FUNC_5(VAR_14, VAR_13->dp_ifindex);
 VAR_24 = -VAR_1;
 if (!VAR_20)
  goto err_unlock;

 VAR_21 = FUNC_17(VAR_20, VAR_18->key.phy.in_port);
 if (!VAR_21)
  VAR_21 = FUNC_17(VAR_20, VAR_5);

 if (!VAR_21)
  goto err_unlock;

 VAR_17->dev = VAR_21->dev;
 FUNC_1(VAR_17)->input_vport = VAR_21;
 VAR_19 = FUNC_19(VAR_18->sf_acts);

 FUNC_7();
 VAR_24 = FUNC_12(VAR_20, VAR_17, VAR_19, &VAR_18->key);
 FUNC_8();
 FUNC_21();

 FUNC_14(VAR_18, 0);
 return VAR_24;

err_unlock:
 FUNC_21();
err_flow_free:
 FUNC_14(VAR_18, 0);
err_kfree_skb:
 FUNC_6(VAR_17);
err:
 return VAR_24;
}
