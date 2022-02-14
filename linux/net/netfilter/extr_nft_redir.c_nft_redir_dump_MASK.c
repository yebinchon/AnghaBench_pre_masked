
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_redir {scalar_t__ flags; scalar_t__ sreg_proto_max; scalar_t__ sreg_proto_min; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 struct nft_redir* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, const struct nft_expr *VAR_4)
{
 const struct nft_redir *VAR_5 = FUNC_2(VAR_4);

 if (VAR_5->sreg_proto_min) {
  if (FUNC_1(VAR_3, VAR_2,
          VAR_5->sreg_proto_min))
   goto nla_put_failure;
  if (FUNC_1(VAR_3, VAR_1,
          VAR_5->sreg_proto_max))
   goto nla_put_failure;
 }

 if (VAR_5->flags != 0 &&
     FUNC_3(VAR_3, VAR_0, FUNC_0(VAR_5->flags)))
   goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
