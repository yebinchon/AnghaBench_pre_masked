
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;
struct nf_hook_entry {int dummy; } ;
struct nf_hook_entries {unsigned int num_hook_entries; struct nf_hook_entry* hooks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct nf_hook_entry const*,struct sk_buff*,struct nf_hook_state*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sk_buff *VAR_2,
          struct nf_hook_state *VAR_3,
          const struct nf_hook_entries *VAR_4,
          unsigned int *VAR_5)
{
 const struct nf_hook_entry *VAR_6;
 unsigned int VAR_7, VAR_8 = *VAR_5;

 while (VAR_8 < VAR_4->num_hook_entries) {
  VAR_6 = &VAR_4->hooks[VAR_8];
repeat:
  VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3);
  if (VAR_7 != VAR_0) {
   *VAR_5 = VAR_8;
   if (VAR_7 != VAR_1)
    return VAR_7;
   goto repeat;
  }
  VAR_8++;
 }

 *VAR_5 = VAR_8;
 return VAR_0;
}
