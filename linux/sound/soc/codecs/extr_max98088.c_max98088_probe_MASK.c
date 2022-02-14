
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98088_priv {unsigned int sysclk; scalar_t__ mic2pre; scalar_t__ mic1pre; scalar_t__ digmic; scalar_t__ ex_mode; scalar_t__ inb_state; scalar_t__ ina_state; struct max98088_cdata* dai; scalar_t__ eq_textcnt; int regmap; } ;
struct max98088_cdata {unsigned int rate; unsigned int fmt; scalar_t__ eq_sel; } ;


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
 int VAR_15 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int ) ;
 struct max98088_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_16)
{
       struct max98088_priv *VAR_17 = FUNC_4(VAR_16);
       struct max98088_cdata *VAR_18;
       int VAR_19 = 0;

       FUNC_3(VAR_17->regmap);



       VAR_17->sysclk = (unsigned)-1;
       VAR_17->eq_textcnt = 0;

       VAR_18 = &VAR_17->dai[0];
       VAR_18->rate = (unsigned)-1;
       VAR_18->fmt = (unsigned)-1;
       VAR_18->eq_sel = 0;

       VAR_18 = &VAR_17->dai[1];
       VAR_18->rate = (unsigned)-1;
       VAR_18->fmt = (unsigned)-1;
       VAR_18->eq_sel = 0;

       VAR_17->ina_state = 0;
       VAR_17->inb_state = 0;
       VAR_17->ex_mode = 0;
       VAR_17->digmic = 0;
       VAR_17->mic1pre = 0;
       VAR_17->mic2pre = 0;

       VAR_19 = FUNC_5(VAR_16, VAR_12);
       if (VAR_19 < 0) {
               FUNC_0(VAR_16->dev, "Failed to read device revision: %d\n",
                       VAR_19);
               goto err_access;
       }
       FUNC_1(VAR_16->dev, "revision %c\n", VAR_19 - 0x40 + 'A');

       FUNC_6(VAR_16, VAR_11, VAR_4);

       FUNC_6(VAR_16, VAR_5, 0x00);

       FUNC_6(VAR_16, VAR_8,
               VAR_0|VAR_2|
               VAR_1|VAR_3);

       FUNC_6(VAR_16, VAR_9, 0xF0);
       FUNC_6(VAR_16, VAR_10, 0x0F);

       FUNC_6(VAR_16, VAR_6,
               VAR_13|VAR_15);

       FUNC_6(VAR_16, VAR_7,
               VAR_14|VAR_15);

       FUNC_2(VAR_16);

err_access:
       return VAR_19;
}
