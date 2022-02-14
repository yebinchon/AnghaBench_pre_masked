
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_neigh_node {int dummy; } ;
struct batadv_dat_candidate {scalar_t__ type; int orig_node; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 struct batadv_dat_candidate* FUNC_0 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int *) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_neigh_node*) ;
 int FUNC_4 (int ) ;
 struct batadv_neigh_node* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct batadv_priv*,struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,struct batadv_neigh_node*) ;
 int FUNC_8 (struct batadv_dat_candidate*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static bool FUNC_11(struct batadv_priv *VAR_8,
        struct sk_buff *VAR_9, __be32 VAR_10,
        unsigned short VAR_11, int VAR_12)
{
 int VAR_13;
 bool VAR_14 = 0;
 int VAR_15;
 struct batadv_neigh_node *VAR_16 = ((void*)0);
 struct sk_buff *VAR_17;
 struct batadv_dat_candidate *VAR_18;

 VAR_18 = FUNC_0(VAR_8, VAR_10, VAR_11);
 if (!VAR_18)
  goto out;

 FUNC_1(VAR_4, VAR_8, "DHT_SEND for %pI4\n", &VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (VAR_18[VAR_13].type == VAR_3)
   continue;

  VAR_16 = FUNC_5(VAR_18[VAR_13].orig_node,
          VAR_5);
  if (!VAR_16)
   goto free_orig;

  VAR_17 = FUNC_10(VAR_9, VAR_6);
  if (!FUNC_6(VAR_8, VAR_17,
          VAR_18[VAR_13].orig_node,
          VAR_12)) {
   FUNC_9(VAR_17);
   goto free_neigh;
  }

  VAR_15 = FUNC_7(VAR_17, VAR_16);
  if (VAR_15 == VAR_7) {

   switch (VAR_12) {
   case 129:
    FUNC_2(VAR_8,
         VAR_0);
    break;
   case 128:
    FUNC_2(VAR_8,
         VAR_1);
    break;
   }


   VAR_14 = 1;
  }
free_neigh:
  FUNC_3(VAR_16);
free_orig:
  FUNC_4(VAR_18[VAR_13].orig_node);
 }

out:
 FUNC_8(VAR_18);
 return VAR_14;
}
