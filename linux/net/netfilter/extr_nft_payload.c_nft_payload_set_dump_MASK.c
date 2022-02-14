
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_payload_set {int csum_flags; int csum_offset; int csum_type; int len; int offset; int base; int sreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_payload_set* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7, const struct nft_expr *VAR_8)
{
 const struct nft_payload_set *VAR_9 = FUNC_2(VAR_8);

 if (FUNC_1(VAR_7, VAR_6, VAR_9->sreg) ||
     FUNC_3(VAR_7, VAR_0, FUNC_0(VAR_9->base)) ||
     FUNC_3(VAR_7, VAR_5, FUNC_0(VAR_9->offset)) ||
     FUNC_3(VAR_7, VAR_4, FUNC_0(VAR_9->len)) ||
     FUNC_3(VAR_7, VAR_3, FUNC_0(VAR_9->csum_type)) ||
     FUNC_3(VAR_7, VAR_2,
    FUNC_0(VAR_9->csum_offset)) ||
     FUNC_3(VAR_7, VAR_1, FUNC_0(VAR_9->csum_flags)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
