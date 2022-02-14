
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pm860x_priv {int dir; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 unsigned int VAR_9 ;

 unsigned int VAR_10 ;
 struct pm860x_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_11,
      unsigned int VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_11->component;
 struct pm860x_priv *VAR_14 = FUNC_0(VAR_13);
 unsigned char VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = -VAR_0;

 VAR_16 |= VAR_2 | VAR_3 | VAR_4;


 switch (VAR_12 & VAR_10) {
 case 131:
 case 130:
  if (VAR_14->dir == VAR_7) {
   VAR_15 |= VAR_4;
   VAR_17 = 0;
  }
  break;
 case 129:
  if (VAR_14->dir == VAR_6) {
   VAR_15 &= ~VAR_4;
   VAR_17 = 0;
  }
  break;
 }

 switch (VAR_12 & VAR_9) {
 case 128:
  VAR_15 |= VAR_1;
  VAR_17 = 0;
  break;
 }
 VAR_16 |= VAR_5;
 if (VAR_17)
  return VAR_17;
 FUNC_1(VAR_13, VAR_8, VAR_16, VAR_15);
 return 0;
}
