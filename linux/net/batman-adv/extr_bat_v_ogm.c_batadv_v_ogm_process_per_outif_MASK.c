
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_ogm2_packet {int tvlv_len; } ;
struct batadv_neigh_node {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_hard_iface* VAR_0 ;
 int FUNC_0 (struct batadv_priv*,int,struct batadv_orig_node*,int *,int *,unsigned char*,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_ogm2_packet const*,struct batadv_orig_node*,struct batadv_neigh_node*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_ogm2_packet const*,struct batadv_orig_node*,struct batadv_neigh_node*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_3 (struct batadv_priv*,struct ethhdr const*,struct batadv_ogm2_packet const*,struct batadv_orig_node*,struct batadv_neigh_node*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct batadv_priv *VAR_1,
          const struct ethhdr *VAR_2,
          const struct batadv_ogm2_packet *VAR_3,
          struct batadv_orig_node *VAR_4,
          struct batadv_neigh_node *VAR_5,
          struct batadv_hard_iface *VAR_6,
          struct batadv_hard_iface *VAR_7)
{
 int VAR_8;
 bool VAR_9;


 VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_4,
            VAR_5, VAR_6,
            VAR_7);


 if (VAR_8 < 0)
  return;


 if (VAR_8 > 0 && VAR_7 == VAR_0)
  FUNC_0(VAR_1, 1, VAR_4,
            ((void*)0), ((void*)0),
            (unsigned char *)(VAR_3 + 1),
            FUNC_4(VAR_3->tvlv_len));


 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_7);


 if (VAR_9)
  FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
}
