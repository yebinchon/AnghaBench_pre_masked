
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;


 unsigned int VAR_12 ;

 int VAR_13 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14,
  unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 int VAR_17;


 VAR_17 = FUNC_0(VAR_16, VAR_13);
 VAR_17 &= ~(VAR_3 | VAR_9 | VAR_7);

 switch (VAR_15 & VAR_11) {
 case 130:
  VAR_17 |= VAR_1 | VAR_5;
  break;
 case 129:
  VAR_17 |= VAR_2 | VAR_6;
  break;
 case 128:
  VAR_17 |= VAR_4 | VAR_8;
 }


 if ((VAR_15 & VAR_12) != VAR_10)
  return -VAR_0;

 FUNC_1(VAR_16, VAR_13, VAR_17);

 return 0;
}
