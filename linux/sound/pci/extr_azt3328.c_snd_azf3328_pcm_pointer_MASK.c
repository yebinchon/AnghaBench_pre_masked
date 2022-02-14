
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; TYPE_3__* runtime; } ;
struct snd_azf3328_codec_data {int name; scalar_t__ dma_base; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {struct snd_azf3328_codec_data* private_data; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {TYPE_2__* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,unsigned long) ;
 int FUNC_1 (int ,char*,int ,int ,unsigned long,int ) ;
 int VAR_2 ;
 unsigned long FUNC_2 (struct snd_azf3328_codec_data const*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_3
)
{
 const struct snd_azf3328_codec_data *VAR_4 =
  VAR_3->runtime->private_data;
 unsigned long VAR_5;
 snd_pcm_uframes_t VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_0);





 VAR_5 -= VAR_4->dma_base;

 VAR_6 = FUNC_0( VAR_3->runtime, VAR_5);
 FUNC_1(VAR_3->pcm->card->dev, "%08li %s @ 0x%8lx, frames %8ld\n",
  VAR_2, VAR_4->name, VAR_5, VAR_6);
 return VAR_6;
}
