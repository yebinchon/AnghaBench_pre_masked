
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct sk_buff {scalar_t__ pkt_type; void* protocol; int dev; } ;
struct nf_hook_state {int sk; int net; } ;
struct nf_bridge_info {int pkt_otherhost; int physoutdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (scalar_t__,int ,int ,int ,struct sk_buff*,int *,struct net_device*,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct net_device* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;
 struct nf_bridge_info* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_11(void *VAR_11,
           struct sk_buff *VAR_12,
           const struct nf_hook_state *VAR_13)
{
 struct nf_bridge_info *VAR_14 = FUNC_9(VAR_12);
 struct net_device *VAR_15 = FUNC_3(VAR_12->dev);
 u_int8_t VAR_16;






 if (!VAR_14 || !VAR_14->physoutdev)
  return VAR_4;

 if (!VAR_15)
  return VAR_5;

 if (FUNC_0(VAR_12) || FUNC_7(VAR_12, VAR_13->net) ||
     FUNC_5(VAR_12, VAR_13->net))
  VAR_16 = VAR_2;
 else if (FUNC_1(VAR_12) || FUNC_8(VAR_12, VAR_13->net) ||
   FUNC_6(VAR_12, VAR_13->net))
  VAR_16 = VAR_3;
 else
  return VAR_4;



 if (VAR_12->pkt_type == VAR_9) {
  VAR_12->pkt_type = VAR_8;
  VAR_14->pkt_otherhost = 1;
 }

 FUNC_10(VAR_12);
 if (VAR_16 == VAR_2)
  VAR_12->protocol = FUNC_4(VAR_0);
 else
  VAR_12->protocol = FUNC_4(VAR_1);

 FUNC_2(VAR_16, VAR_6, VAR_13->net, VAR_13->sk, VAR_12,
  ((void*)0), VAR_15,
  VAR_10);

 return VAR_7;
}
