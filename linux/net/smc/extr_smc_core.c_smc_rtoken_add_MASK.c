
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct smc_link_group {TYPE_1__** rtokens; int rtokens_used_mask; } ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ rkey; scalar_t__ dma_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct smc_link_group*) ;
 scalar_t__ FUNC_3 (int,int ) ;

int FUNC_4(struct smc_link_group *VAR_2, __be64 VAR_3, __be32 VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_2->rtokens[VAR_7][VAR_1].rkey == VAR_6) &&
      (VAR_2->rtokens[VAR_7][VAR_1].dma_addr == VAR_5) &&
      FUNC_3(VAR_7, VAR_2->rtokens_used_mask)) {

   return VAR_7;
  }
 }
 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_2->rtokens[VAR_7][VAR_1].rkey = VAR_6;
 VAR_2->rtokens[VAR_7][VAR_1].dma_addr = VAR_5;
 return VAR_7;
}
