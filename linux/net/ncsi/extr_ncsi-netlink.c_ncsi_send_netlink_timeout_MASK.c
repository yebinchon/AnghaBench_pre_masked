
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ncsi_request {int snd_portid; TYPE_1__* cmd; int snd_seq; } ;
struct ncsi_pkt_hdr {int channel; } ;
struct ncsi_package {int id; } ;
struct ncsi_channel {int id; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {scalar_t__ data; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct net* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct net*,struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;

int FUNC_8(struct ncsi_request *VAR_10,
         struct ncsi_package *VAR_11,
         struct ncsi_channel *VAR_12)
{
 struct sk_buff *VAR_13;
 struct net *VAR_14;
 void *VAR_15;

 VAR_13 = FUNC_3(VAR_8, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_15 = FUNC_4(VAR_13, VAR_10->snd_portid, VAR_10->snd_seq,
     &VAR_9, 0, VAR_6);
 if (!VAR_15) {
  FUNC_6(VAR_13);
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_10->cmd->dev);

 FUNC_7(VAR_13, VAR_4, VAR_10->cmd->dev->ifindex);

 if (VAR_11)
  FUNC_7(VAR_13, VAR_5, VAR_11->id);
 else
  FUNC_7(VAR_13, VAR_5,
       FUNC_0((((struct ncsi_pkt_hdr *)
       VAR_10->cmd->data)->channel)));

 if (VAR_12)
  FUNC_7(VAR_13, VAR_3, VAR_12->id);
 else
  FUNC_7(VAR_13, VAR_3, VAR_7);

 FUNC_2(VAR_13, VAR_15);
 return FUNC_5(VAR_14, VAR_13, VAR_10->snd_portid);
}
