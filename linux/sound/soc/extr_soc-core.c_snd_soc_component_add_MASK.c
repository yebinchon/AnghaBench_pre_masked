
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int list; scalar_t__ regmap; int dev; TYPE_1__* driver; } ;
struct TYPE_2__ {int read; int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_2)
{
 FUNC_2(&VAR_0);

 if (!VAR_2->driver->write && !VAR_2->driver->read) {
  if (!VAR_2->regmap)
   VAR_2->regmap = FUNC_0(VAR_2->dev,
          ((void*)0));
  if (VAR_2->regmap)
   FUNC_4(VAR_2);
 }


 FUNC_1(&VAR_2->list, &VAR_1);

 FUNC_3(&VAR_0);
}
