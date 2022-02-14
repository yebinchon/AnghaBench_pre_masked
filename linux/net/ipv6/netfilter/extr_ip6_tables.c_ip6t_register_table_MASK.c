
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_table_info {void* entries; int member_0; } ;
struct xt_table {int valid_hooks; } ;
struct nf_hook_ops {int dummy; } ;
struct net {int dummy; } ;
struct ip6t_replace {int size; int entries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xt_table*) ;
 int FUNC_1 (struct xt_table*) ;
 int FUNC_2 (struct xt_table*,struct xt_table*) ;
 int FUNC_3 (struct net*,struct xt_table*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (struct net*,struct nf_hook_ops const*,int ) ;
 int FUNC_7 (struct net*,struct xt_table_info*,void*,struct ip6t_replace const*) ;
 struct xt_table_info* FUNC_8 (int ) ;
 int FUNC_9 (struct xt_table_info*) ;
 struct xt_table* FUNC_10 (struct net*,struct xt_table const*,struct xt_table_info*,struct xt_table_info*) ;

int FUNC_11(struct net *VAR_1, const struct xt_table *VAR_2,
   const struct ip6t_replace *VAR_3,
   const struct nf_hook_ops *VAR_4,
   struct xt_table **VAR_5)
{
 int VAR_6;
 struct xt_table_info *VAR_7;
 struct xt_table_info VAR_8 = {0};
 void *VAR_9;
 struct xt_table *VAR_10;

 VAR_7 = FUNC_8(VAR_3->size);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = VAR_7->entries;
 FUNC_5(VAR_9, VAR_3->entries, VAR_3->size);

 VAR_6 = FUNC_7(VAR_1, VAR_7, VAR_9, VAR_3);
 if (VAR_6 != 0)
  goto out_free;

 VAR_10 = FUNC_10(VAR_1, VAR_2, &VAR_8, VAR_7);
 if (FUNC_0(VAR_10)) {
  VAR_6 = FUNC_1(VAR_10);
  goto out_free;
 }


 FUNC_2(*VAR_5, VAR_10);
 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_6(VAR_1, VAR_4, FUNC_4(VAR_2->valid_hooks));
 if (VAR_6 != 0) {
  FUNC_3(VAR_1, VAR_10);
  *VAR_5 = ((void*)0);
 }

 return VAR_6;

out_free:
 FUNC_9(VAR_7);
 return VAR_6;
}
