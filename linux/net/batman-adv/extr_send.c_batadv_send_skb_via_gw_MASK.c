
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct batadv_orig_node* FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (struct batadv_orig_node*) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*,int ,int ,struct batadv_orig_node*,unsigned short) ;

int FUNC_3(struct batadv_priv *VAR_2, struct sk_buff *VAR_3,
      unsigned short VAR_4)
{
 struct batadv_orig_node *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_1,
          VAR_0, VAR_5, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_5);

 return VAR_6;
}
