
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_set_estimate {void* space; void* lookup; int size; } ;
struct nft_set_desc {int klen; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(const struct nft_set_desc *VAR_1, u32 VAR_2,
    struct nft_set_estimate *VAR_3)
{

 if (VAR_1->klen > 2)
  return 0;

 VAR_3->size = FUNC_0(VAR_1->klen);
 VAR_3->lookup = VAR_0;
 VAR_3->space = VAR_0;

 return 1;
}
