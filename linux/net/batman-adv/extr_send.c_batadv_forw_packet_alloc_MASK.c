
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_priv {int batman_queue_left; int bcast_queue_left; } ;
struct batadv_hard_iface {int refcount; } ;
struct batadv_forw_packet {scalar_t__ num_packets; struct batadv_hard_iface* if_outgoing; struct batadv_hard_iface* if_incoming; int * queue_left; struct sk_buff* skb; int cleanup_list; int list; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct batadv_priv*,char*,char const*) ;
 struct batadv_forw_packet* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct batadv_forw_packet *
FUNC_6(struct batadv_hard_iface *VAR_2,
    struct batadv_hard_iface *VAR_3,
    atomic_t *VAR_4,
    struct batadv_priv *VAR_5,
    struct sk_buff *VAR_6)
{
 struct batadv_forw_packet *VAR_7;
 const char *VAR_8;

 if (VAR_4 && !FUNC_2(VAR_4)) {
  VAR_8 = "unknown";

  if (VAR_4 == &VAR_5->bcast_queue_left)
   VAR_8 = "bcast";

  if (VAR_4 == &VAR_5->batman_queue_left)
   VAR_8 = "batman";

  FUNC_3(VAR_0, VAR_5,
      "%s queue is full\n", VAR_8);

  return ((void*)0);
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto err;

 if (VAR_2)
  FUNC_5(&VAR_2->refcount);

 if (VAR_3)
  FUNC_5(&VAR_3->refcount);

 FUNC_0(&VAR_7->list);
 FUNC_0(&VAR_7->cleanup_list);
 VAR_7->skb = VAR_6;
 VAR_7->queue_left = VAR_4;
 VAR_7->if_incoming = VAR_2;
 VAR_7->if_outgoing = VAR_3;
 VAR_7->num_packets = 0;

 return VAR_7;

err:
 if (VAR_4)
  FUNC_1(VAR_4);

 return ((void*)0);
}
