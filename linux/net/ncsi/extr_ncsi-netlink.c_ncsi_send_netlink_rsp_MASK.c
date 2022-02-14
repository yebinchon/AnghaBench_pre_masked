
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ncsi_request {int snd_portid; TYPE_1__* rsp; int snd_seq; } ;
struct ncsi_package {int id; } ;
struct ncsi_channel {int id; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {scalar_t__ data; int len; TYPE_2__* dev; } ;


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
 struct net* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct net*,struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_10 ;
 int FUNC_6 (struct sk_buff*,int ,int ,void*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;

int FUNC_8(struct ncsi_request *VAR_11,
     struct ncsi_package *VAR_12,
     struct ncsi_channel *VAR_13)
{
 struct sk_buff *VAR_14;
 struct net *VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_0(VAR_11->rsp->dev);

 VAR_14 = FUNC_2(VAR_9, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_14, VAR_11->snd_portid, VAR_11->snd_seq,
     &VAR_10, 0, VAR_7);
 if (!VAR_16) {
  FUNC_5(VAR_14);
  return -VAR_0;
 }

 FUNC_7(VAR_14, VAR_5, VAR_11->rsp->dev->ifindex);
 if (VAR_12)
  FUNC_7(VAR_14, VAR_6, VAR_12->id);
 if (VAR_13)
  FUNC_7(VAR_14, VAR_3, VAR_13->id);
 else
  FUNC_7(VAR_14, VAR_3, VAR_8);

 VAR_17 = FUNC_6(VAR_14, VAR_4, VAR_11->rsp->len, (void *)VAR_11->rsp->data);
 if (VAR_17)
  goto err;

 FUNC_1(VAR_14, VAR_16);
 return FUNC_4(VAR_15, VAR_14, VAR_11->snd_portid);

err:
 FUNC_5(VAR_14);
 return VAR_17;
}
