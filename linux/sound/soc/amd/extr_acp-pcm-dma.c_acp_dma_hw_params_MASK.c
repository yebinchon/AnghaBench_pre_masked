
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {int dummy; } ;
struct TYPE_2__ {int addr; scalar_t__ area; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__ dma_buffer; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dma_area; struct audio_substream_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct audio_substream_data {int i2s_instance; int num_of_pages; scalar_t__ direction; int acp_mmio; int size; int order; int dma_addr; int dma_curr_dscr; int byte_cnt_low_reg_offset; int byte_cnt_high_reg_offset; int dma_dscr_idx_2; int dma_dscr_idx_1; int destination; int sram_bank; void* pte_offset; int ch2; int ch1; int capture_channel; } ;
struct audio_drv_data {scalar_t__ asic_type; struct snd_pcm_substream* capture_i2ssp_stream; struct snd_pcm_substream* capture_i2sbt_stream; struct snd_pcm_substream* play_i2ssp_stream; struct snd_pcm_substream* play_i2sbt_stream; int acp_mmio; } ;
struct acp_platform_info {int play_i2s_instance; int cap_i2s_instance; int capture_channel; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;


 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,struct audio_substream_data*,scalar_t__) ;
 struct audio_drv_data* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_substream*,int ) ;
 struct acp_platform_info* FUNC_11 (struct snd_soc_card*) ;
 struct snd_soc_component* FUNC_12 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_50,
        struct snd_pcm_hw_params *VAR_51)
{
 int VAR_52;
 uint64_t VAR_53;
 u32 VAR_54 = 0;
 struct snd_pcm_runtime *VAR_55;
 struct audio_substream_data *VAR_56;
 struct snd_soc_pcm_runtime *VAR_57 = VAR_50->private_data;
 struct snd_soc_component *VAR_58 = FUNC_12(VAR_57,
            VAR_22);
 struct audio_drv_data *VAR_59 = FUNC_6(VAR_58->dev);
 struct snd_soc_card *VAR_60 = VAR_57->card;
 struct acp_platform_info *VAR_61 = FUNC_11(VAR_60);

 VAR_55 = VAR_50->runtime;
 VAR_56 = VAR_55->private_data;

 if (FUNC_1(!VAR_56))
  return -VAR_23;

 if (VAR_61) {
  if (VAR_50->stream == VAR_34) {
   VAR_56->i2s_instance = VAR_61->play_i2s_instance;
  } else {
   VAR_56->i2s_instance = VAR_61->cap_i2s_instance;
   VAR_56->capture_channel = VAR_61->capture_channel;
  }
 }
 if (VAR_59->asic_type == 130) {
  VAR_54 = FUNC_2(VAR_59->acp_mmio,
       VAR_41);
  if (VAR_50->stream == VAR_34) {
   switch (VAR_56->i2s_instance) {
   case 129:
    VAR_54 |= VAR_1;
    break;
   case 128:
   default:
    VAR_54 |= VAR_3;
   }
  } else {
   switch (VAR_56->i2s_instance) {
   case 129:
    VAR_54 |= VAR_1;
    break;
   case 128:
   default:
    VAR_54 |= VAR_2;
   }
  }
  FUNC_3(VAR_54, VAR_59->acp_mmio,
         VAR_41);
 }

 if (VAR_50->stream == VAR_34) {
  switch (VAR_56->i2s_instance) {
  case 129:
   VAR_56->pte_offset = VAR_11;
   VAR_56->ch1 = VAR_35;
   VAR_56->ch2 = VAR_14;
   VAR_56->sram_bank = VAR_7;
   VAR_56->destination = VAR_38;
   VAR_56->dma_dscr_idx_1 = VAR_32;
   VAR_56->dma_dscr_idx_2 = VAR_33;
   VAR_56->byte_cnt_high_reg_offset =
     VAR_44;
   VAR_56->byte_cnt_low_reg_offset =
     VAR_45;
   VAR_59->play_i2sbt_stream = VAR_50;
   break;
  case 128:
  default:
   switch (VAR_59->asic_type) {
   case 130:
    VAR_56->pte_offset = VAR_13;
    break;
   default:
    VAR_56->pte_offset = VAR_4;
   }
   VAR_56->ch1 = VAR_36;
   VAR_56->ch2 = VAR_15;
   VAR_56->sram_bank = VAR_5;
   VAR_56->destination = VAR_37;
   VAR_56->dma_dscr_idx_1 = VAR_30;
   VAR_56->dma_dscr_idx_2 = VAR_31;
   VAR_56->byte_cnt_high_reg_offset =
     VAR_48;
   VAR_56->byte_cnt_low_reg_offset =
     VAR_49;
   VAR_59->play_i2ssp_stream = VAR_50;
  }
 } else {
  switch (VAR_56->i2s_instance) {
  case 129:
   VAR_56->pte_offset = VAR_10;
   VAR_56->ch1 = VAR_27;
   VAR_56->ch2 = VAR_16;
   VAR_56->sram_bank = VAR_8;
   VAR_56->destination = VAR_26;
   VAR_56->dma_dscr_idx_1 = VAR_18;
   VAR_56->dma_dscr_idx_2 = VAR_19;
   VAR_56->byte_cnt_high_reg_offset =
     VAR_42;
   VAR_56->byte_cnt_low_reg_offset =
     VAR_43;
   VAR_56->dma_curr_dscr = VAR_39;
   VAR_59->capture_i2sbt_stream = VAR_50;
   break;
  case 128:
  default:
   VAR_56->pte_offset = VAR_0;
   VAR_56->ch1 = VAR_28;
   VAR_56->ch2 = VAR_17;
   switch (VAR_59->asic_type) {
   case 130:
    VAR_56->pte_offset = VAR_12;
    VAR_56->sram_bank = VAR_6;
    break;
   default:
    VAR_56->pte_offset = VAR_0;
    VAR_56->sram_bank = VAR_9;
   }
   VAR_56->destination = VAR_25;
   VAR_56->dma_dscr_idx_1 = VAR_20;
   VAR_56->dma_dscr_idx_2 = VAR_21;
   VAR_56->byte_cnt_high_reg_offset =
     VAR_46;
   VAR_56->byte_cnt_low_reg_offset =
     VAR_47;
   VAR_56->dma_curr_dscr = VAR_40;
   VAR_59->capture_i2ssp_stream = VAR_50;
  }
 }

 VAR_53 = FUNC_9(VAR_51);
 VAR_52 = FUNC_10(VAR_50, VAR_53);
 if (VAR_52 < 0)
  return VAR_52;

 FUNC_8(VAR_50->runtime->dma_area, 0, FUNC_9(VAR_51));

 if (VAR_50->dma_buffer.area) {
  FUNC_4(VAR_56->acp_mmio, 0, 1);

  VAR_56->dma_addr = VAR_50->dma_buffer.addr;
  VAR_56->order = FUNC_7(VAR_53);


  VAR_56->size = VAR_53;
  VAR_56->num_of_pages = FUNC_0(VAR_53) >> VAR_29;
  VAR_56->direction = VAR_50->stream;

  FUNC_5(VAR_56->acp_mmio, VAR_56, VAR_59->asic_type);
  VAR_52 = 0;
 } else {
  VAR_52 = -VAR_24;
 }
 return VAR_52;
}
