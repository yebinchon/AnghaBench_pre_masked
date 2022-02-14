
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nft_set_ext_tmpl {scalar_t__ len; } ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int dlen; int klen; TYPE_1__* ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ elemsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 struct nft_set_ext* FUNC_3 (struct nft_set const*,void*) ;
 int FUNC_4 (struct nft_set_ext*) ;
 scalar_t__ FUNC_5 (struct nft_set_ext*,int ) ;
 scalar_t__* FUNC_6 (struct nft_set_ext*) ;
 int FUNC_7 (struct nft_set_ext*,struct nft_set_ext_tmpl const*) ;
 int FUNC_8 (struct nft_set_ext*) ;
 scalar_t__* FUNC_9 (struct nft_set_ext*) ;

void *FUNC_10(const struct nft_set *VAR_3,
   const struct nft_set_ext_tmpl *VAR_4,
   const u32 *VAR_5, const u32 *VAR_6,
   u64 VAR_7, u64 VAR_8, gfp_t VAR_9)
{
 struct nft_set_ext *VAR_10;
 void *VAR_11;

 VAR_11 = FUNC_1(VAR_3->ops->elemsize + VAR_4->len, VAR_9);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 VAR_10 = FUNC_3(VAR_3, VAR_11);
 FUNC_7(VAR_10, VAR_4);

 FUNC_2(FUNC_8(VAR_10), VAR_5, VAR_3->klen);
 if (FUNC_5(VAR_10, VAR_0))
  FUNC_2(FUNC_4(VAR_10), VAR_6, VAR_3->dlen);
 if (FUNC_5(VAR_10, VAR_1)) {
  *FUNC_6(VAR_10) = FUNC_0() + VAR_8;
  if (VAR_8 == 0)
   *FUNC_6(VAR_10) += VAR_7;
 }
 if (FUNC_5(VAR_10, VAR_2))
  *FUNC_9(VAR_10) = VAR_7;

 return VAR_11;
}
