
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mtk_base_afe_memif {TYPE_3__* data; scalar_t__ buffer_size; scalar_t__ phys_buf_addr; } ;
struct mtk_base_afe {int (* memif_fs ) (struct snd_pcm_substream*,int ) ;int regmap; struct mtk_base_afe_memif* memif; } ;
struct TYPE_6__ {scalar_t__ msb_shift; scalar_t__ mono_shift; scalar_t__ fs_shift; int fs_maskbit; int fs_reg; int mono_reg; int msb_reg; scalar_t__ reg_ofs_base; } ;
struct TYPE_5__ {scalar_t__ dma_bytes; int dma_addr; } ;
struct TYPE_4__ {size_t id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct mtk_base_afe* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (struct snd_pcm_substream*,int ) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct mtk_base_afe *VAR_6 = FUNC_7(VAR_4);
 struct mtk_base_afe_memif *VAR_7 = &VAR_6->memif[VAR_5->cpu_dai->id];
 int VAR_8 = 0;
 int VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_6(VAR_2, FUNC_3(VAR_3));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_9(VAR_2->runtime->dma_addr) ? 1 : 0;
 VAR_7->phys_buf_addr = FUNC_0(VAR_2->runtime->dma_addr);
 VAR_7->buffer_size = VAR_2->runtime->dma_bytes;


 FUNC_2(VAR_6->regmap, VAR_7->data->reg_ofs_base,
    VAR_7->phys_buf_addr);

 FUNC_2(VAR_6->regmap,
    VAR_7->data->reg_ofs_base + VAR_0,
    VAR_7->phys_buf_addr + VAR_7->buffer_size - 1);


 FUNC_1(VAR_6->regmap, VAR_7->data->msb_reg,
          1, VAR_8, VAR_7->data->msb_shift);


 if (VAR_7->data->mono_shift >= 0) {
  unsigned int VAR_11 = (FUNC_4(VAR_3) == 1) ? 1 : 0;

  FUNC_1(VAR_6->regmap, VAR_7->data->mono_reg,
           1, VAR_11, VAR_7->data->mono_shift);
 }


 if (VAR_7->data->fs_shift < 0)
  return 0;

 VAR_10 = VAR_6->memif_fs(VAR_2, FUNC_5(VAR_3));

 if (VAR_10 < 0)
  return -VAR_1;

 FUNC_1(VAR_6->regmap, VAR_7->data->fs_reg,
          VAR_7->data->fs_maskbit, VAR_10,
          VAR_7->data->fs_shift);

 return 0;
}
