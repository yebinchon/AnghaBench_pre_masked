
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_payload_set {int csum_type; int csum_flags; void* len; int sreg; void* csum_offset; void* offset; void* base; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;


 int VAR_9 ;
 struct nft_payload_set* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_10,
    const struct nft_expr *VAR_11,
    const struct nlattr * const VAR_12[])
{
 struct nft_payload_set *VAR_13 = FUNC_0(VAR_11);

 VAR_13->base = FUNC_4(FUNC_3(VAR_12[VAR_2]));
 VAR_13->offset = FUNC_4(FUNC_3(VAR_12[VAR_7]));
 VAR_13->len = FUNC_4(FUNC_3(VAR_12[VAR_6]));
 VAR_13->sreg = FUNC_1(VAR_12[VAR_8]);

 if (VAR_12[VAR_5])
  VAR_13->csum_type =
   FUNC_4(FUNC_3(VAR_12[VAR_5]));
 if (VAR_12[VAR_4])
  VAR_13->csum_offset =
   FUNC_4(FUNC_3(VAR_12[VAR_4]));
 if (VAR_12[VAR_3]) {
  u32 VAR_14;

  VAR_14 = FUNC_4(FUNC_3(VAR_12[VAR_3]));
  if (VAR_14 & ~VAR_9)
   return -VAR_0;

  VAR_13->csum_flags = VAR_14;
 }

 switch (VAR_13->csum_type) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 return FUNC_2(VAR_13->sreg, VAR_13->len);
}
