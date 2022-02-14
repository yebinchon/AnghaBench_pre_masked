
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_rule {int dummy; } ;
struct nft_chain {struct nft_rule** rules_next; int rules_gen_0; int rules_gen_1; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct nft_rule**) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (int ,struct nft_rule**) ;
 struct nft_rule** FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_0, struct nft_chain *VAR_1)
{
 struct nft_rule **VAR_2, **VAR_3;
 bool VAR_4;

 VAR_4 = FUNC_2(VAR_0);

 VAR_2 = FUNC_4(VAR_1->rules_gen_0,
           FUNC_0(VAR_0));
 VAR_3 = FUNC_4(VAR_1->rules_gen_1,
           FUNC_0(VAR_0));


 if (VAR_1->rules_next == ((void*)0)) {

  if (VAR_2 == VAR_3)
   return;




  if (VAR_4) {
   FUNC_3(VAR_1->rules_gen_1, VAR_2);
   FUNC_1(VAR_3);
  } else {
   FUNC_3(VAR_1->rules_gen_0, VAR_3);
   FUNC_1(VAR_2);
  }

  return;
 }

 if (VAR_4)
  FUNC_3(VAR_1->rules_gen_1, VAR_1->rules_next);
 else
  FUNC_3(VAR_1->rules_gen_0, VAR_1->rules_next);

 VAR_1->rules_next = ((void*)0);

 if (VAR_2 == VAR_3)
  return;

 if (VAR_4)
  FUNC_1(VAR_3);
 else
  FUNC_1(VAR_2);
}
