
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int dst; int src; } ;
struct ovs_key_ct_tuple_ipv6 {scalar_t__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_14__ {TYPE_6__ orig_tp; struct ovs_key_ct_tuple_ipv6 labels; int mark; } ;
struct TYPE_11__ {int dst; int src; } ;
struct TYPE_12__ {TYPE_4__ ct_orig; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_8__ {int dst; int src; } ;
struct TYPE_9__ {TYPE_1__ ct_orig; } ;
struct sw_flow_key {scalar_t__ ct_orig_proto; TYPE_7__ ct; TYPE_5__ ipv6; TYPE_3__ eth; TYPE_2__ ipv4; int ct_zone; int ct_state; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_ct_tuple_ipv4 {scalar_t__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef int orig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct ovs_key_ct_tuple_ipv6*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;

int FUNC_6(const struct sw_flow_key *VAR_12,
     const struct sw_flow_key *VAR_13, struct sk_buff *VAR_14)
{
 if (FUNC_5(VAR_14, VAR_10, VAR_13->ct_state))
  return -VAR_3;

 if (FUNC_1(VAR_2) &&
     FUNC_4(VAR_14, VAR_11, VAR_13->ct_zone))
  return -VAR_3;

 if (FUNC_1(VAR_1) &&
     FUNC_5(VAR_14, VAR_7, VAR_13->ct.mark))
  return -VAR_3;

 if (FUNC_1(VAR_0) &&
     FUNC_3(VAR_14, VAR_6, sizeof(VAR_13->ct.labels),
      &VAR_13->ct.labels))
  return -VAR_3;

 if (VAR_12->ct_orig_proto) {
  if (VAR_12->eth.type == FUNC_2(VAR_4)) {
   struct ovs_key_ct_tuple_ipv4 VAR_15 = {
    VAR_13->ipv4.ct_orig.src,
    VAR_13->ipv4.ct_orig.dst,
    VAR_13->ct.orig_tp.src,
    VAR_13->ct.orig_tp.dst,
    VAR_13->ct_orig_proto,
   };
   if (FUNC_3(VAR_14, VAR_8,
        sizeof(VAR_15), &VAR_15))
    return -VAR_3;
  } else if (VAR_12->eth.type == FUNC_2(VAR_5)) {
   struct ovs_key_ct_tuple_ipv6 VAR_16 = {
    FUNC_0(VAR_13->ipv6.ct_orig.src),
    FUNC_0(VAR_13->ipv6.ct_orig.dst),
    VAR_13->ct.orig_tp.src,
    VAR_13->ct.orig_tp.dst,
    VAR_13->ct_orig_proto,
   };
   if (FUNC_3(VAR_14, VAR_9,
        sizeof(VAR_16), &VAR_16))
    return -VAR_3;
  }
 }

 return 0;
}
