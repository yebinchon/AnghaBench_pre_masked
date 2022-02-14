
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int * h_dest; int * h_source; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int FUNC_0 (struct batadv_orig_node*) ;
 int FUNC_1 (struct batadv_priv*,struct sk_buff*,int,int,struct batadv_orig_node*,unsigned short) ;
 struct batadv_orig_node* FUNC_2 (struct batadv_priv*,int *,int *,unsigned short) ;

int FUNC_3(struct batadv_priv *VAR_0,
       struct sk_buff *VAR_1, int VAR_2,
       int VAR_3, u8 *VAR_4,
       unsigned short VAR_5)
{
 struct ethhdr *VAR_6 = (struct ethhdr *)VAR_1->data;
 struct batadv_orig_node *VAR_7;
 u8 *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = VAR_6->h_source;
 VAR_9 = VAR_6->h_dest;


 if (VAR_4) {
  VAR_8 = ((void*)0);
  VAR_9 = VAR_4;
 }
 VAR_7 = FUNC_2(VAR_0, VAR_8, VAR_9, VAR_5);

 VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_7, VAR_5);

 if (VAR_7)
  FUNC_0(VAR_7);

 return VAR_10;
}
