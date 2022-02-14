
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;



 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 u32 VAR_9 = 0, VAR_10 = 0;


 switch (VAR_7 & VAR_3) {
 case 130:
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_7 & VAR_5) {
 case 132:
 case 131:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_7 & VAR_4) {
 case 129:

  VAR_10 |= FUNC_0(0);
  break;
 case 128:

  VAR_10 |= FUNC_0(1);
  break;
 default:
  return -VAR_0;
 }

 VAR_9 |= VAR_2;

 return FUNC_1(VAR_8, VAR_1, VAR_9, VAR_10);
}
