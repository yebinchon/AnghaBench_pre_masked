
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct j1939_session {int skcb; struct j1939_priv* priv; } ;
struct j1939_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct j1939_priv*,struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_3 (struct j1939_priv*,int *,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int const*,int) ;

__attribute__((used)) static int FUNC_7(struct j1939_session *VAR_1,
      const u8 *VAR_2, int VAR_3)
{
 struct j1939_priv *VAR_4 = VAR_1->priv;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_4, &VAR_1->skcb,
      0, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_6(VAR_5, VAR_2, VAR_3);
 if (VAR_0 && VAR_3 < 8)
  FUNC_4(FUNC_5(VAR_5, 8 - VAR_3), 0xff, 8 - VAR_3);

 return FUNC_2(VAR_4, VAR_5);
}
