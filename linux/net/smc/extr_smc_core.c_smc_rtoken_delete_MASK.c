
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct smc_link_group {int rtokens_used_mask; TYPE_1__** rtokens; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ rkey; scalar_t__ dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ) ;

int FUNC_3(struct smc_link_group *VAR_3, __be32 VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3->rtokens[VAR_6][VAR_2].rkey == VAR_5 &&
      FUNC_2(VAR_6, VAR_3->rtokens_used_mask)) {
   VAR_3->rtokens[VAR_6][VAR_2].rkey = 0;
   VAR_3->rtokens[VAR_6][VAR_2].dma_addr = 0;

   FUNC_0(VAR_6, VAR_3->rtokens_used_mask);
   return 0;
  }
 }
 return -VAR_0;
}
