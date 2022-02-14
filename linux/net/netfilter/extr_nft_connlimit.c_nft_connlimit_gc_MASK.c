
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_connlimit {int list; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct net*,int *) ;
 struct nft_connlimit* FUNC_3 (struct nft_expr const*) ;

__attribute__((used)) static bool FUNC_4(struct net *VAR_0, const struct nft_expr *VAR_1)
{
 struct nft_connlimit *VAR_2 = FUNC_3(VAR_1);
 bool VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0, &VAR_2->list);
 FUNC_1();

 return VAR_3;
}
