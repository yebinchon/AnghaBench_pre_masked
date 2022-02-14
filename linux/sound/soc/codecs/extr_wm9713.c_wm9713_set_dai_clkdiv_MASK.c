
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







 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4,
  int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_4->component;

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_7, VAR_1, 0x0f00, VAR_6);
  break;
 case 134:
  FUNC_0(VAR_7, VAR_1, 0x0002, VAR_6);
  break;
 case 133:
  FUNC_0(VAR_7, VAR_1, 0x0004, VAR_6);
  break;
 case 132:
  FUNC_0(VAR_7, VAR_1, 0x7000, VAR_6);
  break;
 case 130:
  FUNC_0(VAR_7, VAR_0, 0x0e00, VAR_6);
  break;
 case 128:
  FUNC_0(VAR_7, VAR_2,
        0x007f, VAR_6 | 0x60);
  break;
 case 131:
  FUNC_0(VAR_7, VAR_2,
        0x007f, VAR_6 | 0x70);
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
