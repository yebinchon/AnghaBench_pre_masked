
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tvlv_tt_data {int dummy; } ;
struct batadv_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct batadv_priv*,int *) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_tvlv_tt_data*,int *) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_tvlv_tt_data*,int *,int *) ;

__attribute__((used)) static bool FUNC_3(struct batadv_priv *VAR_0,
        struct batadv_tvlv_tt_data *VAR_1,
        u8 *VAR_2, u8 *VAR_3)
{
 if (FUNC_0(VAR_0, VAR_3))
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_3);
}
