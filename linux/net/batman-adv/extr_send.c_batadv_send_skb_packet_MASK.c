
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_1__* dev; void* protocol; } ;
struct ethhdr {void* h_proto; int h_dest; int h_source; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {scalar_t__ if_status; TYPE_1__* net_dev; int soft_iface; } ;
struct TYPE_2__ {int flags; int const* dev_addr; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct batadv_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int const*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int) ;
 struct batadv_priv* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct sk_buff *VAR_5,
      struct batadv_hard_iface *VAR_6,
      const u8 *VAR_7)
{
 struct batadv_priv *VAR_8;
 struct ethhdr *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(VAR_6->soft_iface);

 if (VAR_6->if_status != VAR_0)
  goto send_skb_err;

 if (FUNC_12(!VAR_6->net_dev))
  goto send_skb_err;

 if (!(VAR_6->net_dev->flags & VAR_3)) {
  FUNC_9("Interface %s is not up - can't send packet via that interface!\n",
   VAR_6->net_dev->name);
  goto send_skb_err;
 }


 if (FUNC_1(VAR_5, VAR_1) < 0)
  goto send_skb_err;

 FUNC_10(VAR_5);

 VAR_9 = FUNC_3(VAR_5);
 FUNC_4(VAR_9->h_source, VAR_6->net_dev->dev_addr);
 FUNC_4(VAR_9->h_dest, VAR_7);
 VAR_9->h_proto = FUNC_5(VAR_2);

 FUNC_11(VAR_5, VAR_1);
 VAR_5->protocol = FUNC_5(VAR_2);

 VAR_5->dev = VAR_6->net_dev;


 FUNC_0(VAR_8, VAR_5);





 VAR_10 = FUNC_2(VAR_5);
 return FUNC_7(VAR_10);
send_skb_err:
 FUNC_6(VAR_5);
 return VAR_4;
}
