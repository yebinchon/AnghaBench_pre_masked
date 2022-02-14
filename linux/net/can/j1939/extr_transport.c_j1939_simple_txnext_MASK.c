
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct j1939_session {struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct j1939_priv*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct j1939_session*) ;
 int FUNC_3 (struct j1939_session*,int ) ;
 int FUNC_4 (struct j1939_session*) ;
 int FUNC_5 (struct j1939_session*,int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_7(struct j1939_session *VAR_4)
{
 struct j1939_priv *VAR_5 = VAR_4->priv;
 struct sk_buff *VAR_6 = FUNC_2(VAR_4);
 struct sk_buff *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_6(VAR_6, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_6->sk);

 FUNC_5(VAR_4, VAR_3);

 VAR_8 = FUNC_1(VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_4, VAR_2);
 FUNC_4(VAR_4);

 return 0;
}
