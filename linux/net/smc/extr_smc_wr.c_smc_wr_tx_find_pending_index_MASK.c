
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct smc_link {size_t wr_tx_cnt; TYPE_1__* wr_tx_pends; } ;
struct TYPE_2__ {scalar_t__ wr_id; } ;



__attribute__((used)) static inline int FUNC_0(struct smc_link *VAR_0, u64 VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->wr_tx_cnt; VAR_2++) {
  if (VAR_0->wr_tx_pends[VAR_2].wr_id == VAR_1)
   return VAR_2;
 }
 return VAR_0->wr_tx_cnt;
}
