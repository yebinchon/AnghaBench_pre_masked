
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* all; } ;
struct TYPE_7__ {void* all; } ;
struct TYPE_6__ {void* ip; void* in6; } ;
struct TYPE_5__ {void* in6; void* ip; } ;
struct nf_nat_range2 {TYPE_4__ min_proto; TYPE_3__ max_proto; int flags; TYPE_2__ min_addr; TYPE_1__ max_addr; } ;
struct tcf_ct_params {int ct_action; int ipv4_range; struct nf_nat_range2 range; } ;
struct tc_ct {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct tcf_ct_params *VAR_13,
      struct tc_ct *VAR_14,
      struct nlattr **VAR_15,
      struct netlink_ext_ack *VAR_16)
{
 struct nf_nat_range2 *VAR_17;

 if (!(VAR_13->ct_action & VAR_4))
  return 0;

 if (!FUNC_0(VAR_0)) {
  FUNC_1(VAR_16, "Netfilter nat isn't enabled in kernel");
  return -VAR_1;
 }

 if (!(VAR_13->ct_action & (VAR_6 | VAR_5)))
  return 0;

 if ((VAR_13->ct_action & VAR_6) &&
     (VAR_13->ct_action & VAR_5)) {
  FUNC_1(VAR_16, "dnat and snat can't be enabled at the same time");
  return -VAR_1;
 }

 VAR_17 = &VAR_13->range;
 if (VAR_15[VAR_8]) {
  struct nlattr *VAR_18 = VAR_15[VAR_7];

  VAR_13->ipv4_range = 1;
  VAR_17->flags |= VAR_2;
  VAR_17->min_addr.ip =
   FUNC_4(VAR_15[VAR_8]);

  VAR_17->max_addr.ip = VAR_18 ?
         FUNC_4(VAR_18) :
         VAR_17->min_addr.ip;
 } else if (VAR_15[VAR_10]) {
  struct nlattr *VAR_19 = VAR_15[VAR_9];

  VAR_13->ipv4_range = 0;
  VAR_17->flags |= VAR_2;
  VAR_17->min_addr.in6 =
   FUNC_3(VAR_15[VAR_10]);

  VAR_17->max_addr.in6 = VAR_19 ?
          FUNC_3(VAR_19) :
          VAR_17->min_addr.in6;
 }

 if (VAR_15[VAR_12]) {
  VAR_17->flags |= VAR_3;
  VAR_17->min_proto.all = FUNC_2(VAR_15[VAR_12]);

  VAR_17->max_proto.all = VAR_15[VAR_11] ?
           FUNC_2(VAR_15[VAR_11]) :
           VAR_17->min_proto.all;
 }

 return 0;
}
