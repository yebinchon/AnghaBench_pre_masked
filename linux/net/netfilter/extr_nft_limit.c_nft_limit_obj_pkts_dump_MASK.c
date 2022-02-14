
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_limit_pkts {int limit; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *,int ) ;
 struct nft_limit_pkts* FUNC_1 (struct nft_object*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1,
       struct nft_object *VAR_2,
       bool VAR_3)
{
 const struct nft_limit_pkts *VAR_4 = FUNC_1(VAR_2);

 return FUNC_0(VAR_1, &VAR_4->limit, VAR_0);
}
