
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct TYPE_3__ {scalar_t__ protonum; } ;
struct nf_conntrack_tuple {TYPE_1__ dst; } ;
struct nf_conn {int status; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_events { ____Placeholder_ip_conntrack_events } ip_conntrack_events ;
struct TYPE_4__ {int portid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct nf_conn*,struct nlattr const* const*) ;
 int FUNC_4 (struct nf_conn*,struct nlattr const* const*) ;
 struct nf_conn* FUNC_5 (struct net*,struct nf_conntrack_zone*,struct nlattr const* const*,struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,int ) ;
 int FUNC_6 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,struct nf_conntrack_zone*) ;
 int FUNC_7 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 int FUNC_8 (int,struct nf_conn*,int ,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_9 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_10 (struct nf_conn*) ;
 struct nf_conn* FUNC_11 (struct nf_conntrack_tuple_hash*) ;
 struct nfgenmsg* FUNC_12 (struct nlmsghdr const*) ;
 int FUNC_13 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_20, struct sock *VAR_21,
       struct sk_buff *VAR_22,
       const struct nlmsghdr *VAR_23,
       const struct nlattr * const VAR_24[],
       struct netlink_ext_ack *VAR_25)
{
 struct nf_conntrack_tuple VAR_26, VAR_27;
 struct nf_conntrack_tuple_hash *VAR_28 = ((void*)0);
 struct nfgenmsg *VAR_29 = FUNC_12(VAR_23);
 struct nf_conn *VAR_30;
 u_int8_t VAR_31 = VAR_29->nfgen_family;
 struct nf_conntrack_zone VAR_32;
 int VAR_33;

 VAR_33 = FUNC_7(VAR_24[VAR_3], &VAR_32);
 if (VAR_33 < 0)
  return VAR_33;

 if (VAR_24[VAR_1]) {
  VAR_33 = FUNC_6(VAR_24, &VAR_26, VAR_1,
         VAR_31, &VAR_32);
  if (VAR_33 < 0)
   return VAR_33;
 }

 if (VAR_24[VAR_2]) {
  VAR_33 = FUNC_6(VAR_24, &VAR_27, VAR_2,
         VAR_31, &VAR_32);
  if (VAR_33 < 0)
   return VAR_33;
 }

 if (VAR_24[VAR_1])
  VAR_28 = FUNC_9(VAR_20, &VAR_32, &VAR_26);
 else if (VAR_24[VAR_2])
  VAR_28 = FUNC_9(VAR_20, &VAR_32, &VAR_27);

 if (VAR_28 == ((void*)0)) {
  VAR_33 = -VAR_6;
  if (VAR_23->nlmsg_flags & VAR_18) {
   enum ip_conntrack_events VAR_34;

   if (!VAR_24[VAR_1] || !VAR_24[VAR_2])
    return -VAR_5;
   if (VAR_26.dst.protonum != VAR_27.dst.protonum)
    return -VAR_5;

   VAR_30 = FUNC_5(VAR_20, &VAR_32, VAR_24, &VAR_26,
       &VAR_27, VAR_31);
   if (FUNC_0(VAR_30))
    return FUNC_2(VAR_30);

   VAR_33 = 0;
   if (FUNC_14(VAR_17, &VAR_30->status))
    VAR_34 = 1 << VAR_13;
   else
    VAR_34 = 1 << VAR_11;

   if (VAR_24[VAR_0] &&
       FUNC_3(VAR_30, VAR_24) == 0)
    VAR_34 |= (1 << VAR_9);

   FUNC_8((1 << VAR_14) |
            (1 << VAR_7) |
            (1 << VAR_8) |
            (1 << VAR_12) |
            (1 << VAR_15) |
            (1 << VAR_10) |
            (1 << VAR_16) |
            VAR_34,
            VAR_30, FUNC_1(VAR_22).portid,
            FUNC_13(VAR_23));
   FUNC_10(VAR_30);
  }

  return VAR_33;
 }


 VAR_33 = -VAR_4;
 VAR_30 = FUNC_11(VAR_28);
 if (!(VAR_23->nlmsg_flags & VAR_19)) {
  VAR_33 = FUNC_4(VAR_30, VAR_24);
  if (VAR_33 == 0) {
   FUNC_8((1 << VAR_14) |
            (1 << VAR_7) |
            (1 << VAR_8) |
            (1 << VAR_9) |
            (1 << VAR_12) |
            (1 << VAR_15) |
            (1 << VAR_10) |
            (1 << VAR_16),
            VAR_30, FUNC_1(VAR_22).portid,
            FUNC_13(VAR_23));
  }
 }

 FUNC_10(VAR_30);
 return VAR_33;
}
