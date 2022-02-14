
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct snd_ac97*,char*,int *) ;
 int FUNC_1 (struct snd_ac97*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_1)
{
 if (FUNC_0(VAR_1, "Headphone Playback Switch", ((void*)0)) == ((void*)0))
  return -VAR_0;
 FUNC_1(VAR_1, "Master Playback", "Line-Out Playback");
 FUNC_1(VAR_1, "Headphone Playback", "Master Playback");
 return 0;
}
