
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct special_params {int * ctl_id_sync; } ;
struct snd_kcontrol {int id; } ;
struct snd_bebob {int card; struct special_params* maudio_special_quirk; } ;


 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct snd_bebob*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct snd_bebob *VAR_4)
{
 struct snd_kcontrol *VAR_5;
 struct special_params *VAR_6 = VAR_4->maudio_special_quirk;
 int VAR_7;

 VAR_5 = FUNC_1(&VAR_0, VAR_4);
 VAR_7 = FUNC_0(VAR_4->card, VAR_5);
 if (VAR_7 < 0)
  goto end;

 VAR_5 = FUNC_1(&VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_4->card, VAR_5);
 if (VAR_7 < 0)
  goto end;
 VAR_6->ctl_id_sync = &VAR_5->id;

 VAR_5 = FUNC_1(&VAR_1, VAR_4);
 VAR_7 = FUNC_0(VAR_4->card, VAR_5);
 if (VAR_7 < 0)
  goto end;

 VAR_5 = FUNC_1(&VAR_2, VAR_4);
 VAR_7 = FUNC_0(VAR_4->card, VAR_5);
end:
 return VAR_7;
}
