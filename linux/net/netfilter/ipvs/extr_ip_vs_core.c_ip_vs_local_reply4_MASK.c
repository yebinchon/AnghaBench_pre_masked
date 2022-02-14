
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int hook; int net; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,struct sk_buff*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int
FUNC_2(void *VAR_1, struct sk_buff *VAR_2,
     const struct nf_hook_state *VAR_3)
{
 return FUNC_0(FUNC_1(VAR_3->net), VAR_3->hook, VAR_2, VAR_0);
}
