
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct atiixp_dma* private_data; } ;
struct atiixp_dma {unsigned int buf_addr; unsigned int buf_bytes; TYPE_2__* ops; } ;
struct atiixp {scalar_t__ remap_addr; TYPE_1__* card; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {scalar_t__ dt_cur; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 struct atiixp* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct atiixp *VAR_1 = FUNC_3(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct atiixp_dma *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 int VAR_5 = 1000;

 while (VAR_5--) {
  VAR_4 = FUNC_2(VAR_1->remap_addr + VAR_3->ops->dt_cur);
  if (VAR_4 < VAR_3->buf_addr)
   continue;
  VAR_4 -= VAR_3->buf_addr;
  if (VAR_4 >= VAR_3->buf_bytes)
   continue;
  return FUNC_0(VAR_2, VAR_4);
 }
 FUNC_1(VAR_1->card->dev, "invalid DMA pointer read 0x%x (buf=%x)\n",
     FUNC_2(VAR_1->remap_addr + VAR_3->ops->dt_cur), VAR_3->buf_addr);
 return 0;
}
