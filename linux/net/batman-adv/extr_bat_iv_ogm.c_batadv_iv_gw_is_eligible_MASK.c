
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int sel_class; } ;
struct batadv_priv {TYPE_2__ gw; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {int dummy; } ;
struct TYPE_3__ {scalar_t__ tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,scalar_t__,scalar_t__) ;
 struct batadv_neigh_ifinfo* FUNC_2 (struct batadv_neigh_node*,int ) ;
 int FUNC_3 (struct batadv_neigh_ifinfo*) ;
 int FUNC_4 (struct batadv_neigh_node*) ;
 struct batadv_neigh_node* FUNC_5 (struct batadv_orig_node*,int ) ;

__attribute__((used)) static bool FUNC_6(struct batadv_priv *VAR_2,
         struct batadv_orig_node *VAR_3,
         struct batadv_orig_node *VAR_4)
{
 struct batadv_neigh_ifinfo *VAR_5 = ((void*)0);
 struct batadv_neigh_ifinfo *VAR_6 = ((void*)0);
 struct batadv_neigh_node *VAR_7 = ((void*)0);
 struct batadv_neigh_node *VAR_8 = ((void*)0);
 u8 VAR_9, VAR_10;
 bool VAR_11 = 0;


 if (FUNC_0(&VAR_2->gw.sel_class) <= 2)
  return 0;

 VAR_7 = FUNC_5(VAR_3, VAR_1);
 if (!VAR_7) {
  VAR_11 = 1;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_7,
         VAR_1);
 if (!VAR_6) {
  VAR_11 = 1;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_4, VAR_1);
 if (!VAR_8)
  goto out;

 VAR_5 = FUNC_2(VAR_8,
           VAR_1);
 if (!VAR_5)
  goto out;

 VAR_9 = VAR_6->bat_iv.tq_avg;
 VAR_10 = VAR_5->bat_iv.tq_avg;


 if (VAR_10 < VAR_9)
  goto out;




 if ((FUNC_0(&VAR_2->gw.sel_class) > 3) &&
     (VAR_10 - VAR_9 < FUNC_0(&VAR_2->gw.sel_class)))
  goto out;

 FUNC_1(VAR_0, VAR_2,
     "Restarting gateway selection: better gateway found (tq curr: %i, tq new: %i)\n",
     VAR_9, VAR_10);

 VAR_11 = 1;
out:
 if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_5)
  FUNC_3(VAR_5);
 if (VAR_7)
  FUNC_4(VAR_7);
 if (VAR_8)
  FUNC_4(VAR_8);

 return VAR_11;
}
