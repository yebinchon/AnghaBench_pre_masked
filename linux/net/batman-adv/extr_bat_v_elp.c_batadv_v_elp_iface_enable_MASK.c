
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int elp_wq; int flags; int elp_seqno; int elp_skb; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;
struct batadv_elp_packet {int version; int packet_type; } ;
typedef int random_seqno ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t const VAR_6 ;
 int FUNC_0 (int *,int ) ;
 size_t const VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct batadv_hard_iface*) ;
 int VAR_8 ;
 int FUNC_3 (struct batadv_hard_iface*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int) ;
 unsigned char* FUNC_6 (int ,size_t const) ;
 int FUNC_7 (int ,size_t const) ;

int FUNC_8(struct batadv_hard_iface *VAR_9)
{
 static const size_t VAR_10 = sizeof(__be32);
 struct batadv_elp_packet *VAR_11;
 unsigned char *VAR_12;
 u32 VAR_13;
 size_t VAR_14;
 int VAR_15 = -VAR_5;

 VAR_14 = VAR_6 + VAR_7 + VAR_2 + VAR_10;
 VAR_9->bat_v.elp_skb = FUNC_4(VAR_14);
 if (!VAR_9->bat_v.elp_skb)
  goto out;

 FUNC_7(VAR_9->bat_v.elp_skb, VAR_6 + VAR_7);
 VAR_12 = FUNC_6(VAR_9->bat_v.elp_skb,
    VAR_2 + VAR_10);
 VAR_11 = (struct batadv_elp_packet *)VAR_12;

 VAR_11->packet_type = VAR_1;
 VAR_11->version = VAR_0;


 FUNC_5(&VAR_13, sizeof(VAR_13));
 FUNC_1(&VAR_9->bat_v.elp_seqno, VAR_13);


 VAR_9->bat_v.flags |= VAR_3;


 VAR_9->bat_v.flags &= ~VAR_4;

 if (FUNC_2(VAR_9))
  VAR_9->bat_v.flags &= ~VAR_3;

 FUNC_0(&VAR_9->bat_v.elp_wq,
     VAR_8);
 FUNC_3(VAR_9);
 VAR_15 = 0;

out:
 return VAR_15;
}
