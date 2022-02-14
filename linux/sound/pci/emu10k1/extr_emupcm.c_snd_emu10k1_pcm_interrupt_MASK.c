
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_emu10k1_voice {struct snd_emu10k1_pcm* epcm; } ;
struct snd_emu10k1_pcm {TYPE_4__* substream; } ;
struct snd_emu10k1 {TYPE_1__* card; } ;
struct TYPE_11__ {TYPE_3__* runtime; } ;
struct TYPE_10__ {TYPE_2__* hw; } ;
struct TYPE_9__ {int (* pointer ) (struct snd_emu10k1*,TYPE_4__*) ;} ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct snd_emu10k1*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct snd_emu10k1 *VAR_0,
          struct snd_emu10k1_voice *VAR_1)
{
 struct snd_emu10k1_pcm *VAR_2;

 if ((VAR_2 = VAR_1->epcm) == ((void*)0))
  return;
 if (VAR_2->substream == ((void*)0))
  return;







 FUNC_3(VAR_2->substream);
}
