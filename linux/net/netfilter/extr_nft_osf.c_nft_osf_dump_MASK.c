
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_osf {int dreg; int flags; int ttl; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 struct nft_osf* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, const struct nft_expr *VAR_4)
{
 const struct nft_osf *VAR_5 = FUNC_1(VAR_4);

 if (FUNC_3(VAR_3, VAR_2, VAR_5->ttl))
  goto nla_put_failure;

 if (FUNC_2(VAR_3, VAR_1, FUNC_4(VAR_5->flags)))
  goto nla_put_failure;

 if (FUNC_0(VAR_3, VAR_0, VAR_5->dreg))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
