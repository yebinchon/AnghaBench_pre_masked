
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_tvlv_gateway_data {scalar_t__ bandwidth_up; scalar_t__ bandwidth_down; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_gateway_data*) ;

void FUNC_1(struct batadv_priv *VAR_0,
      struct batadv_orig_node *VAR_1)
{
 struct batadv_tvlv_gateway_data VAR_2;

 VAR_2.bandwidth_down = 0;
 VAR_2.bandwidth_up = 0;

 FUNC_0(VAR_0, VAR_1, &VAR_2);
}
