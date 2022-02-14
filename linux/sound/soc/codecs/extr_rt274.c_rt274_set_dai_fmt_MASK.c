
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct rt274_priv {int master; } ;


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




 unsigned int VAR_12 ;


 unsigned int VAR_13 ;
 struct rt274_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_14->component;
 struct rt274_priv *VAR_17 = FUNC_0(VAR_16);

 switch (VAR_15 & VAR_13) {
 case 133:
  FUNC_1(VAR_16,
   VAR_3, VAR_10, VAR_9);
  VAR_17->master = 1;
  break;
 case 132:
  FUNC_1(VAR_16,
   VAR_3, VAR_10, VAR_11);
  VAR_17->master = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_12) {
 case 129:
  FUNC_1(VAR_16, VAR_3,
     VAR_6, VAR_4);
  break;
 case 128:
  FUNC_1(VAR_16, VAR_3,
     VAR_6, VAR_5);
  break;
 case 131:
  FUNC_1(VAR_16, VAR_3,
     VAR_6, VAR_7);
  break;
 case 130:
  FUNC_1(VAR_16, VAR_3,
     VAR_6, VAR_8);
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_2, 0x8000, 0);
 FUNC_1(VAR_16, VAR_1, 0x8000, 0);

 return 0;
}
