
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_component {int dummy; } ;
struct sgtl5000_priv {int lrclk_strength; int sclk_strength; unsigned int micbias_resistor; unsigned int micbias_voltage; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int FUNC_0 (struct snd_soc_component*) ;
 struct sgtl5000_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_23)
{
 int VAR_24;
 u16 VAR_25;
 struct sgtl5000_priv *VAR_26 = FUNC_1(VAR_23);
 unsigned int VAR_27 = VAR_19 | VAR_1;


 VAR_24 = FUNC_0(VAR_23);
 if (VAR_24)
  goto err;


 FUNC_2(VAR_23, VAR_11,
    VAR_22, VAR_22);


 FUNC_3(VAR_23, VAR_12, 0);

 FUNC_3(VAR_23, VAR_8,
   VAR_0 | VAR_13);


 FUNC_3(VAR_23, VAR_6,
   VAR_16 |
   VAR_15 |
   VAR_14);

 VAR_25 = ((VAR_26->lrclk_strength) << VAR_20 |
        (VAR_26->sclk_strength) << VAR_21 |
        0x1f);
 FUNC_3(VAR_23, VAR_10, VAR_25);

 FUNC_2(VAR_23, VAR_7,
  VAR_27, VAR_27);

 FUNC_2(VAR_23, VAR_9,
   VAR_2,
   VAR_26->micbias_resistor << VAR_3);

 FUNC_2(VAR_23, VAR_9,
   VAR_4,
   VAR_26->micbias_voltage << VAR_5);





 FUNC_3(VAR_23, VAR_17, VAR_18);


 FUNC_2(VAR_23, VAR_6,
  VAR_14 | VAR_15, 0);

 return 0;

err:
 return VAR_24;
}
