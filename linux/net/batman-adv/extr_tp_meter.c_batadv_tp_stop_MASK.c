
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tp_vars {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int orig; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,...) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int const*) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 struct batadv_tp_vars* FUNC_3 (struct batadv_priv*,int ) ;
 int FUNC_4 (struct batadv_tp_vars*,int ) ;
 int FUNC_5 (struct batadv_tp_vars*) ;

void FUNC_6(struct batadv_priv *VAR_1, const u8 *VAR_2,
      u8 VAR_3)
{
 struct batadv_orig_node *VAR_4;
 struct batadv_tp_vars *VAR_5;

 FUNC_0(VAR_0, VAR_1,
     "Meter: stopping test towards %pM\n", VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_3(VAR_1, VAR_4->orig);
 if (!VAR_5) {
  FUNC_0(VAR_0, VAR_1,
      "Meter: trying to interrupt an already over connection\n");
  goto out;
 }

 FUNC_4(VAR_5, VAR_3);
 FUNC_5(VAR_5);
out:
 FUNC_2(VAR_4);
}
