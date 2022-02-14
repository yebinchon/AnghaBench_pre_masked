
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {scalar_t__ daddr; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (void*,struct sk_buff*,struct nf_hook_state const*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_3(void *VAR_1, struct sk_buff *VAR_2,
        const struct nf_hook_state *VAR_3)
{
 unsigned int VAR_4;
 __be32 VAR_5 = FUNC_0(VAR_2)->daddr;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == VAR_0 && VAR_5 != FUNC_0(VAR_2)->daddr)
  FUNC_2(VAR_2);

 return VAR_4;
}
