
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* low; void* high; } ;
union acp_dma_count {int bytescount; TYPE_1__ bcount; } ;
typedef int u64 ;
struct audio_substream_data {int byte_cnt_low_reg_offset; int acp_mmio; int byte_cnt_high_reg_offset; } ;


 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct audio_substream_data *VAR_0)
{
 union acp_dma_count VAR_1;

 VAR_1.bcount.high = FUNC_0(VAR_0->acp_mmio,
           VAR_0->byte_cnt_high_reg_offset);
 VAR_1.bcount.low = FUNC_0(VAR_0->acp_mmio,
           VAR_0->byte_cnt_low_reg_offset);
 return VAR_1.bytescount;
}
