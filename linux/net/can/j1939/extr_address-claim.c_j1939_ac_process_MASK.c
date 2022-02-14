
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {scalar_t__ sa; int src_name; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_priv {int lock; int ndev; } ;
struct j1939_ecu {scalar_t__ addr; scalar_t__ name; } ;
typedef int name_t ;


 scalar_t__ FUNC_0 (struct j1939_ecu*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct j1939_ecu* FUNC_4 (struct j1939_priv*,int ) ;
 struct j1939_ecu* FUNC_5 (struct j1939_priv*,scalar_t__) ;
 struct j1939_ecu* FUNC_6 (struct j1939_priv*,int ) ;
 int FUNC_7 (struct j1939_ecu*) ;
 int FUNC_8 (struct j1939_ecu*) ;
 int FUNC_9 (struct j1939_ecu*) ;
 int FUNC_10 (struct j1939_ecu*) ;
 struct j1939_sk_buff_cb* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct j1939_priv *VAR_0, struct sk_buff *VAR_1)
{
 struct j1939_sk_buff_cb *VAR_2 = FUNC_11(VAR_1);
 struct j1939_ecu *VAR_3, *VAR_4;
 name_t VAR_5;

 if (VAR_1->len != 8) {
  FUNC_13(VAR_0->ndev, "rx address claim with wrong dlc %i\n",
         VAR_1->len);
  return;
 }

 VAR_5 = FUNC_12(VAR_1);
 VAR_2->addr.src_name = VAR_5;
 if (!VAR_5) {
  FUNC_13(VAR_0->ndev, "rx address claim without name\n");
  return;
 }

 if (!FUNC_3(VAR_2->addr.sa)) {
  FUNC_13(VAR_0->ndev, "rx address claim with broadcast sa\n");
  return;
 }

 FUNC_14(&VAR_0->lock);
 VAR_3 = FUNC_6(VAR_0, VAR_5);
 if (!VAR_3 && FUNC_2(VAR_2->addr.sa))
  VAR_3 = FUNC_4(VAR_0, VAR_5);

 if (FUNC_0(VAR_3))
  goto out_unlock_bh;


 FUNC_8(VAR_3);

 if (FUNC_1(VAR_2->addr.sa)) {
  FUNC_10(VAR_3);
  goto out_ecu_put;
 }


 if (VAR_3->addr != VAR_2->addr.sa)
  FUNC_10(VAR_3);
 VAR_3->addr = VAR_2->addr.sa;

 VAR_4 = FUNC_5(VAR_0, VAR_2->addr.sa);
 if (VAR_4) {
  if (VAR_3->name > VAR_4->name) {
   FUNC_10(VAR_3);
   FUNC_7(VAR_4);
   goto out_ecu_put;
  } else {

   FUNC_10(VAR_4);
   FUNC_7(VAR_4);
  }
 }

 FUNC_9(VAR_3);
 out_ecu_put:
 FUNC_7(VAR_3);
 out_unlock_bh:
 FUNC_15(&VAR_0->lock);
}
