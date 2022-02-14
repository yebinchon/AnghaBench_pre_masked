
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs42l73_private {TYPE_1__* config; } ;
struct TYPE_2__ {int spc; int mmcc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;




 unsigned int VAR_8 ;

 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_2 (int ,char*) ;
 struct cs42l73_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 struct cs42l73_private *VAR_16 = FUNC_3(VAR_15);
 u8 VAR_17 = VAR_13->id;
 unsigned int VAR_18, VAR_19;
 u8 VAR_20, VAR_21;

 VAR_20 = FUNC_4(VAR_15, FUNC_1(VAR_17));
 VAR_21 = FUNC_4(VAR_15, FUNC_0(VAR_17));

 switch (VAR_14 & VAR_12) {
 case 132:
  VAR_21 |= VAR_1;
  break;

 case 131:
  VAR_21 &= ~VAR_1;
  break;

 default:
  return -VAR_7;
 }

 VAR_19 = (VAR_14 & VAR_8);
 VAR_18 = (VAR_14 & VAR_11);

 switch (VAR_19) {
 case 128:
  VAR_20 &= ~VAR_6;
  break;
 case 130:
 case 129:
  if (VAR_21 & VAR_1) {
   FUNC_2(VAR_15->dev,
    "PCM format in slave mode only\n");
   return -VAR_7;
  }
  if (VAR_17 == VAR_0) {
   FUNC_2(VAR_15->dev,
    "PCM format is not supported on ASP port\n");
   return -VAR_7;
  }
  VAR_20 |= VAR_6;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_20 & VAR_6) {

  VAR_20 &= ~(VAR_5 | VAR_2);
  switch (VAR_19) {
  case 129:
   if (VAR_18 == VAR_9)
    VAR_20 |= VAR_3;
   if (VAR_18 == VAR_10)
    VAR_20 |= VAR_4;
  break;
  case 130:
   if (VAR_18 == VAR_9)
    VAR_20 |= VAR_4;
   break;
  default:
   return -VAR_7;
  }
 }

 VAR_16->config[VAR_17].spc = VAR_20;
 VAR_16->config[VAR_17].mmcc = VAR_21;

 return 0;
}
