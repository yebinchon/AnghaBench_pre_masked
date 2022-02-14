
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int put; } ;
struct snd_ac97 {int scaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_kcontrol* FUNC_0 (struct snd_ac97*,char*,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct snd_ac97*,char*,int *) ;
 int FUNC_2 (struct snd_ac97*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_5)
{
 struct snd_kcontrol *VAR_6 = FUNC_0(VAR_5, "Master Playback Switch", ((void*)0));
 if (! VAR_6)
  return -VAR_3;
 VAR_6->put = VAR_4;
 FUNC_1(VAR_5, "External Amplifier", ((void*)0));
 FUNC_2(
  VAR_5, VAR_1,
  VAR_0, VAR_0
 );
 VAR_5->scaps |= VAR_2;
 return 0;
}
