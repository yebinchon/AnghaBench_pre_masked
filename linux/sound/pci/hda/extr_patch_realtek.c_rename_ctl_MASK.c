
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct hda_codec {int dummy; } ;


 struct snd_kcontrol* FUNC_0 (struct hda_codec*,char const*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, const char *VAR_1,
         const char *VAR_2)
{
 struct snd_kcontrol *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3->id.name, VAR_2);
}
