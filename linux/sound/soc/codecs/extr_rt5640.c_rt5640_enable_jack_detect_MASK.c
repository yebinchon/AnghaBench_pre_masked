
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int status; } ;
struct snd_soc_component {int dummy; } ;
struct rt5640_priv {int jd_src; int ovcd_sf; int ovcd_th; int jack_work; int irq; struct snd_soc_jack* jack; scalar_t__ jd_inverted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5640_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,scalar_t__,int) ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_24,
          struct snd_soc_jack *VAR_25)
{
 struct rt5640_priv *VAR_26 = FUNC_4(VAR_24);


 FUNC_5(VAR_24, VAR_12,
  VAR_13, VAR_26->jd_src);


 FUNC_5(VAR_24, VAR_7,
  VAR_6, VAR_5);


 FUNC_5(VAR_24, VAR_8,
  VAR_3, VAR_4);


 FUNC_6(VAR_24, VAR_1, 0x3f41);


 FUNC_6(VAR_24, VAR_2, 0x4001);

 FUNC_6(VAR_24, VAR_21 + VAR_0,
  0xa800 | VAR_26->ovcd_sf);

 FUNC_5(VAR_24, VAR_20,
  VAR_19 | VAR_18,
  VAR_26->ovcd_th | VAR_17);
 FUNC_5(VAR_24, VAR_10,
  VAR_16, VAR_15);







 if (VAR_26->jd_inverted)
  FUNC_6(VAR_24, VAR_9,
     VAR_11);
 else
  FUNC_6(VAR_24, VAR_9,
     VAR_11 | VAR_14);

 VAR_26->jack = VAR_25;
 if (VAR_26->jack->status & VAR_22) {
  FUNC_2(VAR_24);
  FUNC_3(VAR_24);
 }

 FUNC_0(VAR_26->irq);

 FUNC_1(VAR_23, &VAR_26->jack_work);
}
