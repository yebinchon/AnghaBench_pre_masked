
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct j1939_sk_buff_cb {int dummy; } ;
struct j1939_priv {int dummy; } ;
typedef int pgn_t ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct j1939_priv*,struct sk_buff*) ;
 int FUNC_3 (struct j1939_sk_buff_cb const*,int) ;
 struct sk_buff* FUNC_4 (struct j1939_priv*,struct j1939_sk_buff_cb const*,int,int) ;
 int FUNC_5 (int*,int const*,int) ;
 int* FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct j1939_priv *VAR_0,
          const struct j1939_sk_buff_cb *VAR_1,
          bool VAR_2, pgn_t VAR_3, const u8 *VAR_4)
{
 struct sk_buff *VAR_5;
 u8 *VAR_6;

 if (!FUNC_3(VAR_1, VAR_2))
  return 0;

 VAR_5 = FUNC_4(VAR_0, VAR_1, 1, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_6(VAR_5, 8);
 FUNC_5(VAR_6, VAR_4, 5);
 VAR_6[5] = (VAR_3 >> 0);
 VAR_6[6] = (VAR_3 >> 8);
 VAR_6[7] = (VAR_3 >> 16);

 return FUNC_2(VAR_0, VAR_5);
}
