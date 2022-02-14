
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct twl6040_data {scalar_t__ plug_irq; int mutex; TYPE_1__ hs_jack; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 struct twl6040_data* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (int,int *,int ,int,char*,struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,struct twl6040_data*) ;
 struct platform_device* FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_7)
{
 struct twl6040_data *VAR_8;
 struct platform_device *VAR_9 = FUNC_8(VAR_7->dev);
 int VAR_10 = 0;

 VAR_8 = FUNC_2(VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_7, VAR_8);

 VAR_8->component = VAR_7;

 VAR_8->plug_irq = FUNC_4(VAR_9, 0);
 if (VAR_8->plug_irq < 0)
  return VAR_8->plug_irq;

 FUNC_0(&VAR_8->hs_jack.work, VAR_5);

 FUNC_3(&VAR_8->mutex);

 VAR_10 = FUNC_5(VAR_8->plug_irq, ((void*)0),
     VAR_6,
     VAR_2 | VAR_3,
     "twl6040_irq_plug", VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "PLUG IRQ request failed: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_6(VAR_7, VAR_4);
 FUNC_9(VAR_7);

 return 0;
}
