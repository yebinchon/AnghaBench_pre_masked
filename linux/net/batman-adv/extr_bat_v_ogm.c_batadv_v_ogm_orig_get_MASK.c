
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_priv {int orig_hash; } ;
struct batadv_orig_node {int hash_entry; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct batadv_orig_node*,int *) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int const*) ;
 struct batadv_orig_node* FUNC_2 (struct batadv_priv*,int const*) ;
 int FUNC_3 (struct batadv_orig_node*) ;
 int FUNC_4 (int *) ;

struct batadv_orig_node *FUNC_5(struct batadv_priv *VAR_2,
            const u8 *VAR_3)
{
 struct batadv_orig_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_4->refcount);
 VAR_5 = FUNC_0(VAR_2->orig_hash, VAR_1,
         VAR_0, VAR_4,
         &VAR_4->hash_entry);
 if (VAR_5 != 0) {

  FUNC_3(VAR_4);
  FUNC_3(VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
