
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


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

 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_13, int VAR_14, int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_13->component;
 u16 VAR_17;

 switch (VAR_14) {
 case 133:
  VAR_17 = FUNC_0(VAR_16, VAR_3) &
      ~VAR_2;
  FUNC_1(VAR_16, VAR_3, VAR_17 | VAR_15);
  break;
 case 130:
  VAR_17 = FUNC_0(VAR_16, VAR_9) &
      ~VAR_8;
  FUNC_1(VAR_16, VAR_9, VAR_17 | VAR_15);
  break;
 case 132:
  VAR_17 = FUNC_0(VAR_16, VAR_6) &
      ~VAR_5;
  FUNC_1(VAR_16, VAR_6, VAR_17 | VAR_15);
  break;
 case 129:
  VAR_17 = FUNC_0(VAR_16, VAR_6) &
      ~VAR_12;
  FUNC_1(VAR_16, VAR_6, VAR_17 | VAR_15);
  break;
 case 128:
  VAR_17 = FUNC_0(VAR_16, VAR_6) &
      ~VAR_11;
  FUNC_1(VAR_16, VAR_6, VAR_17 | VAR_15);
  break;
 case 131:
  VAR_17 = FUNC_0(VAR_16, VAR_10) &
      ~VAR_7;
  FUNC_1(VAR_16, VAR_10, VAR_17 | VAR_15);
  break;
 case 134:
  VAR_17 = FUNC_0(VAR_16, VAR_4) &
      ~VAR_1;
  FUNC_1(VAR_16, VAR_4, VAR_17 | VAR_15);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
