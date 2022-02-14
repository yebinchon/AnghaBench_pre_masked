
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {void* private_value; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int,int ) ;
 struct snd_kcontrol* FUNC_1 (struct snd_ac97*,char*) ;
 int FUNC_2 (struct snd_ac97*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_1)
{
 struct snd_kcontrol *VAR_2 =
  FUNC_1(VAR_1, "3D Control - Center");
 struct snd_kcontrol *VAR_3 =
  FUNC_1(VAR_1, "3D Control - Depth");





 if (VAR_2) {
  VAR_2->private_value =
   FUNC_0(VAR_0, 1, 0x07, 0);
  FUNC_2(VAR_1,
   "3D Control - Center", "3D Control - Width"
  );
 }
 if (VAR_3)
  VAR_3->private_value =
   FUNC_0(VAR_0, 8, 0x03, 0);



 FUNC_2(VAR_1,
  "Master Mono Playback", "Modem Playback"
 );
 FUNC_2(VAR_1,
  "Headphone Playback", "FM Synth Playback"
 );

 return 0;
}
