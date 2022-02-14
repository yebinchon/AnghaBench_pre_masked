
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int pgn; void* type; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_priv {int dummy; } ;


 void* VAR_0 ;




 struct j1939_sk_buff_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct j1939_priv*,struct sk_buff*) ;
 int FUNC_2 (struct j1939_sk_buff_cb*) ;
 int FUNC_3 (struct j1939_priv*,struct sk_buff*) ;

int FUNC_4(struct j1939_priv *VAR_1, struct sk_buff *VAR_2)
{
 struct j1939_sk_buff_cb *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_2(VAR_3))
  return 0;

 switch (VAR_3->addr.pgn) {
 case 130:
  VAR_3->addr.type = VAR_0;

 case 128:
  FUNC_3(VAR_1, VAR_2);
  break;

 case 131:
  VAR_3->addr.type = VAR_0;

 case 129:
  if (VAR_2->len < 8)
   return 0;

  FUNC_1(VAR_1, VAR_2);
  break;
 default:
  return 0;
 }
 return 1;
}
