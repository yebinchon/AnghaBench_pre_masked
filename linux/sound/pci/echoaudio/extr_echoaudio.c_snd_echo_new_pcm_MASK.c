
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; struct echoaudio* private_data; } ;
struct echoaudio {int pci; TYPE_1__* card; struct snd_pcm* digital_pcm; struct snd_pcm* analog_pcm; } ;
struct TYPE_2__ {int shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int,int ,int ,struct snd_pcm**) ;
 int FUNC_8 (struct snd_pcm*,int ,int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct echoaudio *VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;
 if ((VAR_8 = FUNC_7(VAR_6->card, "Analog PCM", 0,
          FUNC_1(VAR_6),
          FUNC_0(VAR_6), &VAR_7)) < 0)
  return VAR_8;
 VAR_7->private_data = VAR_6;
 VAR_6->analog_pcm = VAR_7;
 FUNC_9(VAR_7->name, VAR_6->card->shortname);
 FUNC_8(VAR_7, VAR_1, &VAR_3);
 FUNC_8(VAR_7, VAR_0, &VAR_2);
 if ((VAR_8 = FUNC_6(VAR_7, FUNC_5(VAR_6->pci))) < 0)
  return VAR_8;
 return 0;
}
