
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_lookup {int dreg; TYPE_1__* set; int sreg; scalar_t__ invert; } ;
struct nft_expr {int dummy; } ;
struct TYPE_2__ {int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_lookup* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, const struct nft_expr *VAR_7)
{
 const struct nft_lookup *VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9 = VAR_8->invert ? VAR_4 : 0;

 if (FUNC_4(VAR_6, VAR_2, VAR_8->set->name))
  goto nla_put_failure;
 if (FUNC_1(VAR_6, VAR_3, VAR_8->sreg))
  goto nla_put_failure;
 if (VAR_8->set->flags & VAR_5)
  if (FUNC_1(VAR_6, VAR_0, VAR_8->dreg))
   goto nla_put_failure;
 if (FUNC_3(VAR_6, VAR_1, FUNC_0(VAR_9)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
