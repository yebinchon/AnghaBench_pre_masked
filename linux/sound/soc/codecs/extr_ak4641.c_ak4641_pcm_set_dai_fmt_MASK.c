
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


 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3,
      unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 u8 VAR_6;
 int VAR_7;


 switch (VAR_4 & VAR_2) {
 case 129:
  VAR_6 = (0x3 << 5);
  break;
 case 128:
  VAR_6 = (0x2 << 5);
  break;
 case 131:
  VAR_6 = (0x0 << 5);
  break;
 case 130:
  VAR_6 = (0x1 << 5);
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_0, (0x3 << 5), VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
