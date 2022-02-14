
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int dummy; } ;
struct snd_trident_pcm_mixer {int cvol; int rvol; int pan; int vol; struct snd_trident_voice* voice; } ;
struct snd_trident {struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_pcm_substream {size_t number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_trident*,struct snd_trident_pcm_mixer*,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct snd_trident *VAR_5,
           struct snd_trident_voice *VAR_6,
           struct snd_pcm_substream *VAR_7)
{
 struct snd_trident_pcm_mixer *VAR_8;

 if (FUNC_0(!VAR_5 || !VAR_6 || !VAR_7))
  return -VAR_0;
 VAR_8 = &VAR_5->pcm_mixer[VAR_7->number];
 VAR_8->voice = VAR_6;
 VAR_8->vol = VAR_4;
 VAR_8->pan = VAR_2;
 VAR_8->rvol = VAR_3;
 VAR_8->cvol = VAR_1;
 FUNC_1(VAR_5, VAR_8, VAR_7->number, 1);
 return 0;
}
