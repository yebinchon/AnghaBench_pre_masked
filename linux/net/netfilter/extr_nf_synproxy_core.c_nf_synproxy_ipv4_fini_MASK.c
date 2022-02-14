
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synproxy_net {scalar_t__ hook_ref4; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ,int ) ;

void FUNC_2(struct synproxy_net *VAR_1, struct net *VAR_2)
{
 VAR_1->hook_ref4--;
 if (VAR_1->hook_ref4 == 0)
  FUNC_1(VAR_2, VAR_0,
     FUNC_0(VAR_0));
}
