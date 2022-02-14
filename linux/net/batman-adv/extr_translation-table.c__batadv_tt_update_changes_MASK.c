
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_change {int flags; int vid; int addr; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int capa_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,int ,int ,int,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,int ,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct batadv_priv *VAR_3,
          struct batadv_orig_node *VAR_4,
          struct batadv_tvlv_tt_change *VAR_5,
          u16 VAR_6, u8 VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if ((VAR_5 + VAR_8)->flags & VAR_1) {
   VAR_9 = (VAR_5 + VAR_8)->flags & VAR_2;
   FUNC_1(VAR_3, VAR_4,
          (VAR_5 + VAR_8)->addr,
          FUNC_2((VAR_5 + VAR_8)->vid),
          "tt removed by changes",
          VAR_9);
  } else {
   if (!FUNC_0(VAR_3, VAR_4,
        (VAR_5 + VAR_8)->addr,
        FUNC_2((VAR_5 + VAR_8)->vid),
        (VAR_5 + VAR_8)->flags, VAR_7))






    return;
  }
 }
 FUNC_3(VAR_0, &VAR_4->capa_initialized);
}
