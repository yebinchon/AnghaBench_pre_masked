
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct snd_cs46xx_pcm {size_t shift; TYPE_1__ hw_buf; TYPE_3__* pcm_channel; } ;
struct snd_cs46xx {int dummy; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_8__ {int address; } ;
struct TYPE_7__ {TYPE_4__* pcm_reader_scb; } ;
struct TYPE_6__ {struct snd_cs46xx_pcm* private_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (struct snd_cs46xx*,int) ;
 struct snd_cs46xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_cs46xx *VAR_3 = FUNC_2(VAR_2);
 size_t VAR_4;
 struct snd_cs46xx_pcm *VAR_5 = VAR_2->runtime->private_data;

 if (FUNC_0(!VAR_5->pcm_channel))
  return -VAR_1;




 VAR_4 = FUNC_1(VAR_3, VAR_0);

 VAR_4 -= VAR_5->hw_buf.addr;
 return VAR_4 >> VAR_5->shift;
}
