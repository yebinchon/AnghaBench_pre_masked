
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ pgn; int dst_name; int da; int src_name; int sa; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_priv {int dummy; } ;
struct j1939_ecu {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct j1939_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct j1939_ecu* FUNC_2 (struct j1939_priv*,int ) ;
 int FUNC_3 (struct j1939_ecu*) ;
 struct j1939_sk_buff_cb* FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct j1939_priv *VAR_1, struct sk_buff *VAR_2)
{
 struct j1939_sk_buff_cb *VAR_3 = FUNC_4(VAR_2);
 struct j1939_ecu *VAR_4;


 if (VAR_3->addr.pgn == VAR_0) {
  FUNC_0(VAR_1, VAR_2);
 } else if (FUNC_1(VAR_3->addr.sa)) {

  VAR_4 = FUNC_2(VAR_1, VAR_3->addr.sa);
  if (VAR_4) {
   VAR_3->addr.src_name = VAR_4->name;
   FUNC_3(VAR_4);
  }
 }


 VAR_4 = FUNC_2(VAR_1, VAR_3->addr.da);
 if (VAR_4) {
  VAR_3->addr.dst_name = VAR_4->name;
  FUNC_3(VAR_4);
 }
}
