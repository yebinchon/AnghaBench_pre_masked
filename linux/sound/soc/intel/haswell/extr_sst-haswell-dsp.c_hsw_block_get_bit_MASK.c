
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sst_mem_block {int type; size_t index; struct sst_dsp* dsp; } ;
struct sst_dsp {scalar_t__ id; } ;
struct TYPE_3__ {scalar_t__ dev_id; size_t dram_shift; size_t iram_shift; } ;


 size_t FUNC_0 (TYPE_1__*) ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct sst_mem_block *VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0, VAR_4;
 struct sst_dsp *VAR_5 = VAR_1->dsp;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].dev_id == VAR_5->id)
   break;
 }

 if (VAR_4 < FUNC_0(VAR_0)) {
  switch (VAR_1->type) {
  case 129:
   VAR_3 = VAR_0[VAR_4].dram_shift;
   break;
  case 128:
   VAR_3 = VAR_0[VAR_4].iram_shift;
   break;
  default:
   VAR_3 = 0;
  }
 } else
  VAR_3 = 0;

 VAR_2 = 1 << (VAR_1->index + VAR_3);

 return VAR_2;
}
