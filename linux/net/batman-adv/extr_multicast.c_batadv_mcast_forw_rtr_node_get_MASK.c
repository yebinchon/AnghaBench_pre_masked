
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {int h_proto; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;




 struct batadv_orig_node* FUNC_0 (struct batadv_priv*) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct batadv_orig_node *
FUNC_3(struct batadv_priv *VAR_0,
          struct ethhdr *VAR_1)
{
 switch (FUNC_2(VAR_1->h_proto)) {
 case 129:
  return FUNC_0(VAR_0);
 case 128:
  return FUNC_1(VAR_0);
 default:

  return ((void*)0);
 }
}
