
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vt1724_pcm_reg {size_t start; scalar_t__ size; scalar_t__ addr; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_ice1712 {TYPE_1__* card; scalar_t__ profi_port; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_4__ {size_t buffer_size; scalar_t__ dma_addr; struct vt1724_pcm_reg* private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*,int ) ;
 size_t FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int ,char*,int,int) ;
 size_t FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 struct snd_ice1712* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_5(VAR_1);
 const struct vt1724_pcm_reg *VAR_3 = VAR_1->runtime->private_data;
 size_t VAR_4;

 if (!(FUNC_3(FUNC_0(VAR_2, VAR_0)) & VAR_3->start))
  return 0;





 VAR_4 = FUNC_4(VAR_2->profi_port + VAR_3->size);
 VAR_4 = (VAR_4 + 1) << 2;
 VAR_4 = FUNC_1(VAR_1->runtime, VAR_4);
 if (!VAR_4)
  ;
 else if (VAR_4 <= VAR_1->runtime->buffer_size)
  VAR_4 = VAR_1->runtime->buffer_size - VAR_4;
 else {
  FUNC_2(VAR_2->card->dev, "invalid ptr %d (size=%d)\n",
      (int)VAR_4, (int)VAR_1->runtime->buffer_size);
  VAR_4 = 0;
 }
 return VAR_4;

}
