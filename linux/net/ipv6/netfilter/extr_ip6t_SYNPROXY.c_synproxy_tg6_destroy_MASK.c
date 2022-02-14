
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {int family; int net; } ;
struct synproxy_net {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct synproxy_net*,int ) ;
 struct synproxy_net* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct xt_tgdtor_param *VAR_0)
{
 struct synproxy_net *VAR_1 = FUNC_2(VAR_0->net);

 FUNC_1(VAR_1, VAR_0->net);
 FUNC_0(VAR_0->net, VAR_0->family);
}
