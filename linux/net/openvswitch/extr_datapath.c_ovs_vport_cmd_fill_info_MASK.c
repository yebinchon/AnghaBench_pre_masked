
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vport {TYPE_2__* dev; TYPE_1__* ops; int port_no; int dp; } ;
struct sk_buff {int dummy; } ;
struct ovs_vport_stats {int dummy; } ;
struct ovs_header {int dp_ifindex; } ;
struct net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_2 (struct sk_buff*,struct ovs_header*) ;
 struct ovs_header* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,struct ovs_vport_stats*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct vport*,struct sk_buff*) ;
 int FUNC_11 (struct vport*,struct ovs_vport_stats*) ;
 scalar_t__ FUNC_12 (struct vport*,struct sk_buff*) ;
 int FUNC_13 (struct vport*) ;
 int FUNC_14 (struct net*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct vport *VAR_9, struct sk_buff *VAR_10,
       struct net *VAR_11, u32 VAR_12, u32 VAR_13,
       u32 VAR_14, u8 VAR_15, gfp_t VAR_16)
{
 struct ovs_header *VAR_17;
 struct ovs_vport_stats VAR_18;
 int VAR_19;

 VAR_17 = FUNC_3(VAR_10, VAR_12, VAR_13, &VAR_8,
     VAR_14, VAR_15);
 if (!VAR_17)
  return -VAR_0;

 VAR_17->dp_ifindex = FUNC_4(VAR_9->dp);

 if (FUNC_9(VAR_10, VAR_5, VAR_9->port_no) ||
     FUNC_9(VAR_10, VAR_7, VAR_9->ops->type) ||
     FUNC_8(VAR_10, VAR_2,
      FUNC_13(VAR_9)) ||
     FUNC_9(VAR_10, VAR_1, VAR_9->dev->ifindex))
  goto nla_put_failure;

 if (!FUNC_5(VAR_11, FUNC_0(VAR_9->dev))) {
  int VAR_20 = FUNC_14(VAR_11, FUNC_0(VAR_9->dev), VAR_16);

  if (FUNC_7(VAR_10, VAR_3, VAR_20))
   goto nla_put_failure;
 }

 FUNC_11(VAR_9, &VAR_18);
 if (FUNC_6(VAR_10, VAR_6,
     sizeof(struct ovs_vport_stats), &VAR_18,
     VAR_4))
  goto nla_put_failure;

 if (FUNC_12(VAR_9, VAR_10))
  goto nla_put_failure;

 VAR_19 = FUNC_10(VAR_9, VAR_10);
 if (VAR_19 == -VAR_0)
  goto error;

 FUNC_2(VAR_10, VAR_17);
 return 0;

nla_put_failure:
 VAR_19 = -VAR_0;
error:
 FUNC_1(VAR_10, VAR_17);
 return VAR_19;
}
