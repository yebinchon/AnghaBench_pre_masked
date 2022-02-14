
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_3__* codecs; TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct snd_soc_card {TYPE_4__* dev; struct snd_soc_dai_link* dai_link; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct TYPE_7__ {void* of_node; } ;
struct TYPE_6__ {void* of_node; } ;
struct TYPE_5__ {void* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 void* FUNC_1 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_1)
{
 struct snd_soc_dai_link *VAR_2 = VAR_1->dai_link;
 struct device_node *VAR_3 = VAR_1->dev->of_node;

 VAR_2->cpus->of_node = FUNC_1(VAR_3, "cpu", 0);
 if (!VAR_2->cpus->of_node) {
  FUNC_0(VAR_1->dev, "error getting cpu phandle\n");
  return -VAR_0;
 }
 VAR_2->platforms->of_node = VAR_2->cpus->of_node;

 VAR_2->codecs->of_node = FUNC_1(VAR_3, "codec", 0);
 if (!VAR_2->codecs->of_node) {
  FUNC_0(VAR_1->dev, "error getting codec phandle\n");
  return -VAR_0;
 }

 return 0;
}
