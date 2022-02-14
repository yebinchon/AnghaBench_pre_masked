
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adav80x {int pll_src; int regmap; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;



 int VAR_4 ;
 int FUNC_8 (int ,int ,unsigned int,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_9 (struct snd_soc_component*) ;
 struct adav80x* FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_5, int VAR_6,
  int VAR_7, unsigned int VAR_8, unsigned int VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = FUNC_9(VAR_5);
 struct adav80x *VAR_11 = FUNC_10(VAR_5);
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;

 switch (VAR_7) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  return -VAR_4;
 }

 if (!VAR_9)
  return 0;

 switch (VAR_8) {
 case 27000000:
  break;
 case 54000000:
  if (VAR_7 == 129) {
   VAR_12 |= VAR_2;
   break;
  }

 default:
  return -VAR_4;
 }

 if (VAR_9 > 12288000) {
  VAR_13 |= FUNC_3(VAR_6);
  VAR_9 /= 2;
 }


 switch (VAR_9) {
 case 8192000:
  VAR_13 |= FUNC_4(VAR_6);
  break;
 case 11289600:
  VAR_13 |= FUNC_5(VAR_6);
  break;
 case 12288000:
  VAR_13 |= FUNC_6(VAR_6);
  break;
 default:
  return -VAR_4;
 }

 FUNC_8(VAR_11->regmap, VAR_1,
   VAR_2, VAR_12);
 FUNC_8(VAR_11->regmap, VAR_3,
   FUNC_7(VAR_6), VAR_13);

 if (VAR_7 != VAR_11->pll_src) {
  if (VAR_7 == 130)
   VAR_14 = FUNC_1(VAR_6);
  else
   VAR_14 = FUNC_2(VAR_6);

  FUNC_8(VAR_11->regmap, VAR_0,
    FUNC_0(VAR_6), VAR_14);

  VAR_11->pll_src = VAR_7;

  FUNC_11(VAR_10);
 }

 return 0;
}
