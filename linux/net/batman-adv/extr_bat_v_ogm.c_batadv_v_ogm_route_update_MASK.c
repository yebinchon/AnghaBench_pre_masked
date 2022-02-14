
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ethhdr {int h_source; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_ogm2_packet {int dummy; } ;
struct batadv_neigh_node {struct batadv_orig_node* orig_node; } ;
struct TYPE_2__ {scalar_t__ last_seqno; scalar_t__ throughput; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_v; } ;
struct batadv_hard_iface {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct batadv_priv*,char*) ;
 struct batadv_neigh_ifinfo* FUNC_1 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_neigh_ifinfo*) ;
 int FUNC_3 (struct batadv_neigh_node*) ;
 int FUNC_4 (struct batadv_orig_node*) ;
 struct batadv_neigh_node* FUNC_5 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_6 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_hard_iface*,struct batadv_neigh_node*) ;
 struct batadv_orig_node* FUNC_7 (struct batadv_priv*,int ) ;

__attribute__((used)) static bool FUNC_8(struct batadv_priv *VAR_2,
          const struct ethhdr *VAR_3,
          const struct batadv_ogm2_packet *VAR_4,
          struct batadv_orig_node *VAR_5,
          struct batadv_neigh_node *VAR_6,
          struct batadv_hard_iface *VAR_7,
          struct batadv_hard_iface *VAR_8)
{
 struct batadv_neigh_node *VAR_9 = ((void*)0);
 struct batadv_orig_node *VAR_10;
 struct batadv_neigh_node *VAR_11 = ((void*)0);
 struct batadv_neigh_ifinfo *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 s32 VAR_18;
 bool VAR_19 = 0;

 VAR_10 = FUNC_7(VAR_2, VAR_3->h_source);
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_5(VAR_10,
         VAR_8);




 VAR_9 = FUNC_5(VAR_5, VAR_8);
 if (VAR_9 && VAR_9->orig_node != VAR_5 && !VAR_11) {
  FUNC_0(VAR_0, VAR_2,
      "Drop packet: OGM via unknown neighbor!\n");
  goto out;
 }




 VAR_19 = 1;

 FUNC_0(VAR_0, VAR_2,
     "Searching and updating originator entry of received packet\n");




 if (VAR_9 == VAR_6)
  goto out;





 if (VAR_9) {
  VAR_12 = FUNC_1(VAR_9, VAR_8);
  VAR_13 = FUNC_1(VAR_6, VAR_8);


  if (!VAR_12 || !VAR_13)
   goto out;

  VAR_17 = VAR_13->bat_v.last_seqno;
  VAR_16 = VAR_12->bat_v.last_seqno;
  VAR_18 = VAR_17 - VAR_16;
  VAR_14 = VAR_12->bat_v.throughput;
  VAR_15 = VAR_13->bat_v.throughput;

  if (VAR_18 < VAR_1 &&
      VAR_14 >= VAR_15)
   goto out;
 }

 FUNC_6(VAR_2, VAR_5, VAR_8, VAR_6);
out:
 if (VAR_9)
  FUNC_3(VAR_9);
 if (VAR_11)
  FUNC_3(VAR_11);
 if (VAR_10)
  FUNC_4(VAR_10);
 if (VAR_12)
  FUNC_2(VAR_12);
 if (VAR_13)
  FUNC_2(VAR_13);

 return VAR_19;
}
