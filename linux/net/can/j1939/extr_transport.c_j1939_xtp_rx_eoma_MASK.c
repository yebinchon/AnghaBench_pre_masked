
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct j1939_sk_buff_cb {int addr; } ;
struct j1939_session {int dummy; } ;
struct j1939_priv {int dummy; } ;


 struct j1939_session* FUNC_0 (struct j1939_priv*,int *,int,int) ;
 int FUNC_1 (struct j1939_session*) ;
 struct j1939_sk_buff_cb* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct j1939_session*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct j1939_priv *VAR_0, struct sk_buff *VAR_1,
    bool VAR_2)
{
 struct j1939_sk_buff_cb *VAR_3 = FUNC_2(VAR_1);
 struct j1939_session *VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3->addr, 1,
         VAR_2);
 if (!VAR_4)
  return;

 FUNC_3(VAR_4, VAR_1);
 FUNC_1(VAR_4);
}
