
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct hda_codec {int dummy; } ;
struct hda_bus {int dummy; } ;


 int FUNC_0 (struct hda_bus*,struct snd_card*,unsigned int,struct hda_codec**) ;
 int FUNC_1 (struct hda_bus*,struct snd_card*,unsigned int,struct hda_codec*) ;

int FUNC_2(struct hda_bus *VAR_0, struct snd_card *VAR_1,
        unsigned int VAR_2, struct hda_codec **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, *VAR_3);
}
