
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
typedef enum ec_i2s_config { ____Placeholder_ec_i2s_config } ec_i2s_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 unsigned int VAR_6 ;

 unsigned int VAR_7 ;

 unsigned int VAR_8 ;


 int FUNC_0 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_9, unsigned int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_9->component;
 enum ec_i2s_config VAR_12;

 switch (VAR_10 & VAR_8) {
 case 134:
  break;
 default:
  return -VAR_5;
 }

 switch (VAR_10 & VAR_7) {
 case 129:
  break;
 default:
  return -VAR_5;
 }

 switch (VAR_10 & VAR_6) {
 case 131:
  VAR_12 = VAR_0;
  break;

 case 128:
  VAR_12 = VAR_4;
  break;

 case 130:
  VAR_12 = VAR_1;
  break;

 case 133:
  VAR_12 = VAR_2;
  break;

 case 132:
  VAR_12 = VAR_3;
  break;

 default:
  return -VAR_5;
 }

 return FUNC_0(VAR_11, VAR_12);
}
