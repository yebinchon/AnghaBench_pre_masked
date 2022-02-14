
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__* data; } ;
struct j1939_sk_buff_cb {int addr; } ;
struct j1939_session {int transmission; scalar_t__ last_cmd; } ;
struct j1939_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct j1939_session* FUNC_0 (struct j1939_priv*,int *,int,int) ;
 int FUNC_1 (struct j1939_session*) ;
 int FUNC_2 (struct j1939_session*) ;
 struct j1939_sk_buff_cb* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct j1939_session*,int ) ;
 int FUNC_5 (struct j1939_session*,int) ;
 scalar_t__ FUNC_6 (struct j1939_session*,struct sk_buff*) ;
 struct j1939_session* FUNC_7 (struct j1939_priv*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct j1939_priv *VAR_1, struct sk_buff *VAR_2,
        bool VAR_3)
{
 struct j1939_sk_buff_cb *VAR_4 = FUNC_3(VAR_2);
 struct j1939_session *VAR_5;
 u8 VAR_6 = VAR_2->data[0];

 VAR_5 = FUNC_0(VAR_1, &VAR_4->addr, 0,
         VAR_3);

 if (!VAR_5) {
  if (VAR_3) {
   return;
  }
  VAR_5 = FUNC_7(VAR_1, VAR_2);
  if (!VAR_5)
   return;
 } else {
  if (FUNC_6(VAR_5, VAR_2)) {
   FUNC_1(VAR_5);
   return;
  }
 }
 VAR_5->last_cmd = VAR_6;

 FUNC_5(VAR_5, 1250);

 if (VAR_6 != VAR_0 && !VAR_5->transmission) {
  FUNC_2(VAR_5);
  FUNC_4(VAR_5, 0);
 }

 FUNC_1(VAR_5);
}
