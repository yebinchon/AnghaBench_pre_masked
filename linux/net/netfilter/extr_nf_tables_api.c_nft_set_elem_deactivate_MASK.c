
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct nft_set_elem {int priv; } ;
struct nft_set {int dtype; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct nft_set_ext* FUNC_1 (struct nft_set const*,int ) ;
 int FUNC_2 (struct nft_set_ext const*) ;
 scalar_t__ FUNC_3 (struct nft_set_ext const*,int ) ;
 TYPE_1__** FUNC_4 (struct nft_set_ext const*) ;

__attribute__((used)) static void FUNC_5(const struct net *VAR_2,
        const struct nft_set *VAR_3,
        struct nft_set_elem *VAR_4)
{
 const struct nft_set_ext *VAR_5 = FUNC_1(VAR_3, VAR_4->priv);

 if (FUNC_3(VAR_5, VAR_0))
  FUNC_0(FUNC_2(VAR_5), VAR_3->dtype);
 if (FUNC_3(VAR_5, VAR_1))
  (*FUNC_4(VAR_5))->use--;
}
