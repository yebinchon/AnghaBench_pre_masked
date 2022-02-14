
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nft_set_elem {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_ctx {int report; int portid; struct net* net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct nft_ctx const*,int ,int ,int,int ,struct nft_set const*,struct nft_set_elem const*) ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ,int ) ;
 int FUNC_4 (struct net*,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(const struct nft_ctx *VAR_4,
         const struct nft_set *VAR_5,
         const struct nft_set_elem *VAR_6,
         int VAR_7, u16 VAR_8)
{
 struct net *VAR_9 = VAR_4->net;
 u32 VAR_10 = VAR_4->portid;
 struct sk_buff *VAR_11;
 int VAR_12;

 if (!VAR_4->report && !FUNC_2(VAR_9, VAR_2))
  return;

 VAR_11 = FUNC_5(VAR_3, VAR_1);
 if (VAR_11 == ((void*)0))
  goto err;

 VAR_12 = FUNC_1(VAR_11, VAR_4, 0, VAR_10, VAR_7, VAR_8,
       VAR_5, VAR_6);
 if (VAR_12 < 0) {
  FUNC_0(VAR_11);
  goto err;
 }

 FUNC_3(VAR_11, VAR_9, VAR_10, VAR_2, VAR_4->report,
         VAR_1);
 return;
err:
 FUNC_4(VAR_9, VAR_10, VAR_2, -VAR_0);
}
