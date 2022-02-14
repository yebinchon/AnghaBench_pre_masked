
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct ncsi_rsp_handler {scalar_t__ type; int (* handler ) (struct ncsi_request*) ;int payload; } ;
struct ncsi_request {scalar_t__ flags; int nlhdr; int snd_portid; int snd_seq; int enabled; struct sk_buff* rsp; int used; } ;
struct ncsi_pkt_hdr {scalar_t__ type; size_t id; int length; } ;
struct TYPE_2__ {int dev; } ;
struct ncsi_dev_priv {TYPE_1__ ndev; int lock; struct ncsi_request* requests; } ;
struct ncsi_dev {int dev; } ;


 int FUNC_0 (struct ncsi_rsp_handler*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ncsi_dev_priv* FUNC_1 (struct ncsi_dev*) ;
 int FUNC_2 (struct ncsi_dev_priv*,struct sk_buff*) ;
 struct ncsi_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ncsi_request*) ;
 int FUNC_5 (struct ncsi_request*) ;
 struct ncsi_rsp_handler* VAR_5 ;
 int FUNC_6 (int ,int ,int ,int *,int) ;
 int FUNC_7 (struct ncsi_request*,int) ;
 int FUNC_8 (int ,char*,scalar_t__,...) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct ncsi_request*) ;

int FUNC_15(struct sk_buff *VAR_6, struct net_device *VAR_7,
   struct packet_type *VAR_8, struct net_device *VAR_9)
{
 struct ncsi_rsp_handler *VAR_10 = ((void*)0);
 struct ncsi_dev *VAR_11;
 struct ncsi_dev_priv *VAR_12;
 struct ncsi_request *VAR_13;
 struct ncsi_pkt_hdr *VAR_14;
 unsigned long VAR_15;
 int VAR_16, VAR_17, VAR_18;


 VAR_11 = FUNC_3(VAR_7);
 VAR_12 = VAR_11 ? FUNC_1(VAR_11) : ((void*)0);
 if (!VAR_12)
  return -VAR_0;


 VAR_14 = (struct ncsi_pkt_hdr *)FUNC_11(VAR_6);
 if (VAR_14->type == VAR_3)
  return FUNC_2(VAR_12, VAR_6);


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_5); VAR_17++) {
  if (VAR_5[VAR_17].type == VAR_14->type) {
   if (VAR_5[VAR_17].handler)
    VAR_10 = &VAR_5[VAR_17];
   else
    VAR_10 = ((void*)0);

   break;
  }
 }

 if (!VAR_10) {
  FUNC_8(VAR_11->dev, "Received unrecognized packet (0x%x)\n",
      VAR_14->type);
  return -VAR_1;
 }


 FUNC_12(&VAR_12->lock, VAR_15);
 VAR_13 = &VAR_12->requests[VAR_14->id];
 if (!VAR_13->used) {
  FUNC_13(&VAR_12->lock, VAR_15);
  return -VAR_0;
 }

 VAR_13->rsp = VAR_6;
 if (!VAR_13->enabled) {
  FUNC_13(&VAR_12->lock, VAR_15);
  VAR_18 = -VAR_1;
  goto out;
 }


 FUNC_13(&VAR_12->lock, VAR_15);
 VAR_16 = VAR_10->payload;
 if (VAR_16 < 0)
  VAR_16 = FUNC_10(VAR_14->length);
 VAR_18 = FUNC_7(VAR_13, VAR_16);
 if (VAR_18) {
  FUNC_9(VAR_12->ndev.dev,
       "NCSI: 'bad' packet ignored for type 0x%x\n",
       VAR_14->type);

  if (VAR_13->flags == VAR_4) {
   if (VAR_18 == -VAR_2)
    goto out_netlink;
   else
    FUNC_6(VAR_12->ndev.dev,
            VAR_13->snd_seq,
            VAR_13->snd_portid,
            &VAR_13->nlhdr,
            VAR_18);
  }
  goto out;
 }


 VAR_18 = VAR_10->handler(VAR_13);
 if (VAR_18)
  FUNC_8(VAR_12->ndev.dev,
      "NCSI: Handler for packet type 0x%x returned %d\n",
      VAR_14->type, VAR_18);

out_netlink:
 if (VAR_13->flags == VAR_4) {
  VAR_18 = FUNC_5(VAR_13);
  if (VAR_18) {
   FUNC_8(VAR_12->ndev.dev,
       "NCSI: Netlink handler for packet type 0x%x returned %d\n",
       VAR_14->type, VAR_18);
  }
 }

out:
 FUNC_4(VAR_13);
 return VAR_18;
}
