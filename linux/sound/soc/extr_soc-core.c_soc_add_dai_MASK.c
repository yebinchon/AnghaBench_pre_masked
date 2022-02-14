
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {scalar_t__ id; int * ops; int * name; } ;
struct snd_soc_dai {scalar_t__ id; int * name; int list; struct snd_soc_dai_driver* driver; struct device* dev; struct snd_soc_component* component; } ;
struct snd_soc_component {scalar_t__ num_dai; int dai_list; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int *) ;
 int * FUNC_1 (struct device*) ;
 int * FUNC_2 (struct device*,struct snd_soc_dai_driver*) ;
 int * FUNC_3 (struct device*,scalar_t__*) ;
 int FUNC_4 (struct snd_soc_dai*) ;
 struct snd_soc_dai* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct snd_soc_dai *FUNC_7(struct snd_soc_component *VAR_2,
 struct snd_soc_dai_driver *VAR_3,
 bool VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 struct snd_soc_dai *VAR_6;

 FUNC_0(VAR_5, "ASoC: dynamically register DAI %s\n", FUNC_1(VAR_5));

 VAR_6 = FUNC_5(sizeof(struct snd_soc_dai), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 if (VAR_4 &&
     (VAR_3->id == 0 || VAR_3->name == ((void*)0))) {
  VAR_6->name = FUNC_3(VAR_5, &VAR_6->id);
 } else {
  VAR_6->name = FUNC_2(VAR_5, VAR_3);
  if (VAR_3->id)
   VAR_6->id = VAR_3->id;
  else
   VAR_6->id = VAR_2->num_dai;
 }
 if (VAR_6->name == ((void*)0)) {
  FUNC_4(VAR_6);
  return ((void*)0);
 }

 VAR_6->component = VAR_2;
 VAR_6->dev = VAR_5;
 VAR_6->driver = VAR_3;
 if (!VAR_6->driver->ops)
  VAR_6->driver->ops = &VAR_1;


 FUNC_6(&VAR_6->list, &VAR_2->dai_list);
 VAR_2->num_dai++;

 FUNC_0(VAR_5, "ASoC: Registered DAI '%s'\n", VAR_6->name);
 return VAR_6;
}
