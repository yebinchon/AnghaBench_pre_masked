
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_nat {int type; scalar_t__ family; scalar_t__ flags; scalar_t__ sreg_proto_max; scalar_t__ sreg_proto_min; scalar_t__ sreg_addr_max; scalar_t__ sreg_addr_min; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 struct nft_nat* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_9, const struct nft_expr *VAR_10)
{
 const struct nft_nat *VAR_11 = FUNC_2(VAR_10);

 switch (VAR_11->type) {
 case 128:
  if (FUNC_3(VAR_9, VAR_6, FUNC_0(VAR_8)))
   goto nla_put_failure;
  break;
 case 129:
  if (FUNC_3(VAR_9, VAR_6, FUNC_0(VAR_7)))
   goto nla_put_failure;
  break;
 }

 if (FUNC_3(VAR_9, VAR_0, FUNC_0(VAR_11->family)))
  goto nla_put_failure;

 if (VAR_11->sreg_addr_min) {
  if (FUNC_1(VAR_9, VAR_3,
          VAR_11->sreg_addr_min) ||
      FUNC_1(VAR_9, VAR_2,
          VAR_11->sreg_addr_max))
   goto nla_put_failure;
 }

 if (VAR_11->sreg_proto_min) {
  if (FUNC_1(VAR_9, VAR_5,
          VAR_11->sreg_proto_min) ||
      FUNC_1(VAR_9, VAR_4,
          VAR_11->sreg_proto_max))
   goto nla_put_failure;
 }

 if (VAR_11->flags != 0) {
  if (FUNC_3(VAR_9, VAR_1, FUNC_0(VAR_11->flags)))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -1;
}
