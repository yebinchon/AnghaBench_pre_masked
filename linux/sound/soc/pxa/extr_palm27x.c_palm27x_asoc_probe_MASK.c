
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct palm27x_asoc_info {int jack_gpio; } ;
struct TYPE_7__ {int gpio; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 int VAR_4;

 if (!(FUNC_5() || FUNC_3() ||
  FUNC_2() || FUNC_4()))
  return -VAR_0;

 if (!VAR_3->dev.platform_data) {
  FUNC_0(&VAR_3->dev, "please supply platform_data\n");
  return -VAR_0;
 }

 VAR_1[0].gpio = ((struct palm27x_asoc_info *)
   (VAR_3->dev.platform_data))->jack_gpio;

 VAR_2.dev = &VAR_3->dev;

 VAR_4 = FUNC_1(&VAR_3->dev, &VAR_2);
 if (VAR_4)
  FUNC_0(&VAR_3->dev, "snd_soc_register_card() failed: %d\n",
   VAR_4);
 return VAR_4;
}
