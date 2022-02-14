
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_userdata {int data; scalar_t__ len; } ;
struct nft_set_ext {int dummy; } ;
struct nft_set_elem {int priv; } ;
struct nft_set {scalar_t__ dtype; int dlen; int klen; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ key; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct nft_set_ext* FUNC_5 (struct nft_set const*,int ) ;
 int FUNC_6 (struct nft_set_ext const*) ;
 scalar_t__ FUNC_7 (struct nft_set_ext const*,int ) ;
 scalar_t__* FUNC_8 (struct nft_set_ext const*) ;
 int FUNC_9 (struct nft_set_ext const*) ;
 int * FUNC_10 (struct nft_set_ext const*) ;
 int FUNC_11 (struct nft_set_ext const*) ;
 TYPE_2__** FUNC_12 (struct nft_set_ext const*) ;
 scalar_t__* FUNC_13 (struct nft_set_ext const*) ;
 struct nft_userdata* FUNC_14 (struct nft_set_ext const*) ;
 int FUNC_15 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_16 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_20 (struct sk_buff*,int ,int ) ;
 int FUNC_21 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_20,
      const struct nft_set *VAR_21,
      const struct nft_set_elem *VAR_22)
{
 const struct nft_set_ext *VAR_23 = FUNC_5(VAR_21, VAR_22->priv);
 unsigned char *VAR_24 = FUNC_22(VAR_20);
 struct nlattr *VAR_25;

 VAR_25 = FUNC_16(VAR_20, VAR_1);
 if (VAR_25 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_20, VAR_6, FUNC_11(VAR_23),
     VAR_11, VAR_21->klen) < 0)
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_13) &&
     FUNC_3(VAR_20, VAR_2, FUNC_6(VAR_23),
     VAR_21->dtype == VAR_12 ? VAR_12 : VAR_11,
     VAR_21->dlen) < 0)
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_15) &&
     FUNC_4(VAR_20, VAR_4, FUNC_9(VAR_23)) < 0)
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_17) &&
     FUNC_20(VAR_20, VAR_7,
      (*FUNC_12(VAR_23))->key.name) < 0)
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_16) &&
     FUNC_18(VAR_20, VAR_5,
           FUNC_1(*FUNC_10(VAR_23))))
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_18) &&
     FUNC_19(VAR_20, VAR_9,
    FUNC_2(*FUNC_13(VAR_23)),
    VAR_8))
  goto nla_put_failure;

 if (FUNC_7(VAR_23, VAR_14)) {
  u64 VAR_26, VAR_27 = FUNC_0();

  VAR_26 = *FUNC_8(VAR_23);
  if (FUNC_23(VAR_27, VAR_26))
   VAR_26 -= VAR_27;
  else
   VAR_26 = 0;

  if (FUNC_19(VAR_20, VAR_3,
     FUNC_2(VAR_26),
     VAR_8))
   goto nla_put_failure;
 }

 if (FUNC_7(VAR_23, VAR_19)) {
  struct nft_userdata *VAR_28;

  VAR_28 = FUNC_14(VAR_23);
  if (FUNC_17(VAR_20, VAR_10,
       VAR_28->len + 1, VAR_28->data))
   goto nla_put_failure;
 }

 FUNC_15(VAR_20, VAR_25);
 return 0;

nla_put_failure:
 FUNC_21(VAR_20, VAR_24);
 return -VAR_0;
}
