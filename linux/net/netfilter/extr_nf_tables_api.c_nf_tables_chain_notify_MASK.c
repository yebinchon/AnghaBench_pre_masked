
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_ctx {int portid; int net; int report; int chain; int table; int family; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(const struct nft_ctx *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 if (!VAR_4->report &&
     !FUNC_2(VAR_4->net, VAR_2))
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_1);
 if (VAR_6 == ((void*)0))
  goto err;

 VAR_7 = FUNC_1(VAR_6, VAR_4->net, VAR_4->portid, VAR_4->seq,
     VAR_5, 0, VAR_4->family, VAR_4->table,
     VAR_4->chain);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6);
  goto err;
 }

 FUNC_3(VAR_6, VAR_4->net, VAR_4->portid, VAR_2,
         VAR_4->report, VAR_1);
 return;
err:
 FUNC_4(VAR_4->net, VAR_4->portid, VAR_2, -VAR_0);
}
