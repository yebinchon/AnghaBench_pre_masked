
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {void* data; int done; int dump; int start; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,struct nf_conn*) ;
 int FUNC_3 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,struct nf_conntrack_zone*) ;
 int FUNC_4 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 int VAR_14 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_8 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_9 (struct nf_conn*) ;
 struct nf_conn* FUNC_10 (struct nf_conntrack_tuple_hash*) ;
 struct nfgenmsg* FUNC_11 (struct nlmsghdr const*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct net *VAR_15, struct sock *VAR_16,
       struct sk_buff *VAR_17,
       const struct nlmsghdr *VAR_18,
       const struct nlattr * const VAR_19[],
       struct netlink_ext_ack *VAR_20)
{
 struct nf_conntrack_tuple_hash *VAR_21;
 struct nf_conntrack_tuple VAR_22;
 struct nf_conn *VAR_23;
 struct sk_buff *VAR_24 = ((void*)0);
 struct nfgenmsg *VAR_25 = FUNC_11(VAR_18);
 u_int8_t VAR_26 = VAR_25->nfgen_family;
 struct nf_conntrack_zone VAR_27;
 int VAR_28;

 if (VAR_18->nlmsg_flags & VAR_11) {
  struct netlink_dump_control VAR_29 = {
   .start = VAR_14,
   .dump = VAR_13,
   .done = VAR_12,
   .data = (void *)VAR_19,
  };

  return FUNC_6(VAR_16, VAR_17, VAR_18, &VAR_29);
 }

 VAR_28 = FUNC_4(VAR_19[VAR_2], &VAR_27);
 if (VAR_28 < 0)
  return VAR_28;

 if (VAR_19[VAR_0])
  VAR_28 = FUNC_3(VAR_19, &VAR_22, VAR_0,
         VAR_26, &VAR_27);
 else if (VAR_19[VAR_1])
  VAR_28 = FUNC_3(VAR_19, &VAR_22, VAR_1,
         VAR_26, &VAR_27);
 else
  return -VAR_4;

 if (VAR_28 < 0)
  return VAR_28;

 VAR_21 = FUNC_8(VAR_15, &VAR_27, &VAR_22);
 if (!VAR_21)
  return -VAR_6;

 VAR_23 = FUNC_10(VAR_21);

 VAR_28 = -VAR_7;
 VAR_24 = FUNC_12(VAR_10, VAR_8);
 if (VAR_24 == ((void*)0)) {
  FUNC_9(VAR_23);
  return -VAR_7;
 }

 FUNC_13();
 VAR_28 = FUNC_2(VAR_24, FUNC_0(VAR_17).portid, VAR_18->nlmsg_seq,
      FUNC_1(VAR_18->nlmsg_type), VAR_23);
 FUNC_14();
 FUNC_9(VAR_23);
 if (VAR_28 <= 0)
  goto free;

 VAR_28 = FUNC_7(VAR_16, VAR_24, FUNC_0(VAR_17).portid, VAR_9);
 if (VAR_28 < 0)
  goto out;

 return 0;

free:
 FUNC_5(VAR_24);
out:

 return VAR_28 == -VAR_3 ? -VAR_5 : VAR_28;
}
