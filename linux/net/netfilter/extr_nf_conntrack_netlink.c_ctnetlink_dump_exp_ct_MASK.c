
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {struct nf_conn* data; int done; int dump; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr const* const*,struct nf_conntrack_tuple*,int ,int ,int *) ;
 int FUNC_1 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_4 (struct nf_conn*) ;
 struct nf_conn* FUNC_5 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_6 (struct nf_conn*) ;
 struct nfgenmsg* FUNC_7 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_5, struct sock *VAR_6,
     struct sk_buff *VAR_7,
     const struct nlmsghdr *VAR_8,
     const struct nlattr * const VAR_9[],
     struct netlink_ext_ack *VAR_10)
{
 int VAR_11;
 struct nfgenmsg *VAR_12 = FUNC_7(VAR_8);
 u_int8_t VAR_13 = VAR_12->nfgen_family;
 struct nf_conntrack_tuple VAR_14;
 struct nf_conntrack_tuple_hash *VAR_15;
 struct nf_conn *VAR_16;
 struct nf_conntrack_zone VAR_17;
 struct netlink_dump_control VAR_18 = {
  .dump = VAR_3,
  .done = VAR_4,
 };

 VAR_11 = FUNC_0(VAR_9, &VAR_14, VAR_0,
        VAR_13, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_9[VAR_1], &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_15 = FUNC_3(VAR_5, &VAR_17, &VAR_14);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = FUNC_5(VAR_15);

 if (!FUNC_6(VAR_16)) {
  FUNC_4(VAR_16);
  return 0;
 }

 VAR_18.data = VAR_16;

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_18);
 FUNC_4(VAR_16);

 return VAR_11;
}
