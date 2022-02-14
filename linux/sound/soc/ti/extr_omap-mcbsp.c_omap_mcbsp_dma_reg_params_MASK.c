
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mcbsp {int phys_dma_base; TYPE_1__* pdata; } ;
struct TYPE_2__ {int reg_size; int reg_step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct omap_mcbsp *VAR_5,
         unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 == VAR_4) {
  if (VAR_5->pdata->reg_size == 2)
   VAR_7 = VAR_3;
  else
   VAR_7 = VAR_2;
 } else {
  if (VAR_5->pdata->reg_size == 2)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
 }

 return VAR_5->phys_dma_base + VAR_7 * VAR_5->pdata->reg_step;
}
