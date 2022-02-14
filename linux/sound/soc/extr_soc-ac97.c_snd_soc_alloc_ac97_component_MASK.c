
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_component {int name; TYPE_2__* card; } ;
struct TYPE_7__ {int release; int parent; int * bus; } ;
struct snd_ac97 {TYPE_3__ dev; scalar_t__ num; int * bus; } ;
struct TYPE_6__ {TYPE_1__* snd_card; int dev; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 struct snd_ac97* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 struct snd_ac97* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

struct snd_ac97 *FUNC_4(struct snd_soc_component *VAR_5)
{
 struct snd_ac97 *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct snd_ac97), VAR_1);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_6->bus = &VAR_3;
 VAR_6->num = 0;

 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.parent = VAR_5->card->dev;
 VAR_6->dev.release = VAR_4;

 FUNC_1(&VAR_6->dev, "%d-%d:%s",
       VAR_5->card->snd_card->number, 0,
       VAR_5->name);

 FUNC_2(&VAR_6->dev);

 return VAR_6;
}
