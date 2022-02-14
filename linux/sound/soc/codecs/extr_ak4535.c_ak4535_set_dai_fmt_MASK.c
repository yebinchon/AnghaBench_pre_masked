
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3,
  unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 u8 VAR_6 = 0;


 switch (VAR_4 & VAR_2) {
 case 129:
  VAR_6 = 0x0002;
  break;
 case 128:
  VAR_6 = 0x0001;
  break;
 default:
  return -VAR_1;
 }


 VAR_6 |= 0x4;

 FUNC_0(VAR_5, VAR_0, VAR_6);
 return 0;
}
