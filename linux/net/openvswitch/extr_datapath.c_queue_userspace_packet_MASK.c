
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; scalar_t__ data; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlmsghdr {unsigned int nlmsg_len; } ;
struct nlattr {scalar_t__ nla_len; } ;
struct dp_upcall_info {int portid; scalar_t__ mru; scalar_t__ actions_len; int actions; int egress_tun_info; scalar_t__ userdata; int cmd; } ;
struct datapath {int user_features; } ;
struct TYPE_2__ {int acts_origlen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*) ;
 int VAR_17 ;
 struct sk_buff* FUNC_3 (size_t,int ) ;
 struct ovs_header* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 int FUNC_6 (struct datapath*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sk_buff*,struct nlattr*) ;
 int FUNC_12 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,unsigned int) ;
 struct nlattr* FUNC_16 (struct sk_buff*,int ,int ) ;
 int FUNC_17 (struct datapath*) ;
 int FUNC_18 (int ,scalar_t__,struct sk_buff*) ;
 int FUNC_19 (struct sw_flow_key const*,struct sw_flow_key const*,int ,int,struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (struct datapath*,struct sk_buff*) ;
 struct sk_buff* FUNC_22 (struct sk_buff*,int ) ;
 int FUNC_23 (struct sk_buff*,int ) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,struct sk_buff*,scalar_t__,unsigned int) ;
 unsigned int FUNC_27 (struct sk_buff*) ;
 size_t FUNC_28 (struct dp_upcall_info const*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_29(struct datapath *VAR_18, struct sk_buff *VAR_19,
      const struct sw_flow_key *VAR_20,
      const struct dp_upcall_info *VAR_21,
      uint32_t VAR_22)
{
 struct ovs_header *VAR_23;
 struct sk_buff *VAR_24 = ((void*)0);
 struct sk_buff *VAR_25 = ((void*)0);
 struct nlattr *VAR_26;
 size_t VAR_27;
 unsigned int VAR_28;
 int VAR_29, VAR_30;

 VAR_30 = FUNC_6(VAR_18);
 if (!VAR_30)
  return -VAR_5;

 if (FUNC_25(VAR_19)) {
  VAR_24 = FUNC_22(VAR_19, VAR_7);
  if (!VAR_24)
   return -VAR_6;

  VAR_24 = FUNC_2(VAR_24);
  if (!VAR_24)
   return -VAR_6;

  VAR_19 = VAR_24;
 }

 if (FUNC_8(VAR_19->len) > VAR_16) {
  VAR_29 = -VAR_1;
  goto out;
 }


 if (VAR_19->ip_summed == VAR_0 &&
     (VAR_29 = FUNC_23(VAR_19, 0)))
  goto out;





 if (VAR_18->user_features & VAR_8)
  VAR_28 = FUNC_27(VAR_19);
 else
  VAR_28 = VAR_19->len;

 VAR_27 = FUNC_28(VAR_21, VAR_28 - VAR_22,
         FUNC_0(VAR_19)->acts_origlen);
 VAR_25 = FUNC_3(VAR_27, VAR_7);
 if (!VAR_25) {
  VAR_29 = -VAR_6;
  goto out;
 }

 VAR_23 = FUNC_4(VAR_25, 0, 0, &VAR_17,
        0, VAR_21->cmd);
 if (!VAR_23) {
  VAR_29 = -VAR_2;
  goto out;
 }
 VAR_23->dp_ifindex = VAR_30;

 VAR_29 = FUNC_19(VAR_20, VAR_20, VAR_11, 0, VAR_25);
 if (VAR_29)
  goto out;

 if (VAR_21->userdata)
  FUNC_1(VAR_25, VAR_15,
     FUNC_10(VAR_21->userdata),
     FUNC_9(VAR_21->userdata));

 if (VAR_21->egress_tun_info) {
  VAR_26 = FUNC_13(VAR_25,
         VAR_10);
  if (!VAR_26) {
   VAR_29 = -VAR_3;
   goto out;
  }
  VAR_29 = FUNC_20(VAR_25,
           VAR_21->egress_tun_info);
  if (VAR_29)
   goto out;

  FUNC_12(VAR_25, VAR_26);
 }

 if (VAR_21->actions_len) {
  VAR_26 = FUNC_13(VAR_25, VAR_9);
  if (!VAR_26) {
   VAR_29 = -VAR_3;
   goto out;
  }
  VAR_29 = FUNC_18(VAR_21->actions,
       VAR_21->actions_len,
       VAR_25);
  if (!VAR_29)
   FUNC_12(VAR_25, VAR_26);
  else
   FUNC_11(VAR_25, VAR_26);
 }


 if (VAR_21->mru) {
  if (FUNC_14(VAR_25, VAR_13,
    VAR_21->mru)) {
   VAR_29 = -VAR_4;
   goto out;
  }
  FUNC_21(VAR_18, VAR_25);
 }


 if (VAR_22 > 0) {
  if (FUNC_15(VAR_25, VAR_12,
    VAR_19->len)) {
   VAR_29 = -VAR_4;
   goto out;
  }
  FUNC_21(VAR_18, VAR_25);
 }



 if (!(VAR_26 = FUNC_16(VAR_25, VAR_14, 0))) {
  VAR_29 = -VAR_4;
  goto out;
 }
 VAR_26->nla_len = FUNC_8(VAR_19->len - VAR_22);

 VAR_29 = FUNC_26(VAR_25, VAR_19, VAR_19->len - VAR_22, VAR_28);
 if (VAR_29)
  goto out;


 FUNC_21(VAR_18, VAR_25);

 ((struct nlmsghdr *) VAR_25->data)->nlmsg_len = VAR_25->len;

 VAR_29 = FUNC_5(FUNC_17(VAR_18), VAR_25, VAR_21->portid);
 VAR_25 = ((void*)0);
out:
 if (VAR_29)
  FUNC_24(VAR_19);
 FUNC_7(VAR_25);
 FUNC_7(VAR_24);
 return VAR_29;
}
