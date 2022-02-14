
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_trans {int dummy; } ;
struct nft_rule {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nft_ctx*,struct nft_rule*) ;
 int FUNC_1 (struct nft_ctx*,struct nft_rule*,int ) ;
 int FUNC_2 (struct nft_trans*) ;
 struct nft_trans* FUNC_3 (struct nft_ctx*,int ,struct nft_rule*) ;

__attribute__((used)) static int FUNC_4(struct nft_ctx *VAR_3, struct nft_rule *VAR_4)
{
 struct nft_trans *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  return VAR_6;
 }
 FUNC_1(VAR_3, VAR_4, VAR_2);

 return 0;
}
