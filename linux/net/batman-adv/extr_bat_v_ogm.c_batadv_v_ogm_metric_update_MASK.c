
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {void* last_seen; int neigh_list; } ;
struct batadv_orig_ifinfo {scalar_t__ last_real_seqno; int last_ttl; int batman_seqno_reset; } ;
struct batadv_ogm2_packet {int ttl; int seqno; int throughput; int orig; } ;
struct batadv_neigh_node {void* last_seen; } ;
struct TYPE_2__ {scalar_t__ last_seqno; int throughput; } ;
struct batadv_neigh_ifinfo {int last_ttl; TYPE_1__ bat_v; } ;
struct batadv_hard_iface {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int ,...) ;
 struct batadv_neigh_ifinfo* FUNC_1 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_neigh_ifinfo*) ;
 struct batadv_orig_ifinfo* FUNC_3 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_4 (struct batadv_orig_ifinfo*) ;
 int FUNC_5 (struct batadv_priv*,struct batadv_hard_iface*,struct batadv_hard_iface*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct batadv_priv*,scalar_t__,int ,int *,int*) ;
 int FUNC_7 (int *) ;
 void* VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct batadv_priv *VAR_4,
          const struct batadv_ogm2_packet *VAR_5,
          struct batadv_orig_node *VAR_6,
          struct batadv_neigh_node *VAR_7,
          struct batadv_hard_iface *VAR_8,
          struct batadv_hard_iface *VAR_9)
{
 struct batadv_orig_ifinfo *VAR_10;
 struct batadv_neigh_ifinfo *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 int VAR_13 = -VAR_2;
 u32 VAR_14;
 s32 VAR_15;

 VAR_10 = FUNC_3(VAR_6, VAR_9);
 if (!VAR_10)
  goto out;

 VAR_15 = FUNC_8(VAR_5->seqno) - VAR_10->last_real_seqno;

 if (!FUNC_7(&VAR_6->neigh_list) &&
     FUNC_6(VAR_4, VAR_15,
        VAR_1,
        &VAR_10->batman_seqno_reset,
        &VAR_12)) {
  FUNC_0(VAR_0, VAR_4,
      "Drop packet: packet within window protection time from %pM\n",
      VAR_5->orig);
  FUNC_0(VAR_0, VAR_4,
      "Last reset: %ld, %ld\n",
      VAR_10->batman_seqno_reset, VAR_3);
  goto out;
 }




 if (VAR_15 < 0 && !VAR_12)
  goto out;

 VAR_7->last_seen = VAR_3;

 VAR_6->last_seen = VAR_3;

 VAR_10->last_real_seqno = FUNC_8(VAR_5->seqno);
 VAR_10->last_ttl = VAR_5->ttl;

 VAR_11 = FUNC_1(VAR_7, VAR_9);
 if (!VAR_11)
  goto out;

 VAR_14 = FUNC_5(VAR_4, VAR_8,
         VAR_9,
         FUNC_8(VAR_5->throughput));
 VAR_11->bat_v.throughput = VAR_14;
 VAR_11->bat_v.last_seqno = FUNC_8(VAR_5->seqno);
 VAR_11->last_ttl = VAR_5->ttl;

 if (VAR_15 > 0 || VAR_12)
  VAR_13 = 1;
 else
  VAR_13 = 0;
out:
 if (VAR_10)
  FUNC_4(VAR_10);
 if (VAR_11)
  FUNC_2(VAR_11);

 return VAR_13;
}
