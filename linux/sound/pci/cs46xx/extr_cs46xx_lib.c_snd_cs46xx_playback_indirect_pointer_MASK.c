
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
struct snd_cs46xx_pcm {int pcm_rec; TYPE_1__ hw_buf; TYPE_4__* pcm_channel; } ;
struct snd_cs46xx {int dummy; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_8__ {TYPE_3__* pcm_reader_scb; } ;
struct TYPE_7__ {int address; } ;
struct TYPE_6__ {struct snd_cs46xx_pcm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (struct snd_cs46xx*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int *,size_t) ;
 struct snd_cs46xx* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_cs46xx *VAR_3 = FUNC_3(VAR_2);
 size_t VAR_4;
 struct snd_cs46xx_pcm *VAR_5 = VAR_2->runtime->private_data;






 VAR_4 = FUNC_1(VAR_3, VAR_0);

 VAR_4 -= VAR_5->hw_buf.addr;
 return FUNC_2(VAR_2, &VAR_5->pcm_rec, VAR_4);
}
