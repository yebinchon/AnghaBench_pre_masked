
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da9055_priv {scalar_t__ master; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 unsigned int VAR_15 ;


 unsigned int VAR_16 ;

 struct da9055_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_17, unsigned int VAR_18)
{
 struct snd_soc_component *VAR_19 = VAR_17->component;
 struct da9055_priv *VAR_20 = FUNC_0(VAR_19);
 u8 VAR_21, VAR_22, VAR_23;

 switch (VAR_18 & VAR_16) {
 case 133:

  VAR_23 = 1;
  VAR_21 = VAR_2;
  break;
 case 132:

  VAR_23 = 0;
  VAR_21 = VAR_3;
  break;
 default:
  return -VAR_14;
 }


 if ((FUNC_1(VAR_19, VAR_12) & VAR_13) &&
     (VAR_20->master != VAR_23))
  return -VAR_14;

 VAR_20->master = VAR_23;


 switch (VAR_18 & VAR_15) {
 case 130:
  VAR_22 = VAR_8;
  break;
 case 129:
  VAR_22 = VAR_9;
  break;
 case 128:
  VAR_22 = VAR_11;
  break;
 case 131:
  VAR_22 = VAR_7;
  break;
 default:
  return -VAR_14;
 }


 VAR_21 |= VAR_0;

 FUNC_2(VAR_19, VAR_4,
       (VAR_5 | VAR_1),
       VAR_21);
 FUNC_2(VAR_19, VAR_6, VAR_10,
       VAR_22);
 return 0;
}
