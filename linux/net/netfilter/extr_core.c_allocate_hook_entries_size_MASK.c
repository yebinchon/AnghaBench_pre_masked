
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nf_hook_ops {int dummy; } ;
struct nf_hook_entry {int dummy; } ;
struct nf_hook_entries_rcu_head {int dummy; } ;
struct nf_hook_entries {int num_hook_entries; } ;


 int VAR_0 ;
 struct nf_hook_entries* FUNC_0 (size_t,int ) ;

__attribute__((used)) static struct nf_hook_entries *FUNC_1(u16 VAR_1)
{
 struct nf_hook_entries *VAR_2;
 size_t VAR_3 = sizeof(*VAR_2) +
         sizeof(struct nf_hook_entry) * VAR_1 +
         sizeof(struct nf_hook_ops *) * VAR_1 +
         sizeof(struct nf_hook_entries_rcu_head);

 if (VAR_1 == 0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_3, VAR_0);
 if (VAR_2)
  VAR_2->num_hook_entries = VAR_1;
 return VAR_2;
}
