
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nft_flow_offload {TYPE_1__* flowtable; } ;
struct nft_expr {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct nft_flow_offload* FUNC_0 (struct nft_expr const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, const struct nft_expr *VAR_2)
{
 struct nft_flow_offload *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_1, VAR_0, VAR_3->flowtable->name))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
