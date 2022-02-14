
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_card {int mixername; } ;
struct snd_at73c213 {TYPE_1__* pcm; struct snd_card* card; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct snd_card*,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_card*,int) ;
 int FUNC_3 (int *,struct snd_at73c213*) ;
 int FUNC_4 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_at73c213 *VAR_2)
{
 struct snd_card *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0) || VAR_2->pcm == ((void*)0))
  return -VAR_0;

 VAR_3 = VAR_2->card;

 FUNC_5(VAR_3->mixername, VAR_2->pcm->name);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = FUNC_1(VAR_3,
    FUNC_3(&VAR_1[VAR_5],
     VAR_2));
  if (VAR_4 < 0)
   goto cleanup;
 }

 return 0;

cleanup:
 for (VAR_5 = 1; VAR_5 < FUNC_0(VAR_1) + 1; VAR_5++) {
  struct snd_kcontrol *VAR_6;
  VAR_6 = FUNC_2(VAR_3, VAR_5);
  if (VAR_6)
   FUNC_4(VAR_3, VAR_6);
 }
 return VAR_4;
}
