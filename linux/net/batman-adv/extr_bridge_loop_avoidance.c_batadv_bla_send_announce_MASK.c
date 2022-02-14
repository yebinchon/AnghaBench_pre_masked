
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_priv {int dummy; } ;
struct batadv_bla_backbone_gw {int vid; int crc_lock; int crc; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct batadv_priv*,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct batadv_priv *VAR_3,
         struct batadv_bla_backbone_gw *VAR_4)
{
 u8 VAR_5[VAR_1];
 __be16 VAR_6;

 FUNC_2(VAR_5, VAR_2, 4);
 FUNC_3(&VAR_4->crc_lock);
 VAR_6 = FUNC_1(VAR_4->crc);
 FUNC_4(&VAR_4->crc_lock);
 FUNC_2(&VAR_5[4], &VAR_6, 2);

 FUNC_0(VAR_3, VAR_5, VAR_4->vid,
         VAR_0);
}
