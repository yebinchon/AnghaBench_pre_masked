
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int all; } ;
struct TYPE_7__ {int all; } ;
struct TYPE_6__ {int in6; int ip; } ;
struct TYPE_5__ {int in6; int ip; } ;
struct nf_nat_range2 {int flags; TYPE_4__ max_proto; TYPE_3__ min_proto; TYPE_2__ max_addr; TYPE_1__ min_addr; } ;
struct tcf_ct_params {int ct_action; scalar_t__ ipv4_range; struct nf_nat_range2 range; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_11, struct tcf_ct_params *VAR_12)
{
 struct nf_nat_range2 *VAR_13 = &VAR_12->range;

 if (!(VAR_12->ct_action & VAR_2))
  return 0;

 if (!(VAR_12->ct_action & (VAR_4 | VAR_3)))
  return 0;

 if (VAR_13->flags & VAR_0) {
  if (VAR_12->ipv4_range) {
   if (FUNC_2(VAR_11, VAR_6,
         VAR_13->min_addr.ip))
    return -1;
   if (FUNC_2(VAR_11, VAR_5,
         VAR_13->max_addr.ip))
    return -1;
  } else {
   if (FUNC_1(VAR_11, VAR_8,
          &VAR_13->min_addr.in6))
    return -1;
   if (FUNC_1(VAR_11, VAR_7,
          &VAR_13->max_addr.in6))
    return -1;
  }
 }

 if (VAR_13->flags & VAR_1) {
  if (FUNC_0(VAR_11, VAR_10,
     VAR_13->min_proto.all))
   return -1;
  if (FUNC_0(VAR_11, VAR_9,
     VAR_13->max_proto.all))
   return -1;
 }

 return 0;
}
