
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nft_objref_map {TYPE_1__* set; int sreg; } ;
struct nft_expr {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 struct nft_objref_map* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, const struct nft_expr *VAR_3)
{
 const struct nft_objref_map *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_2, VAR_1, VAR_4->sreg) ||
     FUNC_2(VAR_2, VAR_0, VAR_4->set->name))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
