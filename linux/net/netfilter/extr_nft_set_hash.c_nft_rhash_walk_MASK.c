
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_iter {int dummy; } ;
struct nft_set_iter {scalar_t__ count; scalar_t__ skip; int err; int (* fn ) (struct nft_ctx const*,struct nft_set*,struct nft_set_iter*,struct nft_set_elem*) ;int genmask; } ;
struct nft_set_elem {struct nft_rhash_elem* priv; } ;
struct nft_set {int dummy; } ;
struct nft_rhash_elem {int ext; } ;
struct nft_rhash {int ht; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nft_rhash_elem*) ;
 int FUNC_1 (struct nft_rhash_elem*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct nft_rhash* FUNC_4 (struct nft_set*) ;
 int FUNC_5 (int *,struct rhashtable_iter*) ;
 int FUNC_6 (struct rhashtable_iter*) ;
 struct nft_rhash_elem* FUNC_7 (struct rhashtable_iter*) ;
 int FUNC_8 (struct rhashtable_iter*) ;
 int FUNC_9 (struct rhashtable_iter*) ;
 int FUNC_10 (struct nft_ctx const*,struct nft_set*,struct nft_set_iter*,struct nft_set_elem*) ;

__attribute__((used)) static void FUNC_11(const struct nft_ctx *VAR_1, struct nft_set *VAR_2,
      struct nft_set_iter *VAR_3)
{
 struct nft_rhash *VAR_4 = FUNC_4(VAR_2);
 struct nft_rhash_elem *VAR_5;
 struct rhashtable_iter VAR_6;
 struct nft_set_elem VAR_7;

 FUNC_5(&VAR_4->ht, &VAR_6);
 FUNC_8(&VAR_6);

 while ((VAR_5 = FUNC_7(&VAR_6))) {
  if (FUNC_0(VAR_5)) {
   if (FUNC_1(VAR_5) != -VAR_0) {
    VAR_3->err = FUNC_1(VAR_5);
    break;
   }

   continue;
  }

  if (VAR_3->count < VAR_3->skip)
   goto cont;
  if (FUNC_3(&VAR_5->ext))
   goto cont;
  if (!FUNC_2(&VAR_5->ext, VAR_3->genmask))
   goto cont;

  VAR_7.priv = VAR_5;

  VAR_3->err = VAR_3->fn(VAR_1, VAR_2, VAR_3, &VAR_7);
  if (VAR_3->err < 0)
   break;

cont:
  VAR_3->count++;
 }
 FUNC_9(&VAR_6);
 FUNC_6(&VAR_6);
}
