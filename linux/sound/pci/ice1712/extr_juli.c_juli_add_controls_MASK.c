
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {TYPE_2__* pcm; int card; struct juli_spec* spec; } ;
struct juli_spec {int ak4114; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {int substream; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,struct snd_kcontrol*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_4 (char*,int ) ;
 struct snd_kcontrol* FUNC_5 (int *,struct snd_ice1712*) ;
 int FUNC_6 (struct snd_ice1712*) ;

__attribute__((used)) static int FUNC_7(struct snd_ice1712 *VAR_5)
{
 struct juli_spec *VAR_6 = VAR_5->spec;
 int VAR_7;
 unsigned int VAR_8;
 struct snd_kcontrol *VAR_9;

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  VAR_7 = FUNC_3(VAR_5->card,
    FUNC_5(&VAR_3[VAR_8], VAR_5));
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_9 = FUNC_4("Master Playback Volume",
           VAR_2);
 if (!VAR_9)
  return -VAR_0;
 FUNC_1(VAR_5->card, VAR_9, VAR_4);
 VAR_7 = FUNC_3(VAR_5->card, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_2(VAR_6->ak4114, ((void*)0),
   VAR_5->pcm->streams[VAR_1].substream);
}
