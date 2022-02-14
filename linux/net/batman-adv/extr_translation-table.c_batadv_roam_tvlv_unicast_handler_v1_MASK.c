
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_roam_adv {int vid; int client; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int last_ttvn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int *,int ) ;
 int FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_priv*,int *) ;
 struct batadv_orig_node* FUNC_4 (struct batadv_priv*,int *) ;
 int FUNC_5 (struct batadv_orig_node*) ;
 int FUNC_6 (struct batadv_priv*,struct batadv_orig_node*,int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct batadv_priv *VAR_5,
            u8 *VAR_6, u8 *VAR_7,
            void *VAR_8,
            u16 VAR_9)
{
 struct batadv_tvlv_roam_adv *VAR_10;
 struct batadv_orig_node *VAR_11 = ((void*)0);





 if (!FUNC_3(VAR_5, VAR_7))
  return VAR_3;

 if (VAR_9 < sizeof(*VAR_10))
  goto out;

 VAR_11 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_11)
  goto out;

 FUNC_2(VAR_5, VAR_0);
 VAR_10 = (struct batadv_tvlv_roam_adv *)VAR_8;

 FUNC_1(VAR_1, VAR_5,
     "Received ROAMING_ADV from %pM (client %pM)\n",
     VAR_6, VAR_10->client);

 FUNC_6(VAR_5, VAR_11, VAR_10->client,
        FUNC_7(VAR_10->vid), VAR_2,
        FUNC_0(&VAR_11->last_ttvn) + 1);

out:
 if (VAR_11)
  FUNC_5(VAR_11);
 return VAR_4;
}
