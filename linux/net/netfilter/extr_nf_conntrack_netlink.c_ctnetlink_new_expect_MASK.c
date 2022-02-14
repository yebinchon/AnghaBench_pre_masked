
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct nf_conntrack_expect* FUNC_1 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct nf_conntrack_expect*,struct nlattr const* const*) ;
 int FUNC_3 (struct net*,struct nf_conntrack_zone*,struct nlattr const* const*,int ,int ,int ) ;
 int FUNC_4 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,int *) ;
 int FUNC_5 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 int VAR_9 ;
 struct nfgenmsg* FUNC_6 (struct nlmsghdr const*) ;
 int FUNC_7 (struct nlmsghdr const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_10, struct sock *VAR_11,
    struct sk_buff *VAR_12, const struct nlmsghdr *VAR_13,
    const struct nlattr * const VAR_14[],
    struct netlink_ext_ack *VAR_15)
{
 struct nf_conntrack_tuple VAR_16;
 struct nf_conntrack_expect *VAR_17;
 struct nfgenmsg *VAR_18 = FUNC_6(VAR_13);
 u_int8_t VAR_19 = VAR_18->nfgen_family;
 struct nf_conntrack_zone VAR_20;
 int VAR_21;

 if (!VAR_14[VAR_2]
     || !VAR_14[VAR_0]
     || !VAR_14[VAR_1])
  return -VAR_5;

 VAR_21 = FUNC_5(VAR_14[VAR_3], &VAR_20);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_21 = FUNC_4(VAR_14, &VAR_16, VAR_2,
        VAR_19, ((void*)0));
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_8(&VAR_9);
 VAR_17 = FUNC_1(VAR_10, &VAR_20, &VAR_16);
 if (!VAR_17) {
  FUNC_9(&VAR_9);
  VAR_21 = -VAR_6;
  if (VAR_13->nlmsg_flags & VAR_7) {
   VAR_21 = FUNC_3(VAR_10, &VAR_20, VAR_14, VAR_19,
            FUNC_0(VAR_12).portid,
            FUNC_7(VAR_13));
  }
  return VAR_21;
 }

 VAR_21 = -VAR_4;
 if (!(VAR_13->nlmsg_flags & VAR_8))
  VAR_21 = FUNC_2(VAR_17, VAR_14);
 FUNC_9(&VAR_9);

 return VAR_21;
}
