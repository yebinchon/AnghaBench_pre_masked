
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_binding {int list; } ;
struct nft_set {int list; int bindings; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nft_ctx const*,struct nft_set*,int ,int ) ;
 scalar_t__ FUNC_3 (struct nft_set*) ;

__attribute__((used)) static void FUNC_4(const struct nft_ctx *VAR_2, struct nft_set *VAR_3,
     struct nft_set_binding *VAR_4, bool VAR_5)
{
 FUNC_0(&VAR_4->list);

 if (FUNC_1(&VAR_3->bindings) && FUNC_3(VAR_3)) {
  FUNC_0(&VAR_3->list);
  if (VAR_5)
   FUNC_2(VAR_2, VAR_3, VAR_1,
          VAR_0);
 }
}
