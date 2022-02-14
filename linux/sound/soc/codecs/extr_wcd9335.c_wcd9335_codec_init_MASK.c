
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wcd9335_codec {int regmap; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_3__ {int val; int mask; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wcd9335_codec* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_6)
{
 struct wcd9335_codec *VAR_7 = FUNC_1(VAR_6->dev);
 int VAR_8;


 FUNC_2(VAR_7->regmap, VAR_0,
    VAR_1, 0);

 FUNC_2(VAR_7->regmap, VAR_2,
    VAR_4,
    VAR_3);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  FUNC_3(VAR_6,
     VAR_5[VAR_8].reg,
     VAR_5[VAR_8].mask,
     VAR_5[VAR_8].val);

 FUNC_4(VAR_6);
}
