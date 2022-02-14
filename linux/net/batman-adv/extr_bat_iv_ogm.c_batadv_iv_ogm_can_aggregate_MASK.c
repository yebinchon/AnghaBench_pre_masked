
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_priv {int dummy; } ;
struct batadv_ogm_packet {int flags; int ttl; } ;
typedef struct batadv_hard_iface const batadv_hard_iface ;
struct batadv_forw_packet {int packet_len; struct batadv_hard_iface const* if_incoming; scalar_t__ own; struct batadv_hard_iface const* if_outgoing; int send_time; TYPE_1__* skb; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_hard_iface const*) ;
 struct batadv_hard_iface const* FUNC_1 (struct batadv_priv*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static bool
FUNC_5(const struct batadv_ogm_packet *VAR_3,
       struct batadv_priv *VAR_4,
       int VAR_5, unsigned long VAR_6,
       bool VAR_7,
       const struct batadv_hard_iface *VAR_8,
       const struct batadv_hard_iface *VAR_9,
       const struct batadv_forw_packet *VAR_10)
{
 struct batadv_ogm_packet *VAR_11;
 int VAR_12 = VAR_10->packet_len + VAR_5;
 struct batadv_hard_iface *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 unsigned long VAR_15;

 VAR_11 = (struct batadv_ogm_packet *)VAR_10->skb->data;
 VAR_15 = VAR_6;
 VAR_15 += FUNC_2(VAR_2);
 if (!FUNC_4(VAR_6, VAR_10->send_time) ||
     !FUNC_3(VAR_15, VAR_10->send_time))
  return 0;

 if (VAR_12 > VAR_1)
  return 0;


 if (VAR_10->if_outgoing != VAR_9)
  return 0;
 VAR_13 = FUNC_1(VAR_4);
 if (!VAR_13)
  return 0;




 if (!VAR_7 &&
     !(VAR_11->flags & VAR_0) &&
     VAR_11->ttl != 1 &&




     (!VAR_10->own ||
      VAR_10->if_incoming == VAR_13)) {
  VAR_14 = 1;
  goto out;
 }




 if (VAR_7 &&
     VAR_3->ttl == 1 &&
     VAR_10->if_incoming == VAR_8 &&





     (VAR_11->flags & VAR_0 ||
      (VAR_10->own &&
       VAR_10->if_incoming != VAR_13))) {
  VAR_14 = 1;
  goto out;
 }

out:
 if (VAR_13)
  FUNC_0(VAR_13);
 return VAR_14;
}
