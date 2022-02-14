
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; scalar_t__ number; } ;
struct echoaudio {int sample_rate; int opencount; scalar_t__ can_set_rate; TYPE_1__* card; scalar_t__ rate_set; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct snd_pcm_substream*,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int ,int) ;
 struct echoaudio* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4)
{
 struct echoaudio *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 if ((VAR_6 = FUNC_4(VAR_4, FUNC_3(VAR_5) -
       VAR_4->number)) < 0)
  return VAR_6;
 if ((VAR_6 = FUNC_5(VAR_4->runtime, 0,
           VAR_0,
           VAR_2, ((void*)0),
           VAR_1, -1)) < 0)
  return VAR_6;
 if ((VAR_6 = FUNC_5(VAR_4->runtime, 0,
           VAR_1,
           VAR_3, ((void*)0),
           VAR_0, -1)) < 0)
  return VAR_6;
 FUNC_0(&VAR_5->opencount);
 if (FUNC_1(&VAR_5->opencount) > 1 && VAR_5->rate_set)
  VAR_5->can_set_rate=0;
 FUNC_2(VAR_5->card->dev, "pcm_analog_in_open  cs=%d  oc=%d  r=%d\n",
  VAR_5->can_set_rate, FUNC_1(&VAR_5->opencount),
  VAR_5->sample_rate);
 return 0;
}
