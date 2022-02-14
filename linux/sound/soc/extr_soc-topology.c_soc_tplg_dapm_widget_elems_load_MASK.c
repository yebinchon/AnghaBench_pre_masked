
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {scalar_t__ pass; int dev; scalar_t__ pos; } ;
struct snd_soc_tplg_hdr {int count; } ;
struct snd_soc_tplg_dapm_widget {int name; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct soc_tplg*,struct snd_soc_tplg_dapm_widget*) ;

__attribute__((used)) static int FUNC_4(struct soc_tplg *VAR_2,
 struct snd_soc_tplg_hdr *VAR_3)
{
 struct snd_soc_tplg_dapm_widget *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_3->count);

 if (VAR_2->pass != VAR_1)
  return 0;

 FUNC_0(VAR_2->dev, "ASoC: adding %d DAPM widgets\n", VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4 = (struct snd_soc_tplg_dapm_widget *) VAR_2->pos;
  if (FUNC_2(VAR_4->size) != sizeof(*VAR_4)) {
   FUNC_1(VAR_2->dev, "ASoC: invalid widget size\n");
   return -VAR_0;
  }

  VAR_5 = FUNC_3(VAR_2, VAR_4);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2->dev, "ASoC: failed to load widget %s\n",
    VAR_4->name);
   return VAR_5;
  }
 }

 return 0;
}
