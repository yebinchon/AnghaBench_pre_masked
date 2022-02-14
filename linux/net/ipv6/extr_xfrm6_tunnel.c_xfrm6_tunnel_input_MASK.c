
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {size_t nhoff; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct xfrm_state *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_1(VAR_1)[FUNC_0(VAR_1)->nhoff];
}
