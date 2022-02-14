
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
union nf_conntrack_man_proto {int all; TYPE_2__ icmp; } ;
struct TYPE_11__ {int all; } ;
struct TYPE_12__ {int protonum; TYPE_5__ u; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_9__ {int all; TYPE_1__ icmp; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct nf_conntrack_tuple {TYPE_6__ dst; TYPE_4__ src; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef int __be16 ;
 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct nf_conntrack_tuple *VAR_1,
        enum nf_nat_manip_type VAR_2,
        const union nf_conntrack_man_proto *VAR_3,
        const union nf_conntrack_man_proto *VAR_4)
{
 __be16 VAR_5;

 switch (VAR_1->dst.protonum) {
 case 133:
 case 132:
  return FUNC_0(VAR_1->src.u.icmp.id) >= FUNC_0(VAR_3->icmp.id) &&
         FUNC_0(VAR_1->src.u.icmp.id) <= FUNC_0(VAR_4->icmp.id);
 case 134:
 case 130:
 case 129:
 case 128:
 case 135:
 case 131:
  if (VAR_2 == VAR_0)
   VAR_5 = VAR_1->src.u.all;
  else
   VAR_5 = VAR_1->dst.u.all;

  return FUNC_0(VAR_5) >= FUNC_0(VAR_3->all) &&
         FUNC_0(VAR_5) <= FUNC_0(VAR_4->all);
 default:
  return 1;
 }
}
