
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_set {int flags; int ktype; int klen; int dtype; int dlen; int objtype; int gc_int; scalar_t__ policy; int size; int udata; int udlen; scalar_t__ timeout; int handle; int name; } ;
struct nft_ctx {TYPE_3__* table; TYPE_2__* net; int family; int seq; int portid; } ;
struct nfgenmsg {int res_id; int version; int nfgen_family; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int base_seq; } ;
struct TYPE_5__ {TYPE_1__ nft; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_14 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_21, const struct nft_ctx *VAR_22,
         const struct nft_set *VAR_23, u16 VAR_24, u16 VAR_25)
{
 struct nfgenmsg *VAR_26;
 struct nlmsghdr *VAR_27;
 struct nlattr *VAR_28;
 u32 VAR_29 = VAR_22->portid;
 u32 VAR_30 = VAR_22->seq;

 VAR_24 = FUNC_4(VAR_1, VAR_24);
 VAR_27 = FUNC_13(VAR_21, VAR_29, VAR_30, VAR_24, sizeof(struct nfgenmsg),
   VAR_25);
 if (VAR_27 == ((void*)0))
  goto nla_put_failure;

 VAR_26 = FUNC_11(VAR_27);
 VAR_26->nfgen_family = VAR_22->family;
 VAR_26->version = VAR_0;
 VAR_26->res_id = FUNC_2(VAR_22->net->nft.base_seq & 0xffff);

 if (FUNC_10(VAR_21, VAR_15, VAR_22->table->name))
  goto nla_put_failure;
 if (FUNC_10(VAR_21, VAR_11, VAR_23->name))
  goto nla_put_failure;
 if (FUNC_9(VAR_21, VAR_8, FUNC_0(VAR_23->handle),
    VAR_13))
  goto nla_put_failure;
 if (VAR_23->flags != 0)
  if (FUNC_8(VAR_21, VAR_6, FUNC_1(VAR_23->flags)))
   goto nla_put_failure;

 if (FUNC_8(VAR_21, VAR_10, FUNC_1(VAR_23->ktype)))
  goto nla_put_failure;
 if (FUNC_8(VAR_21, VAR_9, FUNC_1(VAR_23->klen)))
  goto nla_put_failure;
 if (VAR_23->flags & VAR_18) {
  if (FUNC_8(VAR_21, VAR_3, FUNC_1(VAR_23->dtype)))
   goto nla_put_failure;
  if (FUNC_8(VAR_21, VAR_2, FUNC_1(VAR_23->dlen)))
   goto nla_put_failure;
 }
 if (VAR_23->flags & VAR_19 &&
     FUNC_8(VAR_21, VAR_12, FUNC_1(VAR_23->objtype)))
  goto nla_put_failure;

 if (VAR_23->timeout &&
     FUNC_9(VAR_21, VAR_16,
    FUNC_3(VAR_23->timeout),
    VAR_13))
  goto nla_put_failure;
 if (VAR_23->gc_int &&
     FUNC_8(VAR_21, VAR_7, FUNC_1(VAR_23->gc_int)))
  goto nla_put_failure;

 if (VAR_23->policy != VAR_20) {
  if (FUNC_8(VAR_21, VAR_14, FUNC_1(VAR_23->policy)))
   goto nla_put_failure;
 }

 if (FUNC_7(VAR_21, VAR_17, VAR_23->udlen, VAR_23->udata))
  goto nla_put_failure;

 VAR_28 = FUNC_6(VAR_21, VAR_4);
 if (VAR_28 == ((void*)0))
  goto nla_put_failure;
 if (VAR_23->size &&
     FUNC_8(VAR_21, VAR_5, FUNC_1(VAR_23->size)))
  goto nla_put_failure;
 FUNC_5(VAR_21, VAR_28);

 FUNC_12(VAR_21, VAR_27);
 return 0;

nla_put_failure:
 FUNC_14(VAR_21, VAR_27);
 return -1;
}
