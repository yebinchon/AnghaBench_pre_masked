
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int sel_class; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_gw_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,scalar_t__,scalar_t__) ;
 struct batadv_gw_node* FUNC_2 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_3 (struct batadv_gw_node*) ;
 scalar_t__ FUNC_4 (struct batadv_gw_node*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(struct batadv_priv *VAR_1,
        struct batadv_orig_node *VAR_2,
        struct batadv_orig_node *VAR_3)
{
 struct batadv_gw_node *VAR_4, *VAR_5 = ((void*)0);
 u32 VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 VAR_8 = FUNC_0(&VAR_1->gw.sel_class);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4) {
  VAR_9 = 1;
  goto out;
 }

 if (FUNC_4(VAR_4, &VAR_6) < 0) {
  VAR_9 = 1;
  goto out;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_5)
  goto out;

 if (FUNC_4(VAR_5, &VAR_7) < 0)
  goto out;

 if (VAR_7 < VAR_6)
  goto out;

 if ((VAR_7 - VAR_6) < VAR_8)
  goto out;

 FUNC_1(VAR_0, VAR_1,
     "Restarting gateway selection: better gateway found (throughput curr: %u, throughput new: %u)\n",
     VAR_6, VAR_7);

 VAR_9 = 1;
out:
 if (VAR_4)
  FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_3(VAR_5);

 return VAR_9;
}
