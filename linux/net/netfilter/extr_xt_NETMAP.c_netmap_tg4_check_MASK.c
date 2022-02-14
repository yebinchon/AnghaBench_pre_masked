
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {int family; int net; struct nf_nat_ipv4_multi_range_compat* targinfo; } ;
struct nf_nat_ipv4_multi_range_compat {int rangesize; TYPE_1__* range; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_2)
{
 const struct nf_nat_ipv4_multi_range_compat *VAR_3 = VAR_2->targinfo;

 if (!(VAR_3->range[0].flags & VAR_1)) {
  FUNC_1("bad MAP_IPS.\n");
  return -VAR_0;
 }
 if (VAR_3->rangesize != 1) {
  FUNC_1("bad rangesize %u.\n", VAR_3->rangesize);
  return -VAR_0;
 }
 return FUNC_0(VAR_2->net, VAR_2->family);
}
