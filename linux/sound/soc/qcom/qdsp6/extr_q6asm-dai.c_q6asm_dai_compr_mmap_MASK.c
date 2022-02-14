
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {struct q6asm_dai_rtd* private_data; } ;
struct TYPE_2__ {int bytes; int addr; int area; } ;
struct q6asm_dai_rtd {TYPE_1__ dma_buffer; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct vm_area_struct*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_1,
  struct vm_area_struct *VAR_2)
{
 struct snd_compr_runtime *VAR_3 = VAR_1->runtime;
 struct q6asm_dai_rtd *VAR_4 = VAR_3->private_data;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_1->private_data;
 struct snd_soc_component *VAR_6 = FUNC_1(VAR_5, VAR_0);
 struct device *VAR_7 = VAR_6->dev;

 return FUNC_0(VAR_7, VAR_2,
   VAR_4->dma_buffer.area, VAR_4->dma_buffer.addr,
   VAR_4->dma_buffer.bytes);
}
