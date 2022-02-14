
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct snd_soc_card {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 struct snd_soc_card VAR_1 ;
 struct snd_soc_dai_link VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct snd_soc_card*,char*) ;
 int FUNC_4 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 struct device_node *VAR_5, *VAR_6;
 struct snd_soc_card *VAR_7 = &VAR_1;
 struct snd_soc_dai_link *VAR_8 = &VAR_2;
 int VAR_9;

 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "only device tree supported\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_7, "atmel,model");
 if (VAR_9) {
  FUNC_0(&VAR_3->dev, "failed to parse card name\n");
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_7, "atmel,audio-routing");
 if (VAR_9) {
  FUNC_0(&VAR_3->dev, "failed to parse audio routing\n");
  return VAR_9;
 }

 VAR_6 = FUNC_2(VAR_4, "atmel,ssc-controller", 0);
 if (!VAR_6) {
  FUNC_0(&VAR_3->dev, "failed to get dai and pcm info\n");
  VAR_9 = -VAR_0;
  return VAR_9;
 }
 VAR_8->cpus->of_node = VAR_6;
 VAR_8->platforms->of_node = VAR_6;
 FUNC_1(VAR_6);

 VAR_5 = FUNC_2(VAR_4, "atmel,audio-codec", 0);
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "failed to get codec info\n");
  VAR_9 = -VAR_0;
  return VAR_9;
 }
 VAR_8->codecs->of_node = VAR_5;
 FUNC_1(VAR_5);

 return 0;
}
