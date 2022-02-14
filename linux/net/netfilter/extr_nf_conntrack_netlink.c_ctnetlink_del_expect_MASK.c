
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int timeout; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int portid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,int *) ;
 int FUNC_2 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nf_conntrack_expect* FUNC_4 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_5 (struct net*,int ,char*,int ,int ) ;
 int FUNC_6 (struct nf_conntrack_expect*) ;
 int FUNC_7 (struct nf_conntrack_expect*,int ,int ) ;
 char* FUNC_8 (struct nlattr const* const) ;
 int FUNC_9 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr const*) ;
 int FUNC_11 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_8, struct sock *VAR_9,
    struct sk_buff *VAR_10, const struct nlmsghdr *VAR_11,
    const struct nlattr * const VAR_12[],
    struct netlink_ext_ack *VAR_13)
{
 struct nf_conntrack_expect *VAR_14;
 struct nf_conntrack_tuple VAR_15;
 struct nfgenmsg *VAR_16 = FUNC_10(VAR_11);
 u_int8_t VAR_17 = VAR_16->nfgen_family;
 struct nf_conntrack_zone VAR_18;
 int VAR_19;

 if (VAR_12[VAR_2]) {

  VAR_19 = FUNC_2(VAR_12[VAR_3], &VAR_18);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_1(VAR_12, &VAR_15, VAR_2,
         VAR_17, ((void*)0));
  if (VAR_19 < 0)
   return VAR_19;


  VAR_14 = FUNC_4(VAR_8, &VAR_18, &VAR_15);
  if (!VAR_14)
   return -VAR_4;

  if (VAR_12[VAR_1]) {
   __be32 VAR_20 = FUNC_9(VAR_12[VAR_1]);
   if (FUNC_12(VAR_20) != (u32)(unsigned long)VAR_14) {
    FUNC_6(VAR_14);
    return -VAR_4;
   }
  }


  FUNC_13(&VAR_7);
  if (FUNC_3(&VAR_14->timeout)) {
   FUNC_7(VAR_14, FUNC_0(VAR_10).portid,
         FUNC_11(VAR_11));
   FUNC_6(VAR_14);
  }
  FUNC_14(&VAR_7);


  FUNC_6(VAR_14);
 } else if (VAR_12[VAR_0]) {
  char *VAR_21 = FUNC_8(VAR_12[VAR_0]);

  FUNC_5(VAR_8, VAR_6, VAR_21,
      FUNC_0(VAR_10).portid,
      FUNC_11(VAR_11));
 } else {

  FUNC_5(VAR_8, VAR_5, ((void*)0),
      FUNC_0(VAR_10).portid,
      FUNC_11(VAR_11));
 }

 return 0;
}
