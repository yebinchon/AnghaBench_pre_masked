
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct hda_codec {int dummy; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2)
{
 struct snd_kcontrol_new VAR_3 =
  FUNC_0("ZxR: 600 Ohm Gain",
        VAR_1, 1, VAR_0);

 return FUNC_2(VAR_2, VAR_1,
    FUNC_1(&VAR_3, VAR_2));
}
