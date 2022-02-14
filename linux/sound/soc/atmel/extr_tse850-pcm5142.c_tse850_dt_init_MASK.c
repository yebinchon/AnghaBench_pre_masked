
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;
 struct snd_soc_dai_link VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 struct device_node *VAR_4, *VAR_5;
 struct snd_soc_dai_link *VAR_6 = &VAR_1;

 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "only device tree supported\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_3, "axentia,cpu-dai", 0);
 if (!VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to get cpu dai\n");
  return -VAR_0;
 }
 VAR_6->cpus->of_node = VAR_5;
 VAR_6->platforms->of_node = VAR_5;
 FUNC_1(VAR_5);

 VAR_4 = FUNC_2(VAR_3, "axentia,audio-codec", 0);
 if (!VAR_4) {
  FUNC_0(&VAR_2->dev, "failed to get codec info\n");
  return -VAR_0;
 }
 VAR_6->codecs->of_node = VAR_4;
 FUNC_1(VAR_4);

 return 0;
}
