
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_card {TYPE_5__* dev; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {TYPE_3__* codecs; TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct TYPE_9__ {int * of_node; } ;
struct TYPE_8__ {int * of_node; } ;
struct TYPE_7__ {int * of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (TYPE_5__*,struct snd_soc_card*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct device_node*,char*,int ) ;
 TYPE_4__ VAR_1 ;
 struct snd_soc_card VAR_2 ;
 int FUNC_4 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4 = 0;
 struct snd_soc_card *VAR_5 = &VAR_2;
 struct device_node *VAR_6 = VAR_3->dev.of_node;


 VAR_5->dev = &VAR_3->dev;

 VAR_1.codecs->of_node = FUNC_3(VAR_6,
   "rockchip,audio-codec", 0);
 if (!VAR_1.codecs->of_node) {
  FUNC_0(&VAR_3->dev,
   "Property 'rockchip,audio-codec' missing or invalid\n");
  return -VAR_0;
 }

 VAR_1.cpus->of_node = FUNC_3(VAR_6,
   "rockchip,i2s-controller", 0);
 if (!VAR_1.cpus->of_node) {
  FUNC_0(&VAR_3->dev,
   "Property 'rockchip,i2s-controller' missing or invalid\n");
  VAR_4 = -VAR_0;
  goto put_codec_of_node;
 }

 VAR_1.platforms->of_node = VAR_1.cpus->of_node;

 VAR_4 = FUNC_4(VAR_5, "rockchip,model");
 if (VAR_4) {
  FUNC_0(&VAR_3->dev,
   "Soc parse card name failed %d\n", VAR_4);
  goto put_cpu_of_node;
 }

 VAR_4 = FUNC_1(&VAR_3->dev, VAR_5);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev,
   "Soc register card failed %d\n", VAR_4);
  goto put_cpu_of_node;
 }

 return VAR_4;

put_cpu_of_node:
 FUNC_2(VAR_1.cpus->of_node);
 VAR_1.cpus->of_node = ((void*)0);
put_codec_of_node:
 FUNC_2(VAR_1.codecs->of_node);
 VAR_1.codecs->of_node = ((void*)0);

 return VAR_4;
}
