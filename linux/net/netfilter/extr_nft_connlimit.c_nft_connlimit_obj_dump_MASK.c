
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_connlimit {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct nft_connlimit*) ;
 struct nft_connlimit* FUNC_1 (struct nft_object*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0,
      struct nft_object *VAR_1, bool VAR_2)
{
 struct nft_connlimit *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_3);
}
