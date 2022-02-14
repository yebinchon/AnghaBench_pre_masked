
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {void* put; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct snd_kcontrol* FUNC_0 (struct snd_ac97*,char*,int *) ;
 int FUNC_1 (struct snd_ac97*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_2)
{
 struct snd_kcontrol *VAR_3 = FUNC_0(VAR_2, "Master Playback Switch", ((void*)0));
 struct snd_kcontrol *VAR_4 = FUNC_0(VAR_2, "Master Playback Volume", ((void*)0));
 if (! VAR_3 || ! VAR_4)
  return -VAR_0;
 VAR_3->put = VAR_1;
 VAR_4->put = VAR_1;
 FUNC_1(VAR_2, "Headphone Playback", "Switch");
 FUNC_1(VAR_2, "Headphone Playback", "Volume");
 return 0;
}
