
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct batadv_priv {int bcast_queue_left; } ;
struct batadv_hard_iface {int dummy; } ;
struct batadv_forw_packet {int own; int delayed_work; } ;
struct batadv_bcast_packet {int ttl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct batadv_forw_packet* FUNC_1 (struct batadv_hard_iface*,int *,int *,struct batadv_priv*,struct sk_buff*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_forw_packet*,scalar_t__) ;
 int FUNC_3 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_4 (struct batadv_priv*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff const*,int ) ;

int FUNC_7(struct batadv_priv *VAR_5,
        const struct sk_buff *VAR_6,
        unsigned long VAR_7,
        bool VAR_8)
{
 struct batadv_hard_iface *VAR_9;
 struct batadv_forw_packet *VAR_10;
 struct batadv_bcast_packet *VAR_11;
 struct sk_buff *VAR_12;

 VAR_9 = FUNC_4(VAR_5);
 if (!VAR_9)
  goto err;

 VAR_12 = FUNC_6(VAR_6, VAR_0);
 if (!VAR_12) {
  FUNC_3(VAR_9);
  goto err;
 }

 VAR_10 = FUNC_1(VAR_9, ((void*)0),
            &VAR_5->bcast_queue_left,
            VAR_5, VAR_12);
 FUNC_3(VAR_9);
 if (!VAR_10)
  goto err_packet_free;


 VAR_11 = (struct batadv_bcast_packet *)VAR_12->data;
 VAR_11->ttl--;

 VAR_10->own = VAR_8;

 FUNC_0(&VAR_10->delayed_work,
     VAR_3);

 FUNC_2(VAR_5, VAR_10, VAR_4 + VAR_7);
 return VAR_2;

err_packet_free:
 FUNC_5(VAR_12);
err:
 return VAR_1;
}
