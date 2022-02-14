
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_ops {int dummy; } ;
struct nf_hook_entries_rcu_head {int head; struct nf_hook_entries* allocation; } ;
struct nf_hook_entries {unsigned int num_hook_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct nf_hook_ops** FUNC_1 (struct nf_hook_entries*) ;

__attribute__((used)) static void FUNC_2(struct nf_hook_entries *VAR_1)
{
 struct nf_hook_entries_rcu_head *VAR_2;
 struct nf_hook_ops **VAR_3;
 unsigned int VAR_4;

 if (!VAR_1)
  return;

 VAR_4 = VAR_1->num_hook_entries;
 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = (void *)&VAR_3[VAR_4];
 VAR_2->allocation = VAR_1;
 FUNC_0(&VAR_2->head, VAR_0);
}
