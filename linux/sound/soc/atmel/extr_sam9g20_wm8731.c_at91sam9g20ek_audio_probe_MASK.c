
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
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_10__ {TYPE_3__* platforms; TYPE_2__* cpus; TYPE_1__* codecs; } ;
struct TYPE_8__ {struct device_node* of_node; int * name; } ;
struct TYPE_7__ {struct device_node* of_node; int * dai_name; } ;
struct TYPE_6__ {struct device_node* of_node; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_2 ;
 int FUNC_1 (struct clk*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct clk* FUNC_4 (int *,char*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*,struct clk*) ;
 int FUNC_7 (struct clk*,int ) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 struct clk* VAR_4 ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 struct snd_soc_card VAR_5 ;
 int FUNC_11 (struct snd_soc_card*,char*) ;
 int FUNC_12 (struct snd_soc_card*,char*) ;
 int FUNC_13 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct device_node *VAR_8, *VAR_9;
 struct clk *VAR_10;
 struct snd_soc_card *VAR_11 = &VAR_5;
 int VAR_12;

 if (!VAR_7) {
  return -VAR_1;
 }

 VAR_12 = FUNC_3(0);
 if (VAR_12) {
  FUNC_8(&VAR_6->dev, "ssc channel is not valid\n");
  return -VAR_0;
 }




 VAR_4 = FUNC_4(((void*)0), "pck0");
 if (FUNC_0(VAR_4)) {
  FUNC_8(&VAR_6->dev, "Failed to get MCLK\n");
  VAR_12 = FUNC_1(VAR_4);
  goto err;
 }

 VAR_10 = FUNC_4(((void*)0), "pllb");
 if (FUNC_0(VAR_10)) {
  FUNC_8(&VAR_6->dev, "Failed to get PLLB\n");
  VAR_12 = FUNC_1(VAR_10);
  goto err_mclk;
 }
 VAR_12 = FUNC_6(VAR_4, VAR_10);
 FUNC_5(VAR_10);
 if (VAR_12 != 0) {
  FUNC_8(&VAR_6->dev, "Failed to set MCLK parent\n");
  goto err_mclk;
 }

 FUNC_7(VAR_4, VAR_2);

 VAR_11->dev = &VAR_6->dev;


 VAR_12 = FUNC_12(VAR_11, "atmel,model");
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_11(VAR_11,
  "atmel,audio-routing");
 if (VAR_12)
  goto err;


 VAR_3.codecs->name = ((void*)0);
 VAR_8 = FUNC_10(VAR_7, "atmel,audio-codec", 0);
 if (!VAR_8) {
  FUNC_8(&VAR_6->dev, "codec info missing\n");
  return -VAR_0;
 }
 VAR_3.codecs->of_node = VAR_8;


 VAR_3.cpus->dai_name = ((void*)0);
 VAR_3.platforms->name = ((void*)0);
 VAR_9 = FUNC_10(VAR_7, "atmel,ssc-controller", 0);
 if (!VAR_9) {
  FUNC_8(&VAR_6->dev, "dai and pcm info missing\n");
  return -VAR_0;
 }
 VAR_3.cpus->of_node = VAR_9;
 VAR_3.platforms->of_node = VAR_9;

 FUNC_9(VAR_8);
 FUNC_9(VAR_9);

 VAR_12 = FUNC_13(VAR_11);
 if (VAR_12) {
  FUNC_8(&VAR_6->dev, "snd_soc_register_card() failed\n");
 }

 return VAR_12;

err_mclk:
 FUNC_5(VAR_4);
 VAR_4 = ((void*)0);
err:
 FUNC_2(0);
 return VAR_12;
}
