
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int pf; int net; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff const*,int ,int ,int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(const struct sk_buff *VAR_1,
        const struct nf_hook_state *VAR_2,
        const char *VAR_3)
{
 FUNC_0(VAR_1, VAR_2->net, VAR_2->pf,
          VAR_0, "%s", VAR_3);
}
