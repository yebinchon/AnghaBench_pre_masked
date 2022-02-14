
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static bool FUNC_4(struct snd_kcontrol *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_3(VAR_1);
 return FUNC_2(VAR_2, FUNC_1(VAR_1),
         FUNC_0(VAR_1)) & VAR_0;
}
