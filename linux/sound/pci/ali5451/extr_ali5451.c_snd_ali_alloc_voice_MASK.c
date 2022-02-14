
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ali_voice {int use; int pcm; int mode; struct snd_ali* codec; } ;
struct TYPE_4__ {struct snd_ali_voice* voices; } ;
struct snd_ali {int voice_alloc; TYPE_2__ synth; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_ali*,int) ;
 int FUNC_3 (struct snd_ali*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct snd_ali_voice *FUNC_6(struct snd_ali * VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 struct snd_ali_voice *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1->card->dev, "alloc_voice: type=%d rec=%d\n", VAR_2, VAR_3);

 FUNC_4(&VAR_1->voice_alloc);
 if (VAR_2 == VAR_0) {
  VAR_6 = VAR_4 > 0 ? FUNC_2(VAR_1, VAR_4) :
   FUNC_3(VAR_1,VAR_3);
  if (VAR_6 < 0) {
   FUNC_1(VAR_1->card->dev, "ali_alloc_voice: err.\n");
   FUNC_5(&VAR_1->voice_alloc);
   return ((void*)0);
  }
  VAR_5 = &(VAR_1->synth.voices[VAR_6]);
  VAR_5->codec = VAR_1;
  VAR_5->use = 1;
  VAR_5->pcm = 1;
  VAR_5->mode = VAR_3;
  FUNC_5(&VAR_1->voice_alloc);
  return VAR_5;
 }
 FUNC_5(&VAR_1->voice_alloc);
 return ((void*)0);
}
