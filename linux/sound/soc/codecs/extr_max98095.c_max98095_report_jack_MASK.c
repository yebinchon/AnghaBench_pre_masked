
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max98095_priv {scalar_t__ headphone_jack; scalar_t__ mic_jack; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct max98095_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11;
 struct max98095_priv *VAR_13 = FUNC_0(VAR_12);
 unsigned int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;


 VAR_14 = FUNC_1(VAR_12, VAR_2);


 if ((VAR_14 & VAR_3) == 0)
  return VAR_1;


 if ((VAR_14 & VAR_4 || VAR_14 & VAR_5) &&
  VAR_13->headphone_jack)
  VAR_15 |= VAR_7;


 if ((VAR_14 & VAR_6) && VAR_13->mic_jack)
  VAR_16 |= VAR_9;

 if (VAR_13->headphone_jack == VAR_13->mic_jack) {
  FUNC_2(VAR_13->headphone_jack,
     VAR_15 | VAR_16,
     VAR_8);
 } else {
  if (VAR_13->headphone_jack)
   FUNC_2(VAR_13->headphone_jack,
     VAR_15, VAR_7);
  if (VAR_13->mic_jack)
   FUNC_2(VAR_13->mic_jack,
     VAR_16, VAR_9);
 }

 return VAR_0;
}
