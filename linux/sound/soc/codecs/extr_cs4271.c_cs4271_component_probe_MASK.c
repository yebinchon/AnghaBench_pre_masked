
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct cs4271_private {int enable_soft_reset; int regmap; int supplies; } ;
struct cs4271_platform_data {int amutec_eq_bmutec; int enable_soft_reset; } ;
struct TYPE_3__ {int of_node; struct cs4271_platform_data* platform_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ) ;
 struct cs4271_private* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_5)
{
 struct cs4271_private *VAR_6 = FUNC_8(VAR_5);
 struct cs4271_platform_data *VAR_7 = VAR_5->dev->platform_data;
 int VAR_8;
 bool VAR_9 = 0;
 VAR_8 = FUNC_7(FUNC_0(VAR_6->supplies),
        VAR_6->supplies);
 if (VAR_8 < 0) {
  FUNC_2(VAR_5->dev, "Failed to enable regulators: %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_7) {
  VAR_9 = VAR_7->amutec_eq_bmutec;
  VAR_6->enable_soft_reset = VAR_7->enable_soft_reset;
 }


 FUNC_1(VAR_5);

 VAR_8 = FUNC_5(VAR_6->regmap);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_6->regmap, VAR_0,
     VAR_3 | VAR_1,
     VAR_3 | VAR_1);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_6->regmap, VAR_0,
     VAR_3, 0);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_9(85);

 if (VAR_9)
  FUNC_6(VAR_6->regmap, VAR_0,
       VAR_2,
       VAR_2);

 return 0;
}
