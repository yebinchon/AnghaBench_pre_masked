
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_tproxy {scalar_t__ sreg_port; scalar_t__ sreg_addr; int family; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 struct nft_tproxy* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
      const struct nft_expr *VAR_4)
{
 const struct nft_tproxy *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_3(VAR_3, VAR_0, FUNC_0(VAR_5->family)))
  return -1;

 if (VAR_5->sreg_addr &&
     FUNC_1(VAR_3, VAR_1, VAR_5->sreg_addr))
  return -1;

 if (VAR_5->sreg_port &&
     FUNC_1(VAR_3, VAR_2, VAR_5->sreg_port))
   return -1;

 return 0;
}
