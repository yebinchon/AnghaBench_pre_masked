
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_pcm_substream {TYPE_3__* runtime; } ;
struct cs5535audio_dma {scalar_t__ buf_addr; scalar_t__ buf_bytes; TYPE_1__* ops; } ;
struct cs5535audio {TYPE_2__* card; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {struct cs5535audio_dma* private_data; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ (* read_dma_pntr ) (struct cs5535audio*) ;} ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 struct cs5535audio* FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct cs5535audio*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream
       *VAR_0)
{
 struct cs5535audio *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;
 struct cs5535audio_dma *VAR_3;

 VAR_3 = VAR_0->runtime->private_data;
 VAR_2 = VAR_3->ops->read_dma_pntr(VAR_1);
 if (VAR_2 < VAR_3->buf_addr) {
  FUNC_1(VAR_1->card->dev, "curdma=%x < %x bufaddr.\n",
     VAR_2, VAR_3->buf_addr);
  return 0;
 }
 VAR_2 -= VAR_3->buf_addr;
 if (VAR_2 >= VAR_3->buf_bytes) {
  FUNC_1(VAR_1->card->dev, "diff=%x >= %x buf_bytes.\n",
     VAR_2, VAR_3->buf_bytes);
  return 0;
 }
 return FUNC_0(VAR_0->runtime, VAR_2);
}
