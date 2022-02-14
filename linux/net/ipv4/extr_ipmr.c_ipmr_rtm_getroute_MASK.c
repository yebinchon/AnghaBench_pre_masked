
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct mr_table {int maxvif; } ;
struct mfc_cache {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mfc_cache* FUNC_1 (struct mr_table*,int ,int ) ;
 int FUNC_2 (struct mr_table*,struct sk_buff*,int ,int ,struct mfc_cache*,int ,int ) ;
 struct mr_table* FUNC_3 (struct net*,int) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10,
        struct netlink_ext_ack *VAR_11)
{
 struct net *VAR_12 = FUNC_13(VAR_9->sk);
 struct nlattr *VAR_13[VAR_4 + 1];
 struct sk_buff *VAR_14 = ((void*)0);
 struct mfc_cache *VAR_15;
 struct mr_table *VAR_16;
 __be32 VAR_17, VAR_18;
 u32 VAR_19;
 int VAR_20;

 VAR_20 = FUNC_4(VAR_9, VAR_10, VAR_13, VAR_11);
 if (VAR_20 < 0)
  goto errout;

 VAR_17 = VAR_13[VAR_5] ? FUNC_7(VAR_13[VAR_5]) : 0;
 VAR_18 = VAR_13[VAR_3] ? FUNC_7(VAR_13[VAR_3]) : 0;
 VAR_19 = VAR_13[VAR_6] ? FUNC_8(VAR_13[VAR_6]) : 0;

 VAR_16 = FUNC_3(VAR_12, VAR_19 ? VAR_19 : VAR_8);
 if (!VAR_16) {
  VAR_20 = -VAR_1;
  goto errout_free;
 }


 FUNC_10();
 VAR_15 = FUNC_1(VAR_16, VAR_17, VAR_18);
 FUNC_11();
 if (!VAR_15) {
  VAR_20 = -VAR_1;
  goto errout_free;
 }

 VAR_14 = FUNC_9(FUNC_6(0, VAR_16->maxvif), VAR_2);
 if (!VAR_14) {
  VAR_20 = -VAR_0;
  goto errout_free;
 }

 VAR_20 = FUNC_2(VAR_16, VAR_14, FUNC_0(VAR_9).portid,
          VAR_10->nlmsg_seq, VAR_15,
          VAR_7, 0);
 if (VAR_20 < 0)
  goto errout_free;

 VAR_20 = FUNC_12(VAR_14, VAR_12, FUNC_0(VAR_9).portid);

errout:
 return VAR_20;

errout_free:
 FUNC_5(VAR_14);
 goto errout;
}
