
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_ogm_packet {int tvlv_len; } ;


 int FUNC_0 (struct batadv_priv*,int,struct batadv_orig_node*,int *,int *,void*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct batadv_priv *VAR_0,
        struct batadv_ogm_packet *VAR_1,
        struct batadv_orig_node *VAR_2)
{
 void *VAR_3;
 u16 VAR_4;

 if (!VAR_1)
  return;

 VAR_4 = FUNC_1(VAR_1->tvlv_len);
 if (!VAR_4)
  return;

 VAR_3 = VAR_1 + 1;

 FUNC_0(VAR_0, 1, VAR_2, ((void*)0), ((void*)0),
           VAR_3, VAR_4);
}
