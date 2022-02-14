
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*,struct nf_hook_state const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_2(void *VAR_2, struct sk_buff *VAR_3,
          const struct nf_hook_state *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != VAR_0)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_4, VAR_1);
}
