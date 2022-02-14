
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_card {TYPE_7__* dev; } ;
struct TYPE_15__ {struct device_node* of_node; } ;
struct platform_device {TYPE_7__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {void* of_node; } ;
struct TYPE_14__ {TYPE_4__ dlc; } ;
struct TYPE_13__ {TYPE_3__* cpus; TYPE_2__* platforms; TYPE_1__* codecs; } ;
struct TYPE_11__ {void* of_node; } ;
struct TYPE_10__ {void* of_node; } ;
struct TYPE_9__ {void* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,char*,...) ;
 int FUNC_1 (TYPE_7__*,struct snd_soc_card*) ;
 void* FUNC_2 (struct device_node*,char*,int ) ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 struct snd_soc_card VAR_3 ;
 int FUNC_3 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 int VAR_5 = 0;
 struct snd_soc_card *VAR_6 = &VAR_3;
 struct device_node *VAR_7 = VAR_4->dev.of_node;


 VAR_6->dev = &VAR_4->dev;

 VAR_2.codecs->of_node = FUNC_2(VAR_7,
   "rockchip,audio-codec", 0);
 if (!VAR_2.codecs->of_node) {
  FUNC_0(&VAR_4->dev,
   "Property 'rockchip,audio-codec' missing or invalid\n");
  return -VAR_0;
 }

 VAR_2.cpus->of_node = FUNC_2(VAR_7,
   "rockchip,i2s-controller", 0);
 if (!VAR_2.cpus->of_node) {
  FUNC_0(&VAR_4->dev,
   "Property 'rockchip,i2s-controller' missing or invalid\n");
  return -VAR_0;
 }

 VAR_2.platforms->of_node = VAR_2.cpus->of_node;

 VAR_1.dlc.of_node = FUNC_2(VAR_7,
   "rockchip,headset-codec", 0);
 if (!VAR_1.dlc.of_node) {
  FUNC_0(&VAR_4->dev,
   "Property 'rockchip,headset-codec' missing/invalid\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_6, "rockchip,model");
 if (VAR_5) {
  FUNC_0(&VAR_4->dev,
   "Soc parse card name failed %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(&VAR_4->dev, VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_4->dev,
   "Soc register card failed %d\n", VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
