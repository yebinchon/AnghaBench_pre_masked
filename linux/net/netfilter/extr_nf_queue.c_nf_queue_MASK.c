
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nf_hook_state*,unsigned int,unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;

int FUNC_2(struct sk_buff *VAR_3, struct nf_hook_state *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6 >> VAR_2);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_0 &&
      (VAR_6 & VAR_1))
   return 1;
  FUNC_1(VAR_3);
 }

 return 0;
}
