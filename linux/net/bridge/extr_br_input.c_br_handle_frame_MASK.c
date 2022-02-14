
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u16 ;
struct sk_buff {scalar_t__ pkt_type; int dev; int cb; } ;
struct net_bridge_port {int flags; unsigned int group_fwd_mask; int state; TYPE_2__* br; } ;
struct br_input_skb_cb {int dummy; } ;
typedef int rx_handler_result_t ;
struct TYPE_6__ {unsigned char* h_dest; int h_source; } ;
struct TYPE_5__ {unsigned int group_fwd_mask_required; unsigned int group_fwd_mask; TYPE_1__* dev; int stp_enabled; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *,struct sk_buff*,int ,int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_bridge_port*,int ) ;
 int VAR_9 ;
 struct net_bridge_port* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,unsigned char const*) ;
 int FUNC_7 (unsigned char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct net_bridge_port*) ;
 int FUNC_12 (struct sk_buff*,struct sk_buff**) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (int) ;

rx_handler_result_t FUNC_15(struct sk_buff **VAR_10)
{
 struct net_bridge_port *VAR_11;
 struct sk_buff *VAR_12 = *VAR_10;
 const unsigned char *VAR_13 = FUNC_5(VAR_12)->h_dest;

 if (FUNC_14(VAR_12->pkt_type == VAR_6))
  return VAR_8;

 if (!FUNC_8(FUNC_5(VAR_12)->h_source))
  goto drop;

 VAR_12 = FUNC_13(VAR_12, VAR_2);
 if (!VAR_12)
  return VAR_7;

 FUNC_10(VAR_12->cb, 0, sizeof(struct br_input_skb_cb));

 VAR_11 = FUNC_3(VAR_12->dev);
 if (VAR_11->flags & VAR_1) {
  if (FUNC_2(VAR_12, VAR_11,
        FUNC_11(VAR_11)))
   goto drop;
 }

 if (FUNC_14(FUNC_7(VAR_13))) {
  u16 VAR_14 = VAR_11->br->group_fwd_mask_required;
  VAR_14 |= VAR_11->group_fwd_mask;
  switch (VAR_13[5]) {
  case 0x00:


   if (VAR_11->br->stp_enabled == VAR_0 ||
       VAR_14 & (1u << VAR_13[5]))
    goto forward;
   *VAR_10 = VAR_12;
   FUNC_1(VAR_12);
   return VAR_8;

  case 0x01:
   goto drop;

  case 0x0E:
   VAR_14 |= VAR_11->br->group_fwd_mask;
   if (VAR_14 & (1u << VAR_13[5]))
    goto forward;
   *VAR_10 = VAR_12;
   FUNC_1(VAR_12);
   return VAR_8;

  default:

   VAR_14 |= VAR_11->br->group_fwd_mask;
   if (VAR_14 & (1u << VAR_13[5]))
    goto forward;
  }






  if (FUNC_0(VAR_3, VAR_4,
       FUNC_4(VAR_12->dev), ((void*)0), VAR_12, VAR_12->dev, ((void*)0),
       VAR_9) == 1) {
   return VAR_8;
  } else {
   return VAR_7;
  }
 }

forward:
 switch (VAR_11->state) {
 case 129:
 case 128:
  if (FUNC_6(VAR_11->br->dev->dev_addr, VAR_13))
   VAR_12->pkt_type = VAR_5;

  return FUNC_12(VAR_12, VAR_10);
 default:
drop:
  FUNC_9(VAR_12);
 }
 return VAR_7;
}
