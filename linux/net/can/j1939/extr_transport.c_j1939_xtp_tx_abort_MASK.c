
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct j1939_sk_buff_cb {int dummy; } ;
struct j1939_priv {int dummy; } ;
typedef int pgn_t ;
typedef enum j1939_xtp_abort { ____Placeholder_j1939_xtp_abort } j1939_xtp_abort ;
typedef int dat ;


 int VAR_0 ;
 int FUNC_0 (struct j1939_sk_buff_cb const*,int) ;
 int FUNC_1 (struct j1939_priv*,struct j1939_sk_buff_cb const*,int,int ,int*) ;
 int FUNC_2 (int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct j1939_priv *VAR_1,
         const struct j1939_sk_buff_cb *VAR_2,
         bool VAR_3,
         enum j1939_xtp_abort VAR_4,
         pgn_t VAR_5)
{
 u8 VAR_6[5];

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;

 FUNC_2(VAR_6, 0xff, sizeof(VAR_6));
 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_4;
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
}
