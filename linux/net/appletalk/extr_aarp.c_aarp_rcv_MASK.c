
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct elapaarp {scalar_t__ hw_len; scalar_t__ pa_len; int pa_src_node; scalar_t__ pa_src_net; scalar_t__ pa_dst_node; scalar_t__ pa_dst_net; int hw_src; scalar_t__ pa_dst_zero; scalar_t__ pa_src_zero; int function; } ;
struct atalk_addr {int s_node; scalar_t__ s_net; } ;
struct atalk_iface {int status; struct atalk_addr address; } ;
struct aarp_entry {int status; int expires_at; int hwaddr; struct net_device* dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct aarp_entry* FUNC_0 (int ,struct net_device*,struct atalk_addr*) ;
 struct atalk_addr* FUNC_1 (struct net_device*,struct atalk_addr*) ;
 int FUNC_2 (int *,struct aarp_entry*,int) ;
 struct elapaarp* FUNC_3 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_4 (struct net_device*,struct atalk_addr*,struct atalk_addr*,int ) ;
 int VAR_7 ;
 struct atalk_iface* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_16, struct net_device *VAR_17,
      struct packet_type *VAR_18, struct net_device *VAR_19)
{
 struct elapaarp *VAR_20 = FUNC_3(VAR_16);
 int VAR_21, VAR_22 = 0;
 __u16 VAR_23;
 struct aarp_entry *VAR_24;
 struct atalk_addr VAR_25, *VAR_26, VAR_27;
 struct atalk_iface *VAR_28;

 if (!FUNC_10(FUNC_6(VAR_17), &VAR_8))
  goto out0;


 if (VAR_17->type != VAR_2)
  goto out0;


 if (!FUNC_12(VAR_16, sizeof(*VAR_20)))
  goto out0;

 VAR_23 = FUNC_11(VAR_20->function);


 if (VAR_23 < 128 || VAR_23 > 130 ||
     VAR_20->hw_len != VAR_5 || VAR_20->pa_len != VAR_1 ||
     VAR_20->pa_src_zero || VAR_20->pa_dst_zero)
  goto out0;


 VAR_21 = VAR_20->pa_src_node % (VAR_0 - 1);


 VAR_25.s_node = VAR_20->pa_src_node;
 VAR_25.s_net = VAR_20->pa_src_net;


 VAR_28 = FUNC_5(VAR_17);
 if (!VAR_28)
  goto out1;

 if (VAR_28->status & VAR_3 &&
     VAR_28->address.s_node == VAR_20->pa_dst_node &&
     VAR_28->address.s_net == VAR_20->pa_dst_net) {
  VAR_28->status |= VAR_4;
  goto out1;
 }


 VAR_27.s_node = VAR_20->pa_dst_node;
 VAR_27.s_net = VAR_20->pa_dst_net;

 FUNC_13(&VAR_6);
 VAR_24 = FUNC_0(VAR_10[VAR_21], VAR_17, &VAR_27);

 if (VAR_24 && VAR_24->status & VAR_3) {
  VAR_24->status |= VAR_4;




  goto unlock;
 }

 switch (VAR_23) {
 case 129:
  if (!VAR_15)
   break;


  VAR_24 = FUNC_0(VAR_14[VAR_21], VAR_17, &VAR_25);
  if (!VAR_24 || VAR_17 != VAR_24->dev)
   break;


  FUNC_7(VAR_24->hwaddr, VAR_20->hw_src);
  FUNC_2(&VAR_14[VAR_21], VAR_24, VAR_21);
  if (!VAR_15)
   FUNC_9(&VAR_7,
      VAR_9 + VAR_12);
  break;

 case 128:
 case 130:
  VAR_25.s_node = VAR_20->pa_dst_node;
  VAR_25.s_net = VAR_20->pa_dst_net;


  VAR_26 = FUNC_1(VAR_17, &VAR_25);
  if (!VAR_26)
   VAR_26 = &VAR_28->address;
  else {
   VAR_27.s_node = VAR_25.s_node;
   VAR_27.s_net = VAR_25.s_net;
   VAR_26 = &VAR_27;
  }

  if (VAR_23 == 130) {





   VAR_24 = FUNC_0(VAR_11[VAR_25.s_node %
             (VAR_0 - 1)],
           VAR_16->dev, &VAR_25);







   if (VAR_24) {
    VAR_24->expires_at = VAR_9 - 1;
    FUNC_9(&VAR_7, VAR_9 +
       VAR_13);
   }
  }

  if (VAR_25.s_node != VAR_26->s_node)
   break;

  if (VAR_25.s_net && VAR_26->s_net && VAR_25.s_net != VAR_26->s_net)
   break;

  VAR_25.s_node = VAR_20->pa_src_node;
  VAR_25.s_net = VAR_20->pa_src_net;



  FUNC_4(VAR_17, VAR_26, &VAR_25, VAR_20->hw_src);
  break;
 }

unlock:
 FUNC_14(&VAR_6);
out1:
 VAR_22 = 1;
out0:
 FUNC_8(VAR_16);
 return VAR_22;
}
