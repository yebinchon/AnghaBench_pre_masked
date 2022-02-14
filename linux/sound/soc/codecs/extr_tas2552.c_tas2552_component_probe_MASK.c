
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas2552_data {int supplies; int enable_gpio; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 struct tas2552_data* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_15)
{
 struct tas2552_data *VAR_16 = FUNC_7(VAR_15);
 int VAR_17;

 VAR_16->component = VAR_15;

 VAR_17 = FUNC_6(FUNC_0(VAR_16->supplies),
        VAR_16->supplies);

 if (VAR_17 != 0) {
  FUNC_2(VAR_15->dev, "Failed to enable supplies: %d\n",
   VAR_17);
  return VAR_17;
 }

 FUNC_3(VAR_16->enable_gpio, 1);

 VAR_17 = FUNC_4(VAR_15->dev);
 if (VAR_17 < 0) {
  FUNC_2(VAR_15->dev, "Enabling device failed: %d\n",
   VAR_17);
  goto probe_fail;
 }

 FUNC_8(VAR_15, VAR_5, VAR_12, VAR_12);
 FUNC_9(VAR_15, VAR_7, VAR_10 |
         VAR_9);
 FUNC_9(VAR_15, VAR_13,
        VAR_14 |
        FUNC_1(VAR_8));
 FUNC_9(VAR_15, VAR_3, VAR_0 |
           VAR_2);

 FUNC_9(VAR_15, VAR_6, VAR_4 | VAR_1 |
         VAR_11);

 return 0;

probe_fail:
 FUNC_3(VAR_16->enable_gpio, 0);

 FUNC_5(FUNC_0(VAR_16->supplies),
     VAR_16->supplies);
 return VAR_17;
}
