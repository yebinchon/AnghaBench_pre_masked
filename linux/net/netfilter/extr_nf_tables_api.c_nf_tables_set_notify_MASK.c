
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_ctx {int net; int report; int portid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct nft_ctx const*,struct nft_set const*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(const struct nft_ctx *VAR_3,
     const struct nft_set *VAR_4, int VAR_5,
            gfp_t VAR_6)
{
 struct sk_buff *VAR_7;
 u32 VAR_8 = VAR_3->portid;
 int VAR_9;

 if (!VAR_3->report &&
     !FUNC_2(VAR_3->net, VAR_1))
  return;

 VAR_7 = FUNC_5(VAR_2, VAR_6);
 if (VAR_7 == ((void*)0))
  goto err;

 VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7);
  goto err;
 }

 FUNC_3(VAR_7, VAR_3->net, VAR_8, VAR_1, VAR_3->report,
         VAR_6);
 return;
err:
 FUNC_4(VAR_3->net, VAR_8, VAR_1, -VAR_0);
}
