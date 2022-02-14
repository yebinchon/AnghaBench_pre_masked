
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct dmic {scalar_t__ wakeup_delay; scalar_t__ modeswitch_delay; int gpio_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__*) ;
 int FUNC_3 (int ,char*,int ) ;
 struct dmic* FUNC_4 (int ,int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct snd_soc_component*,struct dmic*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_6)
{
 struct dmic *VAR_7;

 VAR_7 = FUNC_4(VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->gpio_en = FUNC_3(VAR_6->dev,
      "dmicen", VAR_2);
 if (FUNC_0(VAR_7->gpio_en))
  return FUNC_1(VAR_7->gpio_en);

 FUNC_2(VAR_6->dev, "wakeup-delay-ms",
     &VAR_7->wakeup_delay);
 FUNC_2(VAR_6->dev, "modeswitch-delay-ms",
     &VAR_7->modeswitch_delay);
 if (VAR_5)
  VAR_7->wakeup_delay = VAR_5;
 if (VAR_4)
  VAR_7->modeswitch_delay = VAR_4;

 if (VAR_7->modeswitch_delay > VAR_3)
  VAR_7->modeswitch_delay = VAR_3;

 FUNC_5(VAR_6, VAR_7);

 return 0;
}
