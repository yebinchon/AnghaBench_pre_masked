
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ethhdr {int h_dest; } ;
struct TYPE_2__ {int num_want_all_unsnoopables; } ;
struct batadv_priv {int multicast_fanout; TYPE_1__ mcast; } ;
struct batadv_orig_node {int dummy; } ;
typedef enum batadv_forw_mode { ____Placeholder_batadv_forw_mode } batadv_forw_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,struct ethhdr*) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*,int*,int*) ;
 int FUNC_3 (struct batadv_priv*,int) ;
 struct batadv_orig_node* FUNC_4 (struct batadv_priv*,struct ethhdr*) ;
 struct batadv_orig_node* FUNC_5 (struct batadv_priv*,struct ethhdr*) ;
 struct batadv_orig_node* FUNC_6 (struct batadv_priv*) ;
 int FUNC_7 (struct batadv_priv*,struct ethhdr*) ;
 int FUNC_8 (struct batadv_priv*,int ,int ) ;
 struct ethhdr* FUNC_9 (struct sk_buff*) ;

enum batadv_forw_mode
FUNC_10(struct batadv_priv *VAR_6, struct sk_buff *VAR_7,
         struct batadv_orig_node **VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 bool VAR_14 = 0;
 unsigned int VAR_15;
 struct ethhdr *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 VAR_9 = FUNC_2(VAR_6, VAR_7, &VAR_14,
        &VAR_17);
 if (VAR_9 == -VAR_5)
  return VAR_1;
 else if (VAR_9 < 0)
  return VAR_0;

 VAR_16 = FUNC_9(VAR_7);

 VAR_10 = FUNC_8(VAR_6, VAR_16->h_dest,
            VAR_4);
 VAR_11 = FUNC_7(VAR_6, VAR_16);
 VAR_12 = !VAR_14 ? 0 :
   FUNC_0(&VAR_6->mcast.num_want_all_unsnoopables);
 VAR_18 = FUNC_3(VAR_6, VAR_17);

 VAR_13 = VAR_10 + VAR_11 + VAR_12 + VAR_18;

 switch (VAR_13) {
 case 1:
  if (VAR_10)
   *VAR_8 = FUNC_5(VAR_6, VAR_16);
  else if (VAR_11)
   *VAR_8 = FUNC_1(VAR_6, VAR_16);
  else if (VAR_12)
   *VAR_8 = FUNC_6(VAR_6);
  else if (VAR_18)
   *VAR_8 = FUNC_4(VAR_6,
              VAR_16);

  if (*VAR_8)
   return VAR_2;


 case 0:
  return VAR_1;
 default:
  VAR_15 = FUNC_0(&VAR_6->multicast_fanout);

  if (!VAR_12 && VAR_13 <= VAR_15)
   return VAR_3;
 }

 return VAR_0;
}
