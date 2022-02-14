
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_rules_old {int h; struct nft_rule** start; } ;
struct nft_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nft_rule **VAR_1)
{
 struct nft_rule **VAR_2 = VAR_1;
 struct nft_rules_old *VAR_3;

 while (*VAR_2)
  VAR_2++;

 VAR_2++;
 VAR_3 = (void *) VAR_2;
 VAR_3->start = VAR_1;

 FUNC_0(&VAR_3->h, VAR_0);
}
