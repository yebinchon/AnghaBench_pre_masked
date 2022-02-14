
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_11 ;
 int FUNC_1 (char const*,int ,int *,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ) ;
 char* FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,char const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,size_t,int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct nlattr const* const*) ;
 scalar_t__ FUNC_13 (struct nlattr const* const*) ;
 struct nlmsghdr* FUNC_14 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net *VAR_12, struct sock *VAR_13, struct sk_buff *VAR_14,
         const struct nlmsghdr *VAR_15,
         const struct nlattr * const VAR_16[],
         struct netlink_ext_ack *VAR_17)
{
 struct sk_buff *VAR_18;
 struct nlmsghdr *VAR_19;
 u8 VAR_20, VAR_21, VAR_22;
 const char *VAR_23;
 int VAR_24 = 0;

 if (FUNC_15(FUNC_13(VAR_16) ||
       !VAR_16[VAR_7] ||
       !VAR_16[VAR_3]))
  return -VAR_9;

 VAR_20 = FUNC_5(VAR_16[VAR_3]);
 VAR_23 = FUNC_4(VAR_16[VAR_7]);
 VAR_24 = FUNC_1(VAR_23, VAR_20, &VAR_21, &VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_18 = FUNC_10(VAR_11, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_19 = FUNC_14(VAR_18, FUNC_0(VAR_14).portid, VAR_15->nlmsg_seq, 0,
    VAR_8);
 if (!VAR_19)
  goto nlmsg_failure;
 if (FUNC_7(VAR_18, VAR_4, FUNC_12(VAR_16)) ||
     FUNC_6(VAR_18, VAR_7, VAR_23) ||
     FUNC_7(VAR_18, VAR_3, VAR_20) ||
     FUNC_7(VAR_18, VAR_5, VAR_22) ||
     FUNC_7(VAR_18, VAR_6, VAR_21))
  goto nla_put_failure;
 FUNC_9(VAR_18, VAR_19);

 FUNC_11("Send TYPE, nlmsg_len: %u\n", VAR_19->nlmsg_len);
 VAR_24 = FUNC_3(VAR_13, VAR_18, FUNC_0(VAR_14).portid, VAR_10);
 if (VAR_24 < 0)
  return VAR_24;

 return 0;

nla_put_failure:
 FUNC_8(VAR_18, VAR_19);
nlmsg_failure:
 FUNC_2(VAR_18);
 return -VAR_0;
}
