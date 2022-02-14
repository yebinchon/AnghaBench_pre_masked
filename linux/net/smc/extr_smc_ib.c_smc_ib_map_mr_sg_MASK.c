
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_buf_desc {TYPE_1__* sgt; int * mr_rx; } ;
struct TYPE_2__ {int orig_nents; int sgl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_1(struct smc_buf_desc *VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2->mr_rx[VAR_1],
         VAR_2->sgt[VAR_1].sgl,
         VAR_2->sgt[VAR_1].orig_nents,
         &VAR_3, VAR_0);

 return VAR_4;
}
