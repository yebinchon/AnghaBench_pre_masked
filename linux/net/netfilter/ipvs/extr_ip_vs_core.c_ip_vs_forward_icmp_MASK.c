
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_hook_state {int hook; int net; } ;
struct netns_ipvs {int enable; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct netns_ipvs*,struct sk_buff*,int*,int ) ;
 struct netns_ipvs* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct netns_ipvs*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned int
FUNC_5(void *VAR_2, struct sk_buff *VAR_3,
     const struct nf_hook_state *VAR_4)
{
 int VAR_5;
 struct netns_ipvs *VAR_6 = FUNC_2(VAR_4->net);

 if (FUNC_0(VAR_3)->protocol != VAR_0)
  return VAR_1;


 if (FUNC_4(FUNC_3(VAR_6) || !VAR_6->enable))
  return VAR_1;

 return FUNC_1(VAR_6, VAR_3, &VAR_5, VAR_4->hook);
}
