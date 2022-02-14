
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conn {int status; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct nf_conn*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*,struct nf_conn*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,struct nf_conntrack_zone const*,int ) ;
 int FUNC_16 (struct nf_conn*) ;
 int FUNC_17 (struct nf_conn*,int ) ;
 struct nf_conntrack_zone* FUNC_18 (struct nf_conn*) ;
 unsigned int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_21 (struct sk_buff*,int ) ;
 int FUNC_22 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_23 (struct nlmsghdr*) ;
 int FUNC_24 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_25 (struct sk_buff*,scalar_t__,scalar_t__,unsigned int,int,unsigned int) ;
 int FUNC_26 (int ,int *) ;

__attribute__((used)) static int
FUNC_27(struct sk_buff *VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17,
      struct nf_conn *VAR_18)
{
 const struct nf_conntrack_zone *VAR_19;
 struct nlmsghdr *VAR_20;
 struct nfgenmsg *VAR_21;
 struct nlattr *VAR_22;
 unsigned int VAR_23 = VAR_15 ? VAR_13 : 0, VAR_24;

 VAR_24 = FUNC_19(VAR_9, VAR_4);
 VAR_20 = FUNC_25(VAR_14, VAR_15, VAR_16, VAR_24, sizeof(*VAR_21), VAR_23);
 if (VAR_20 == ((void*)0))
  goto nlmsg_failure;

 VAR_21 = FUNC_23(VAR_20);
 VAR_21->nfgen_family = FUNC_16(VAR_18);
 VAR_21->version = VAR_8;
 VAR_21->res_id = 0;

 VAR_19 = FUNC_18(VAR_18);

 VAR_22 = FUNC_21(VAR_14, VAR_0);
 if (!VAR_22)
  goto nla_put_failure;
 if (FUNC_13(VAR_14, FUNC_17(VAR_18, VAR_6)) < 0)
  goto nla_put_failure;
 if (FUNC_15(VAR_14, VAR_2, VAR_19,
       VAR_11) < 0)
  goto nla_put_failure;
 FUNC_20(VAR_14, VAR_22);

 VAR_22 = FUNC_21(VAR_14, VAR_1);
 if (!VAR_22)
  goto nla_put_failure;
 if (FUNC_13(VAR_14, FUNC_17(VAR_18, VAR_7)) < 0)
  goto nla_put_failure;
 if (FUNC_15(VAR_14, VAR_2, VAR_19,
       VAR_12) < 0)
  goto nla_put_failure;
 FUNC_20(VAR_14, VAR_22);

 if (FUNC_15(VAR_14, VAR_3, VAR_19,
       VAR_10) < 0)
  goto nla_put_failure;

 if (FUNC_10(VAR_14, VAR_18) < 0 ||
     FUNC_0(VAR_14, VAR_18, VAR_17) < 0 ||
     FUNC_12(VAR_14, VAR_18) < 0 ||
     FUNC_3(VAR_14, VAR_18) < 0 ||
     FUNC_6(VAR_14, VAR_18) < 0 ||
     FUNC_9(VAR_14, VAR_18) < 0 ||
     FUNC_5(VAR_14, VAR_18) < 0 ||
     FUNC_4(VAR_14, VAR_18) < 0 ||
     FUNC_14(VAR_14, VAR_18) < 0 ||
     FUNC_7(VAR_14, VAR_18) < 0 ||
     FUNC_1(VAR_14, VAR_18) < 0 ||
     FUNC_2(VAR_14, VAR_18) < 0)
  goto nla_put_failure;

 if (!FUNC_26(VAR_5, &VAR_18->status) &&
     (FUNC_11(VAR_14, VAR_18) < 0 ||
      FUNC_8(VAR_14, VAR_18) < 0))
  goto nla_put_failure;

 FUNC_24(VAR_14, VAR_20);
 return VAR_14->len;

nlmsg_failure:
nla_put_failure:
 FUNC_22(VAR_14, VAR_20);
 return -1;
}
