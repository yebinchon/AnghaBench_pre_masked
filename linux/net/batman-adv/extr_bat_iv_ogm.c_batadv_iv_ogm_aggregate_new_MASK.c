
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct batadv_priv {int aggregated_ogms; int batman_queue_left; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct batadv_forw_packet {int packet_len; int own; int direct_link_flags; unsigned long send_time; int delayed_work; TYPE_1__* skb; } ;
typedef int atomic_t ;
struct TYPE_3__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct batadv_forw_packet* FUNC_2 (struct batadv_hard_iface*,struct batadv_hard_iface*,int *,struct batadv_priv*,struct sk_buff*) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_forw_packet*,unsigned long) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,int) ;
 struct sk_buff* FUNC_6 (int *,unsigned int) ;
 struct batadv_priv* FUNC_7 (int ) ;
 unsigned char* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(const unsigned char *VAR_5,
     int VAR_6, unsigned long VAR_7,
     bool VAR_8,
     struct batadv_hard_iface *VAR_9,
     struct batadv_hard_iface *VAR_10,
     int VAR_11)
{
 struct batadv_priv *VAR_12 = FUNC_7(VAR_9->soft_iface);
 struct batadv_forw_packet *VAR_13;
 struct sk_buff *VAR_14;
 unsigned char *VAR_15;
 unsigned int VAR_16;
 atomic_t *VAR_17 = VAR_11 ? ((void*)0) : &VAR_12->batman_queue_left;

 if (FUNC_1(&VAR_12->aggregated_ogms) &&
     VAR_6 < VAR_0)
  VAR_16 = VAR_0;
 else
  VAR_16 = VAR_6;

 VAR_16 += VAR_2;

 VAR_14 = FUNC_6(((void*)0), VAR_16);
 if (!VAR_14)
  return;

 VAR_13 = FUNC_2(VAR_9, VAR_10,
          VAR_17, VAR_12, VAR_14);
 if (!VAR_13) {
  FUNC_4(VAR_14);
  return;
 }

 VAR_13->skb->priority = VAR_3;
 FUNC_9(VAR_13->skb, VAR_2);

 VAR_15 = FUNC_8(VAR_13->skb, VAR_6);
 VAR_13->packet_len = VAR_6;
 FUNC_5(VAR_15, VAR_5, VAR_6);

 VAR_13->own = VAR_11;
 VAR_13->direct_link_flags = VAR_1;
 VAR_13->send_time = VAR_7;


 if (VAR_8)
  VAR_13->direct_link_flags |= 1;

 FUNC_0(&VAR_13->delayed_work,
     VAR_4);

 FUNC_3(VAR_12, VAR_13, VAR_7);
}
