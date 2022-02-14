
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_3__ {size_t addr; } ;
struct TYPE_4__ {size_t shift; TYPE_1__ hw_buf; } ;
struct snd_cs46xx {TYPE_2__ capt; } ;
typedef size_t snd_pcm_uframes_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct snd_cs46xx*,int ) ;
 struct snd_cs46xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_cs46xx *VAR_2 = FUNC_1(VAR_1);
 size_t VAR_3 = FUNC_0(VAR_2, VAR_0) - VAR_2->capt.hw_buf.addr;
 return VAR_3 >> VAR_2->capt.shift;
}
