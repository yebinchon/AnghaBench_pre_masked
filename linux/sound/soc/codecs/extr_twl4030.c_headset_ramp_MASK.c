
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {unsigned int sysclk; struct twl4030_codec_data* pdata; } ;
struct twl4030_codec_data {int hs_extmute_gpio; scalar_t__ hs_extmute; } ;
struct snd_soc_component {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct twl4030_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned char FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,int ,unsigned char) ;
 int FUNC_6 (int ,unsigned char,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_7, int VAR_8)
{
 unsigned char VAR_9, VAR_10;
 struct twl4030_priv *VAR_11 = FUNC_2(VAR_7);
 struct twl4030_codec_data *VAR_12 = VAR_11->pdata;

 unsigned int VAR_13[] = {524288, 1048576, 2097152, 4194304,
        8388608, 16777216, 33554432, 67108864};
 unsigned int VAR_14;

 VAR_9 = FUNC_3(VAR_7, VAR_4);
 VAR_10 = FUNC_3(VAR_7, VAR_5);
 VAR_14 = (VAR_13[(VAR_10 & VAR_2) >> 2] /
  VAR_11->sysclk) + 1;



 if (VAR_12 && VAR_12->hs_extmute) {
  if (FUNC_0(VAR_12->hs_extmute_gpio)) {
   FUNC_1(VAR_12->hs_extmute_gpio, 1);
  } else {
   VAR_10 |= VAR_0;
   FUNC_5(VAR_7, VAR_5, VAR_10);
  }
 }

 if (VAR_8) {

  VAR_10 |= VAR_6;
  FUNC_5(VAR_7, VAR_5, VAR_10);

  FUNC_6(VAR_1, VAR_9,
     VAR_4);
  VAR_10 |= VAR_3;
  FUNC_5(VAR_7, VAR_5, VAR_10);

  FUNC_4(VAR_14);
 } else {


  VAR_10 &= ~VAR_3;
  FUNC_5(VAR_7, VAR_5, VAR_10);

  FUNC_4(VAR_14);

  FUNC_6(VAR_1, VAR_9 & (~0x0f),
     VAR_4);

  VAR_10 &= ~VAR_6;
  FUNC_5(VAR_7, VAR_5, VAR_10);
 }


 if (VAR_12 && VAR_12->hs_extmute) {
  if (FUNC_0(VAR_12->hs_extmute_gpio)) {
   FUNC_1(VAR_12->hs_extmute_gpio, 0);
  } else {
   VAR_10 &= ~VAR_0;
   FUNC_5(VAR_7, VAR_5, VAR_10);
  }
 }
}
