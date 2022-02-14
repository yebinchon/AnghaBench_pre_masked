
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component_driver {int dummy; } ;
struct snd_soc_component {struct snd_soc_component_driver const* driver; struct device* dev; int name; int id; int io_mutex; int card_list; int dobj_list; int dai_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1,
 const struct snd_soc_component_driver *VAR_2, struct device *VAR_3)
{
 FUNC_0(&VAR_1->dai_list);
 FUNC_0(&VAR_1->dobj_list);
 FUNC_0(&VAR_1->card_list);
 FUNC_3(&VAR_1->io_mutex);

 VAR_1->name = FUNC_2(VAR_3, &VAR_1->id);
 if (!VAR_1->name) {
  FUNC_1(VAR_3, "ASoC: Failed to allocate name\n");
  return -VAR_0;
 }

 VAR_1->dev = VAR_3;
 VAR_1->driver = VAR_2;

 return 0;
}
