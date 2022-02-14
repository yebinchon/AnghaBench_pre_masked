
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_card {TYPE_4__* dev; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_10__ {TYPE_3__* codecs; TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct TYPE_8__ {void* of_node; } ;
struct TYPE_7__ {void* of_node; } ;
struct TYPE_6__ {void* of_node; } ;


 struct snd_soc_card VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_0 (TYPE_4__*,struct snd_soc_card*) ;
 void* FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3 = &VAR_0;

 VAR_3->dev = &VAR_2->dev;

 VAR_1[0].cpus->of_node =
  FUNC_1(VAR_2->dev.of_node,
     "marvell,audio-controller", 0);
 VAR_1[0].platforms->of_node = VAR_1[0].cpus->of_node;

 VAR_1[0].codecs->of_node =
  FUNC_1(VAR_2->dev.of_node,
     "marvell,audio-codec", 0);

 VAR_1[1].cpus->of_node = VAR_1[0].cpus->of_node;
 VAR_1[1].platforms->of_node = VAR_1[0].cpus->of_node;

 VAR_1[1].codecs->of_node =
  FUNC_1(VAR_2->dev.of_node,
     "marvell,audio-codec", 1);

 VAR_1[2].cpus->of_node = VAR_1[0].cpus->of_node;
 VAR_1[2].platforms->of_node = VAR_1[0].cpus->of_node;

 VAR_1[2].codecs->of_node =
  FUNC_1(VAR_2->dev.of_node,
     "marvell,audio-codec", 2);

 return FUNC_0(VAR_3->dev, VAR_3);
}
