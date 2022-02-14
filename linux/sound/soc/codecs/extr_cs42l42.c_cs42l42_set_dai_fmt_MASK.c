
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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


 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;


 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 u32 VAR_17 = 0;

 switch (VAR_15 & VAR_13) {
 case 135:
  VAR_17 |= VAR_3 <<
    VAR_5;
  break;
 case 134:
  VAR_17 |= VAR_9 <<
    VAR_5;
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_11) {
 case 133:
 case 130:
  break;
 default:
  return -VAR_10;
 }


 switch (VAR_15 & VAR_12) {
 case 128:
  break;
 case 129:
  VAR_17 |= VAR_6 <<
    VAR_2;
  break;
 case 131:
  VAR_17 |= VAR_6 <<
    VAR_8;
  break;
 case 132:
  VAR_17 |= VAR_6 <<
    VAR_2;
  VAR_17 |= VAR_6 <<
    VAR_8;
  break;
 }

 FUNC_0(VAR_16, VAR_0,
    VAR_4 |
    VAR_7 |
    VAR_1, VAR_17);

 return 0;
}
