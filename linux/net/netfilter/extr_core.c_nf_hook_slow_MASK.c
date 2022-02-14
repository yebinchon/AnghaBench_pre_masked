
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;
struct nf_hook_entries {unsigned int num_hook_entries; int * hooks; } ;


 int VAR_0 ;


 int FUNC_0 (unsigned int) ;

 unsigned int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (int *,struct sk_buff*,struct nf_hook_state*) ;
 int FUNC_3 (struct sk_buff*,struct nf_hook_state*,unsigned int,unsigned int) ;

int FUNC_4(struct sk_buff *VAR_2, struct nf_hook_state *VAR_3,
   const struct nf_hook_entries *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 for (; VAR_5 < VAR_4->num_hook_entries; VAR_5++) {
  VAR_6 = FUNC_2(&VAR_4->hooks[VAR_5], VAR_2, VAR_3);
  switch (VAR_6 & VAR_1) {
  case 130:
   break;
  case 129:
   FUNC_1(VAR_2);
   VAR_7 = FUNC_0(VAR_6);
   if (VAR_7 == 0)
    VAR_7 = -VAR_0;
   return VAR_7;
  case 128:
   VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
   if (VAR_7 == 1)
    continue;
   return VAR_7;
  default:



   return 0;
  }
 }

 return 1;
}
