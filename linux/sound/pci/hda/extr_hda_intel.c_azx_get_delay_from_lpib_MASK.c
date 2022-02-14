
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int stream; int runtime; } ;
struct TYPE_4__ {int delay_negative_threshold; int period_bytes; scalar_t__ bufsize; struct snd_pcm_substream* substream; } ;
struct azx_dev {TYPE_2__ core; } ;
struct azx {int ** get_delay; int driver_caps; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct azx*,struct azx_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct azx *VAR_2, struct azx_dev *VAR_3,
       unsigned int VAR_4)
{
 struct snd_pcm_substream *VAR_5 = VAR_3->core.substream;
 int VAR_6 = VAR_5->stream;
 unsigned int VAR_7 = FUNC_0(VAR_2, VAR_3);
 int VAR_8;

 if (VAR_6 == VAR_1)
  VAR_8 = VAR_4 - VAR_7;
 else
  VAR_8 = VAR_7 - VAR_4;
 if (VAR_8 < 0) {
  if (VAR_8 >= VAR_3->core.delay_negative_threshold)
   VAR_8 = 0;
  else
   VAR_8 += VAR_3->core.bufsize;
 }

 if (VAR_8 >= VAR_3->core.period_bytes) {
  FUNC_2(VAR_2->card->dev,
    "Unstable LPIB (%d >= %d); disabling LPIB delay counting\n",
    VAR_8, VAR_3->core.period_bytes);
  VAR_8 = 0;
  VAR_2->driver_caps &= ~VAR_0;
  VAR_2->get_delay[VAR_6] = ((void*)0);
 }

 return FUNC_1(VAR_5->runtime, VAR_8);
}
