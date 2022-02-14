
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

 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3,
  int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_3->component;
 u16 VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_0(VAR_6, VAR_1) & 0x003f;
  FUNC_1(VAR_6, VAR_1, VAR_7 | VAR_5);
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_6, VAR_2) & 0x01c7;
  FUNC_1(VAR_6, VAR_2, VAR_7 | VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_2) & 0x003f;
  FUNC_1(VAR_6, VAR_2, VAR_7 | VAR_5);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
