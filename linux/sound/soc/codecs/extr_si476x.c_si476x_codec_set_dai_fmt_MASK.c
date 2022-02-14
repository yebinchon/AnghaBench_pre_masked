
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {TYPE_1__* component; int dev; } ;
struct si476x_core {int dummy; } ;
struct TYPE_2__ {int dev; } ;


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
 unsigned int VAR_10 ;


 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;



 int FUNC_0 (int ,char*) ;
 struct si476x_core* FUNC_1 (int ) ;
 int FUNC_2 (struct si476x_core*) ;
 int FUNC_3 (struct si476x_core*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_14,
        unsigned int VAR_15)
{
 struct si476x_core *VAR_16 = FUNC_1(VAR_14->dev);
 int VAR_17;
 u16 VAR_18 = 0;

 if ((VAR_15 & VAR_13) != VAR_10)
  return -VAR_0;

 switch (VAR_15 & VAR_11) {
 case 136:
  VAR_18 |= VAR_1;
  break;
 case 135:
  VAR_18 |= VAR_2;
  break;
 case 134:
  VAR_18 |= VAR_3;
  break;
 case 128:
  VAR_18 |= VAR_7;
  break;
 case 131:
  VAR_18 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_11) {
 case 136:
 case 135:
  switch (VAR_15 & VAR_12) {
  case 129:
   break;
  case 132:
   VAR_18 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 134:
 case 128:
 case 131:
  switch (VAR_15 & VAR_12) {
  case 129:
   break;
  case 133:
   VAR_18 |= VAR_4 |
    VAR_5;
   break;
  case 132:
   VAR_18 |= VAR_4;
   break;
  case 130:
   VAR_18 |= VAR_5;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_16);

 VAR_17 = FUNC_4(VAR_14->component, VAR_8,
      VAR_9,
      VAR_18);

 FUNC_3(VAR_16);

 if (VAR_17 < 0) {
  FUNC_0(VAR_14->component->dev, "Failed to set output format\n");
  return VAR_17;
 }

 return 0;
}
