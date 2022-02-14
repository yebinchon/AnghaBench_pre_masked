
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {int family; int net; struct ipt_clusterip_tgt_info* targinfo; } ;
struct ipt_clusterip_tgt_info {int config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct xt_tgdtor_param *VAR_0)
{
 const struct ipt_clusterip_tgt_info *VAR_1 = VAR_0->targinfo;



 FUNC_0(VAR_1->config);

 FUNC_1(VAR_1->config);

 FUNC_2(VAR_0->net, VAR_0->family);
}
