
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_ctx {int family; int net; } ;
struct nft_connlimit {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
         struct nft_connlimit *VAR_1)
{
 FUNC_1(VAR_0->net, VAR_0->family);
 FUNC_0(&VAR_1->list);
}
