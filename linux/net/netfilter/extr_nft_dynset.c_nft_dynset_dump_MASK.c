
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dynset {scalar_t__ expr; int timeout; TYPE_1__* set; int op; int sreg_data; int sreg_key; scalar_t__ invert; } ;
struct TYPE_2__ {int flags; int name; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 struct nft_dynset* FUNC_5 (struct nft_expr const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_10, const struct nft_expr *VAR_11)
{
 const struct nft_dynset *VAR_12 = FUNC_5(VAR_11);
 u32 VAR_13 = VAR_12->invert ? VAR_8 : 0;

 if (FUNC_3(VAR_10, VAR_6, VAR_12->sreg_key))
  goto nla_put_failure;
 if (VAR_12->set->flags & VAR_9 &&
     FUNC_3(VAR_10, VAR_5, VAR_12->sreg_data))
  goto nla_put_failure;
 if (FUNC_6(VAR_10, VAR_2, FUNC_1(VAR_12->op)))
  goto nla_put_failure;
 if (FUNC_8(VAR_10, VAR_4, VAR_12->set->name))
  goto nla_put_failure;
 if (FUNC_7(VAR_10, VAR_7,
    FUNC_0(FUNC_2(VAR_12->timeout)),
    VAR_3))
  goto nla_put_failure;
 if (VAR_12->expr && FUNC_4(VAR_10, VAR_0, VAR_12->expr))
  goto nla_put_failure;
 if (FUNC_6(VAR_10, VAR_1, FUNC_1(VAR_13)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
