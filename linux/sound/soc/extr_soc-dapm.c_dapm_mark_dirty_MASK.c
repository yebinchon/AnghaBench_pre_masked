
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {TYPE_2__* dapm; int dirty; int name; } ;
struct TYPE_4__ {TYPE_1__* card; int dev; } ;
struct TYPE_3__ {int dapm_dirty; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (int ,char*,int ,char const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dapm_widget *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->dapm);

 if (!FUNC_1(VAR_0)) {
  FUNC_2(VAR_0->dapm->dev, "Marking %s dirty due to %s\n",
    VAR_0->name, VAR_1);
  FUNC_3(&VAR_0->dirty, &VAR_0->dapm->card->dapm_dirty);
 }
}
