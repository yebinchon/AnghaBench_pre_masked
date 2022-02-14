
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nft_set {int klen; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const struct nft_set *VAR_1,
           const void *VAR_2,
           u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;

 if (VAR_1->klen == 2)
  VAR_5 = *(u16 *)VAR_2;
 else
  VAR_5 = *(u8 *)VAR_2;
 VAR_5 <<= 1;

 *VAR_3 = VAR_5 / VAR_0;
 *VAR_4 = VAR_5 % VAR_0;
}
