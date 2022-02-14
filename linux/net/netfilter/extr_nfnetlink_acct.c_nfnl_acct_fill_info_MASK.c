
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct nf_acct {scalar_t__ flags; scalar_t__ data; int refcnt; int bytes; int pkts; int name; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_12 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(struct sk_buff *VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17,
     int VAR_18, struct nf_acct *VAR_19)
{
 struct nlmsghdr *VAR_20;
 struct nfgenmsg *VAR_21;
 unsigned int VAR_22 = VAR_15 ? VAR_13 : 0;
 u64 VAR_23, VAR_24;
 u32 VAR_25;

 VAR_18 = FUNC_5(VAR_12, VAR_18);
 VAR_20 = FUNC_12(VAR_14, VAR_15, VAR_16, VAR_18, sizeof(*VAR_21), VAR_22);
 if (VAR_20 == ((void*)0))
  goto nlmsg_failure;

 VAR_21 = FUNC_10(VAR_20);
 VAR_21->nfgen_family = VAR_0;
 VAR_21->version = VAR_10;
 VAR_21->res_id = 0;

 if (FUNC_8(VAR_14, VAR_4, VAR_19->name))
  goto nla_put_failure;

 VAR_25 = VAR_19->flags;
 if (VAR_17 == VAR_11) {
  VAR_23 = FUNC_1(&VAR_19->pkts, 0);
  VAR_24 = FUNC_1(&VAR_19->bytes, 0);
  FUNC_14();
  if (VAR_19->flags & VAR_3)
   FUNC_2(VAR_5, &VAR_19->flags);
 } else {
  VAR_23 = FUNC_0(&VAR_19->pkts);
  VAR_24 = FUNC_0(&VAR_19->bytes);
 }
 if (FUNC_7(VAR_14, VAR_7, FUNC_3(VAR_23),
    VAR_6) ||
     FUNC_7(VAR_14, VAR_1, FUNC_3(VAR_24),
    VAR_6) ||
     FUNC_6(VAR_14, VAR_9, FUNC_4(FUNC_13(&VAR_19->refcnt))))
  goto nla_put_failure;
 if (VAR_19->flags & VAR_3) {
  u64 *VAR_26 = (u64 *)VAR_19->data;

  if (FUNC_6(VAR_14, VAR_2, FUNC_4(VAR_25)) ||
      FUNC_7(VAR_14, VAR_8, FUNC_3(*VAR_26),
     VAR_6))
   goto nla_put_failure;
 }
 FUNC_11(VAR_14, VAR_20);
 return VAR_14->len;

nlmsg_failure:
nla_put_failure:
 FUNC_9(VAR_14, VAR_20);
 return -1;
}
