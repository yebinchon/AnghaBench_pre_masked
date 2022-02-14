
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nft_ng_inc {scalar_t__ modulus; scalar_t__ offset; int counter; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct nft_ng_inc *VAR_0)
{
 u32 VAR_1, VAR_2;

 do {
  VAR_2 = FUNC_1(&VAR_0->counter);
  VAR_1 = (VAR_2 + 1 < VAR_0->modulus) ? VAR_2 + 1 : 0;
 } while (FUNC_0(&VAR_0->counter, VAR_2, VAR_1) != VAR_2);

 return VAR_1 + VAR_0->offset;
}
