
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ak4642_priv {TYPE_1__* drvdata; } ;
struct TYPE_2__ {int extended_frequencies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ak4642_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7,
 int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_7->component;
 struct ak4642_priv *VAR_12 = FUNC_0(VAR_11);
 u8 VAR_13;
 int VAR_14 = 0;

 switch (VAR_9) {
 case 11289600:
  VAR_13 = VAR_4;
  break;
 case 12288000:
  VAR_13 = VAR_4 | VAR_2;
  break;
 case 12000000:
  VAR_13 = VAR_4 | VAR_3;
  break;
 case 24000000:
  VAR_13 = VAR_4 | VAR_3 | VAR_2;
  break;
 case 13500000:
  VAR_13 = VAR_5 | VAR_4;
  break;
 case 27000000:
  VAR_13 = VAR_5 | VAR_4 | VAR_2;
  break;
 case 19200000:
  VAR_13 = VAR_5;
  VAR_14 = 1;
  break;
 case 13000000:
  VAR_13 = VAR_5 | VAR_4 | VAR_3;
  VAR_14 = 1;
  break;
 case 26000000:
  VAR_13 = VAR_5 | VAR_4 | VAR_3 | VAR_2;
  VAR_14 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_14 && !VAR_12->drvdata->extended_frequencies)
  return -VAR_0;

 FUNC_1(VAR_11, VAR_1, VAR_6, VAR_13);

 return 0;
}
