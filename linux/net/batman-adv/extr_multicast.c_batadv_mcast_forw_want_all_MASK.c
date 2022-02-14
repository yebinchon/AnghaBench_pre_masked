
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct TYPE_2__ {int h_proto; } ;




 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,struct sk_buff*,unsigned short) ;
 int FUNC_1 (struct batadv_priv*,struct sk_buff*,unsigned short) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct batadv_priv *VAR_1,
      struct sk_buff *VAR_2, unsigned short VAR_3)
{
 switch (FUNC_3(FUNC_2(VAR_2)->h_proto)) {
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 default:

  return VAR_0;
 }
}
