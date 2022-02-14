
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hlist_head {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 struct hlist_head VAR_0 ;
 int FUNC_0 (struct batadv_orig_node*,struct sk_buff*,struct hlist_head*) ;
 struct sk_buff* FUNC_1 (struct hlist_head*) ;
 scalar_t__ FUNC_2 (struct hlist_head*) ;

bool FUNC_3(struct sk_buff **VAR_1,
       struct batadv_orig_node *VAR_2)
{
 struct sk_buff *VAR_3 = ((void*)0);
 struct hlist_head VAR_4 = VAR_0;
 bool VAR_5 = 0;


 if (!FUNC_0(VAR_2, *VAR_1, &VAR_4))
  goto out_err;


 if (FUNC_2(&VAR_4))
  goto out;

 VAR_3 = FUNC_1(&VAR_4);
 if (!VAR_3)
  goto out_err;

out:
 VAR_5 = 1;
out_err:
 *VAR_1 = VAR_3;
 return VAR_5;
}
