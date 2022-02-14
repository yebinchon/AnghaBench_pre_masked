
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {int h_dest; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int VAR_0 ;
 struct batadv_orig_node* FUNC_0 (struct batadv_priv*,int *,int ,int ) ;

__attribute__((used)) static struct batadv_orig_node *
FUNC_1(struct batadv_priv *VAR_1,
         struct ethhdr *VAR_2)
{
 return FUNC_0(VAR_1, ((void*)0), VAR_2->h_dest,
     VAR_0);
}
