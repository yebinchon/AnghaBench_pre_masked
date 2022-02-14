
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct TYPE_3__ {int mode; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_2__ bat_iv; } ;
struct batadv_gw_node {struct batadv_orig_node* orig_node; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct batadv_neigh_node* FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,int *) ;
 unsigned short FUNC_2 (struct sk_buff*,int ) ;
 struct batadv_gw_node* FUNC_3 (struct batadv_priv*) ;
 struct batadv_gw_node* FUNC_4 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_5 (struct batadv_gw_node*) ;
 struct batadv_neigh_ifinfo* FUNC_6 (struct batadv_neigh_node*,int ) ;
 int FUNC_7 (struct batadv_neigh_ifinfo*) ;
 int FUNC_8 (struct batadv_neigh_node*) ;
 int FUNC_9 (struct batadv_orig_node*) ;
 struct batadv_orig_node* FUNC_10 (struct batadv_priv*,int ,int ,unsigned short) ;
 scalar_t__ FUNC_11 (int ) ;

bool FUNC_12(struct batadv_priv *VAR_3,
       struct sk_buff *VAR_4)
{
 struct batadv_neigh_node *VAR_5 = ((void*)0);
 struct batadv_neigh_node *VAR_6 = ((void*)0);
 struct batadv_orig_node *VAR_7 = ((void*)0);
 struct batadv_gw_node *VAR_8 = ((void*)0);
 struct batadv_gw_node *VAR_9 = ((void*)0);
 struct batadv_neigh_ifinfo *VAR_10, *VAR_11;
 struct ethhdr *VAR_12 = (struct ethhdr *)VAR_4->data;
 bool VAR_13 = 0;
 u8 VAR_14;
 unsigned short VAR_15;

 VAR_15 = FUNC_2(VAR_4, 0);

 if (FUNC_11(VAR_12->h_dest))
  goto out;

 VAR_7 = FUNC_10(VAR_3, VAR_12->h_source,
       VAR_12->h_dest, VAR_15);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_4(VAR_3, VAR_7);
 if (!VAR_8)
  goto out;

 switch (FUNC_0(&VAR_3->gw.mode)) {
 case 128:



  VAR_14 = VAR_2;
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_3);
  if (!VAR_9)
   goto out;


  if (VAR_9->orig_node == VAR_7)
   goto out;





  VAR_5 = FUNC_1(VAR_3, VAR_9->orig_node,
      ((void*)0));
  if (!VAR_5)
   goto out;

  VAR_10 = FUNC_6(VAR_5,
            VAR_1);
  if (!VAR_10)
   goto out;

  VAR_14 = VAR_10->bat_iv.tq_avg;
  FUNC_7(VAR_10);

  break;
 case 129:
 default:
  goto out;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_7, ((void*)0));
 if (!VAR_6)
  goto out;

 VAR_11 = FUNC_6(VAR_6, VAR_1);
 if (!VAR_11)
  goto out;

 if ((VAR_14 - VAR_11->bat_iv.tq_avg) > VAR_0)
  VAR_13 = 1;
 FUNC_7(VAR_11);

out:
 if (VAR_7)
  FUNC_9(VAR_7);
 if (VAR_9)
  FUNC_5(VAR_9);
 if (VAR_8)
  FUNC_5(VAR_8);
 if (VAR_6)
  FUNC_8(VAR_6);
 if (VAR_5)
  FUNC_8(VAR_5);
 return VAR_13;
}
