
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nft_expr const nft_expr ;
struct nft_connlimit {int invert; int limit; int list; } ;


 int FUNC_0 (int *) ;
 struct nft_connlimit* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct nft_expr *VAR_0, const struct nft_expr *VAR_1)
{
 struct nft_connlimit *VAR_2 = FUNC_1(VAR_0);
 struct nft_connlimit *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->list);
 VAR_2->limit = VAR_3->limit;
 VAR_2->invert = VAR_3->invert;

 return 0;
}
