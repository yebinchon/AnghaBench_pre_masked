
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nft_ctx {int dummy; } ;
struct nft_trans {int msg_type; struct nft_ctx ctx; } ;
typedef int gfp_t ;


 struct nft_trans* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static struct nft_trans *FUNC_1(const struct nft_ctx *VAR_0,
          int VAR_1, u32 VAR_2, gfp_t VAR_3)
{
 struct nft_trans *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct nft_trans) + VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->msg_type = VAR_1;
 VAR_4->ctx = *VAR_0;

 return VAR_4;
}
