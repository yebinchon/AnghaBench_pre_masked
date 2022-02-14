
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_card {TYPE_4__* dev; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_3__* codecs; TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct TYPE_10__ {void* of_node; int * name; } ;
struct TYPE_9__ {void* of_node; int dai_name; } ;
struct TYPE_8__ {void* of_node; int name; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,struct snd_soc_card*) ;
 void* FUNC_4 (struct device_node*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct device_node *VAR_6 = VAR_3->dev.of_node;
 struct snd_soc_card *VAR_7 = &VAR_1;

 VAR_7->dev = &VAR_3->dev;

 for (VAR_4 = 0; VAR_6 && VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (!VAR_2[VAR_4].cpus->dai_name) {
   VAR_2[VAR_4].cpus->of_node = FUNC_4(VAR_6,
     "samsung,audio-cpu", VAR_4);

   if (!VAR_2[VAR_4].cpus->of_node) {
    FUNC_2(&VAR_3->dev,
    "Property 'samsung,audio-cpu' missing or invalid\n");
    return -VAR_0;
   }
  }
  if (!VAR_2[VAR_4].platforms->name)
   VAR_2[VAR_4].platforms->of_node =
     VAR_2[VAR_4].cpus->of_node;

  VAR_2[VAR_4].codecs->name = ((void*)0);
  VAR_2[VAR_4].codecs->of_node = FUNC_4(VAR_6,
     "samsung,audio-codec", VAR_4);
  if (!VAR_2[0].codecs->of_node) {
   FUNC_2(&VAR_3->dev,
   "Property 'samsung,audio-codec' missing or invalid\n");
   VAR_5 = -VAR_0;
   goto err_put_of_nodes;
  }
 }

 VAR_5 = FUNC_3(VAR_7->dev, VAR_7);
 if (VAR_5) {
  FUNC_2(&VAR_3->dev, "snd_soc_register_card() failed: %d\n", VAR_5);
  goto err_put_of_nodes;
 }
 return 0;

err_put_of_nodes:
 FUNC_1(VAR_7);
 return VAR_5;
}
