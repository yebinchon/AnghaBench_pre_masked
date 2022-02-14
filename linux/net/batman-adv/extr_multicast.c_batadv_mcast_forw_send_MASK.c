
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,struct sk_buff*,unsigned short) ;
 int FUNC_1 (struct batadv_priv*,struct sk_buff*,unsigned short) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*,unsigned short) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct batadv_priv *VAR_1, struct sk_buff *VAR_2,
      unsigned short VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0) {
  FUNC_4(VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0) {
  FUNC_4(VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0) {
  FUNC_4(VAR_2);
  return VAR_4;
 }

 FUNC_3(VAR_2);
 return VAR_4;
}
