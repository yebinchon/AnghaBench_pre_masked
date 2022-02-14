
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hp_pol; struct wm5100_jack_mode* jack_modes; } ;
struct wm5100_priv {int jack_mode; int dev; int regmap; TYPE_1__ pdata; } ;
struct wm5100_jack_mode {int bias; int micd_src; int hp_pol; } ;


 int FUNC_0 (struct wm5100_jack_mode*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct wm5100_priv *VAR_8, int VAR_9)
{
 struct wm5100_jack_mode *VAR_10 = &VAR_8->pdata.jack_modes[VAR_9];

 if (FUNC_1(VAR_9 >= FUNC_0(VAR_8->pdata.jack_modes)))
  return;

 FUNC_3(VAR_8->pdata.hp_pol, VAR_10->hp_pol);
 FUNC_4(VAR_8->regmap, VAR_4,
      VAR_0 |
      VAR_2,
      (VAR_10->bias << VAR_1) |
      VAR_10->micd_src << VAR_3);
 FUNC_4(VAR_8->regmap, VAR_7,
      VAR_5,
      VAR_10->micd_src << VAR_6);

 VAR_8->jack_mode = VAR_9;

 FUNC_2(VAR_8->dev, "Set microphone polarity to %d\n",
  VAR_8->jack_mode);
}
