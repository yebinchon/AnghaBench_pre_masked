
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int refcount; } ;
struct batadv_gw_node {struct batadv_orig_node* orig_node; } ;


 struct batadv_gw_node* FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (struct batadv_gw_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct batadv_orig_node *
FUNC_5(struct batadv_priv *VAR_0)
{
 struct batadv_gw_node *VAR_1;
 struct batadv_orig_node *VAR_2 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  goto out;

 FUNC_3();
 VAR_2 = VAR_1->orig_node;
 if (!VAR_2)
  goto unlock;

 if (!FUNC_2(&VAR_2->refcount))
  VAR_2 = ((void*)0);

unlock:
 FUNC_4();
out:
 if (VAR_1)
  FUNC_1(VAR_1);
 return VAR_2;
}
