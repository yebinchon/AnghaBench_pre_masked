
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ dsp_dram_offset; scalar_t__ dram_offset; scalar_t__ dsp_iram_offset; scalar_t__ iram_offset; } ;
struct sst_dsp {TYPE_1__ addr; } ;
typedef enum sst_mem_type { ____Placeholder_sst_mem_type } sst_mem_type ;





u32 FUNC_0(struct sst_dsp *VAR_0, u32 VAR_1,
 enum sst_mem_type VAR_2)
{
 switch (VAR_2) {
 case 128:
  return VAR_1 - VAR_0->addr.iram_offset +
   VAR_0->addr.dsp_iram_offset;
 case 129:
  return VAR_1 - VAR_0->addr.dram_offset +
   VAR_0->addr.dsp_dram_offset;
 default:
  return 0;
 }
}
