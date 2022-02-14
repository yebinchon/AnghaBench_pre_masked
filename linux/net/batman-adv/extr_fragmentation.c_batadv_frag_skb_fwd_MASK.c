
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {TYPE_2__* if_incoming; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct batadv_frag_packet {int ttl; int total_size; int dest; } ;
struct TYPE_4__ {TYPE_1__* net_dev; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct batadv_priv*,int ,scalar_t__) ;
 struct batadv_neigh_node* FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_neigh_node*) ;
 struct batadv_orig_node* FUNC_4 (struct batadv_priv*,int ) ;
 int FUNC_5 (struct batadv_orig_node*) ;
 int FUNC_6 (struct sk_buff*,struct batadv_neigh_node*) ;
 struct batadv_priv* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

bool FUNC_9(struct sk_buff *VAR_3,
    struct batadv_hard_iface *VAR_4,
    struct batadv_orig_node *VAR_5)
{
 struct batadv_priv *VAR_6 = FUNC_7(VAR_4->soft_iface);
 struct batadv_orig_node *VAR_7;
 struct batadv_neigh_node *VAR_8 = ((void*)0);
 struct batadv_frag_packet *VAR_9;
 u16 VAR_10;
 bool VAR_11 = 0;

 VAR_9 = (struct batadv_frag_packet *)VAR_3->data;
 VAR_7 = FUNC_4(VAR_6, VAR_9->dest);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_4);
 if (!VAR_8)
  goto out;




 VAR_10 = FUNC_8(VAR_9->total_size);
 if (VAR_10 > VAR_8->if_incoming->net_dev->mtu) {
  FUNC_2(VAR_6, VAR_0);
  FUNC_0(VAR_6, VAR_1,
       VAR_3->len + VAR_2);

  VAR_9->ttl--;
  FUNC_6(VAR_3, VAR_8);
  VAR_11 = 1;
 }

out:
 if (VAR_7)
  FUNC_5(VAR_7);
 if (VAR_8)
  FUNC_3(VAR_8);
 return VAR_11;
}
