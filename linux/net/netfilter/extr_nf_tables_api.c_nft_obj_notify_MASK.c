
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_table {int dummy; } ;
struct nft_object {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net*,int ,int ,int,int ,int,struct nft_table const*,struct nft_object*,int) ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int,int ) ;
 int FUNC_4 (struct net*,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

void FUNC_6(struct net *VAR_3, const struct nft_table *VAR_4,
      struct nft_object *VAR_5, u32 VAR_6, u32 VAR_7, int VAR_8,
      int VAR_9, int VAR_10, gfp_t VAR_11)
{
 struct sk_buff *VAR_12;
 int VAR_13;

 if (!VAR_10 &&
     !FUNC_2(VAR_3, VAR_1))
  return;

 VAR_12 = FUNC_5(VAR_2, VAR_11);
 if (VAR_12 == ((void*)0))
  goto err;

 VAR_13 = FUNC_1(VAR_12, VAR_3, VAR_6, VAR_7, VAR_8, 0, VAR_9,
          VAR_4, VAR_5, 0);
 if (VAR_13 < 0) {
  FUNC_0(VAR_12);
  goto err;
 }

 FUNC_3(VAR_12, VAR_3, VAR_6, VAR_1, VAR_10, VAR_11);
 return;
err:
 FUNC_4(VAR_3, VAR_6, VAR_1, -VAR_0);
}
