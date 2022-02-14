
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_priv {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct batadv_priv*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;

int FUNC_5(struct batadv_priv *VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_0,
           0, 0, 0);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return VAR_8;
 }

 FUNC_2(&VAR_5,
    FUNC_1(VAR_6->soft_iface), VAR_7, 0,
    VAR_1, VAR_3);

 return 0;
}
