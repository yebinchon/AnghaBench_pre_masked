
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct j1939_session {int priv; int transmission; } ;


 int FUNC_0 (struct j1939_session*) ;
 struct sk_buff* FUNC_1 (struct j1939_session*) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct j1939_session *VAR_0)
{
 struct sk_buff *VAR_1;

 if (!VAR_0->transmission) {
  VAR_1 = FUNC_1(VAR_0);

  FUNC_2(VAR_0->priv, VAR_1);
 }

 FUNC_0(VAR_0);
}
