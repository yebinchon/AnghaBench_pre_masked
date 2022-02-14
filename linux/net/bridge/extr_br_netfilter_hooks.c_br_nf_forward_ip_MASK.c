
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct sk_buff {scalar_t__ pkt_type; void* protocol; int dev; } ;
struct nf_hook_state {int net; int in; int out; } ;
struct nf_bridge_info {int pkt_otherhost; int physoutdev; int frag_max_size; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int frag_max_size; } ;
struct TYPE_3__ {int frag_max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int ,int *,struct sk_buff*,int ,struct net_device*,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ,struct sk_buff*) ;
 struct net_device* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 void* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ) ;
 struct nf_bridge_info* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_17(void *VAR_11,
         struct sk_buff *VAR_12,
         const struct nf_hook_state *VAR_13)
{
 struct nf_bridge_info *VAR_14;
 struct net_device *VAR_15;
 u_int8_t VAR_16;

 VAR_14 = FUNC_14(VAR_12);
 if (!VAR_14)
  return VAR_4;



 if (!FUNC_16(VAR_12))
  return VAR_5;

 VAR_14 = FUNC_14(VAR_12);
 if (!VAR_14)
  return VAR_5;

 VAR_15 = FUNC_7(VAR_13->out);
 if (!VAR_15)
  return VAR_5;

 if (FUNC_2(VAR_12) || FUNC_12(VAR_12, VAR_13->net) ||
     FUNC_10(VAR_12, VAR_13->net))
  VAR_16 = VAR_2;
 else if (FUNC_3(VAR_12) || FUNC_13(VAR_12, VAR_13->net) ||
   FUNC_11(VAR_12, VAR_13->net))
  VAR_16 = VAR_3;
 else
  return VAR_4;

 FUNC_15(VAR_12);

 if (VAR_12->pkt_type == VAR_9) {
  VAR_12->pkt_type = VAR_8;
  VAR_14->pkt_otherhost = 1;
 }

 if (VAR_16 == VAR_2) {
  if (FUNC_5(VAR_13->net, VAR_12))
   return VAR_5;
  FUNC_1(VAR_12)->frag_max_size = VAR_14->frag_max_size;
 }

 if (VAR_16 == VAR_3) {
  if (FUNC_6(VAR_13->net, VAR_12))
   return VAR_5;
  FUNC_0(VAR_12)->frag_max_size = VAR_14->frag_max_size;
 }

 VAR_14->physoutdev = VAR_12->dev;
 if (VAR_16 == VAR_2)
  VAR_12->protocol = FUNC_9(VAR_0);
 else
  VAR_12->protocol = FUNC_9(VAR_1);

 FUNC_4(VAR_16, VAR_6, VAR_13->net, ((void*)0), VAR_12,
  FUNC_8(VAR_12, VAR_13->in, VAR_13->net),
  VAR_15, VAR_10);

 return VAR_7;
}
