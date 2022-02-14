
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {void* last_seen; } ;
struct TYPE_2__ {int elp_latest_seqno; int elp_interval; } ;
struct batadv_hardif_neigh_node {TYPE_1__ bat_v; void* last_seen; } ;
struct batadv_hard_iface {int dummy; } ;
struct batadv_elp_packet {int elp_interval; int seqno; int orig; } ;
typedef int s32 ;


 int VAR_0 ;
 struct batadv_hardif_neigh_node* FUNC_0 (struct batadv_hard_iface*,int *) ;
 int FUNC_1 (struct batadv_hardif_neigh_node*) ;
 struct batadv_neigh_node* FUNC_2 (struct batadv_orig_node*,struct batadv_hard_iface*,int *) ;
 int FUNC_3 (struct batadv_neigh_node*) ;
 int FUNC_4 (struct batadv_orig_node*) ;
 struct batadv_orig_node* FUNC_5 (struct batadv_priv*,int ) ;
 void* VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct batadv_priv *VAR_2,
          u8 *VAR_3,
          struct batadv_hard_iface *VAR_4,
          struct batadv_elp_packet *VAR_5)

{
 struct batadv_neigh_node *VAR_6;
 struct batadv_orig_node *VAR_7;
 struct batadv_hardif_neigh_node *VAR_8;
 s32 VAR_9;
 s32 VAR_10;

 VAR_7 = FUNC_5(VAR_2, VAR_5->orig);
 if (!VAR_7)
  return;

 VAR_6 = FUNC_2(VAR_7,
      VAR_4, VAR_3);
 if (!VAR_6)
  goto orig_free;

 VAR_8 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_8)
  goto neigh_free;

 VAR_10 = VAR_8->bat_v.elp_latest_seqno;
 VAR_9 = FUNC_6(VAR_5->seqno) - VAR_10;




 if (VAR_9 < 1 && VAR_9 > -VAR_0)
  goto hardif_free;

 VAR_6->last_seen = VAR_1;
 VAR_8->last_seen = VAR_1;
 VAR_8->bat_v.elp_latest_seqno = FUNC_6(VAR_5->seqno);
 VAR_8->bat_v.elp_interval = FUNC_6(VAR_5->elp_interval);

hardif_free:
 if (VAR_8)
  FUNC_1(VAR_8);
neigh_free:
 if (VAR_6)
  FUNC_3(VAR_6);
orig_free:
 if (VAR_7)
  FUNC_4(VAR_7);
}
