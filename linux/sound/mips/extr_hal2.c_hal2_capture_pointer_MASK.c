
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pbus; } ;
struct hal2_codec {TYPE_2__ pbus; int pcm_indirect; } ;
struct snd_hal2 {struct hal2_codec adc; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_3__ {int pbdma_bptr; } ;


 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;
 struct snd_hal2* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_hal2 *VAR_1 = FUNC_1(VAR_0);
 struct hal2_codec *VAR_2 = &VAR_1->adc;

 return FUNC_0(VAR_0, &VAR_2->pcm_indirect,
      VAR_2->pbus.pbus->pbdma_bptr);
}
