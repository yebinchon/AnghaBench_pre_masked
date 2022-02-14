
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; scalar_t__ rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_table; scalar_t__ rtm_tos; int rtm_family; } ;
struct nlmsghdr {int dummy; } ;
struct mr_table {int id; } ;
struct TYPE_2__ {int mfc_flags; } ;
struct mfc6_cache {TYPE_1__ _c; int mf6c_mcastgrp; int mf6c_origin; } ;


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
 int FUNC_0 (struct mr_table*,struct sk_buff*,TYPE_1__*,struct rtmsg*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct mr_table *VAR_11, struct sk_buff *VAR_12,
        u32 VAR_13, u32 VAR_14, struct mfc6_cache *VAR_15, int VAR_16,
        int VAR_17)
{
 struct nlmsghdr *VAR_18;
 struct rtmsg *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_6(VAR_12, VAR_13, VAR_14, VAR_16, sizeof(*VAR_19), VAR_17);
 if (!VAR_18)
  return -VAR_0;

 VAR_19 = FUNC_4(VAR_18);
 VAR_19->rtm_family = VAR_6;
 VAR_19->rtm_dst_len = 128;
 VAR_19->rtm_src_len = 128;
 VAR_19->rtm_tos = 0;
 VAR_19->rtm_table = VAR_11->id;
 if (FUNC_2(VAR_12, VAR_5, VAR_11->id))
  goto nla_put_failure;
 VAR_19->rtm_type = VAR_7;
 VAR_19->rtm_scope = VAR_10;
 if (VAR_15->_c.mfc_flags & VAR_2)
  VAR_19->rtm_protocol = VAR_9;
 else
  VAR_19->rtm_protocol = VAR_8;
 VAR_19->rtm_flags = 0;

 if (FUNC_1(VAR_12, VAR_4, &VAR_15->mf6c_origin) ||
     FUNC_1(VAR_12, VAR_3, &VAR_15->mf6c_mcastgrp))
  goto nla_put_failure;
 VAR_20 = FUNC_0(VAR_11, VAR_12, &VAR_15->_c, VAR_19);

 if (VAR_20 < 0 && VAR_20 != -VAR_1)
  goto nla_put_failure;

 FUNC_5(VAR_12, VAR_18);
 return 0;

nla_put_failure:
 FUNC_3(VAR_12, VAR_18);
 return -VAR_0;
}
