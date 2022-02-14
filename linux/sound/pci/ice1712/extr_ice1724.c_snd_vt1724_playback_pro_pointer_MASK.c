
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_ice1712 {TYPE_1__* card; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_4__ {size_t dma_addr; size_t buffer_size; scalar_t__ period_size; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_4(VAR_4);
 size_t VAR_6;

 if (!(FUNC_3(FUNC_0(VAR_5, VAR_0)) & VAR_3))
  return 0;
 VAR_6 = FUNC_3(FUNC_0(VAR_5, VAR_2)) & 0xffffff;
 VAR_6 = (VAR_6 + 1) << 2;
 VAR_6 = FUNC_1(VAR_4->runtime, VAR_6);
 if (!VAR_6)
  ;
 else if (VAR_6 <= VAR_4->runtime->buffer_size)
  VAR_6 = VAR_4->runtime->buffer_size - VAR_6;
 else {
  FUNC_2(VAR_5->card->dev, "invalid ptr %d (size=%d)\n",
      (int)VAR_6, (int)VAR_4->runtime->buffer_size);
  VAR_6 = 0;
 }

 return VAR_6;
}
