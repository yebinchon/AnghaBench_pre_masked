
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3,
      unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 u16 VAR_7 = 0;

 switch (VAR_4) {
 case 12288000:
 case 26000000:
 case 19200000:

  VAR_7 = 0;
  break;
 case 48000:
 case 32576:

  VAR_7 = FUNC_0(4);
  return 0;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_1, FUNC_0(4), VAR_7);

 return 0;
}
