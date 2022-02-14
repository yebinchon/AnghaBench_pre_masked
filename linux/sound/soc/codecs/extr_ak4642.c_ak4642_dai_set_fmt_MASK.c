
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 u8 VAR_16;
 u8 VAR_17;

 VAR_16 = VAR_6 | VAR_9;
 VAR_17 = 0;


 switch (VAR_14 & VAR_12) {
 case 131:
  VAR_16 |= VAR_8;
  VAR_17 = VAR_0;
  break;
 case 130:
  break;
 default:
  return -VAR_3;
 }
 FUNC_0(VAR_15, VAR_10, VAR_8 | VAR_6 | VAR_9, VAR_16);
 FUNC_0(VAR_15, VAR_7, VAR_1, VAR_17);


 VAR_16 = 0;
 switch (VAR_14 & VAR_11) {
 case 128:
  VAR_16 = VAR_5;
  break;
 case 129:
  VAR_16 = VAR_4;
  break;



 default:
  return -VAR_3;
 }
 FUNC_0(VAR_15, VAR_7, VAR_2, VAR_16);

 return 0;
}
