
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4, int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_2->component;
 unsigned int VAR_8 = 0;

 if (VAR_4 || VAR_3)
  VAR_8 |= (1 << 15);

 switch (VAR_5) {
 case 4:
  VAR_8 |= (1 << 10);
  VAR_8 |= (1 << 8);
  break;
 case 6:
  VAR_8 |= (2 << 10);
  VAR_8 |= (2 << 8);
  break;
 case 8:
  VAR_8 |= (3 << 10);
  VAR_8 |= (3 << 8);
  break;
 case 2:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6) {
 case 20:
  VAR_8 |= (1 << 6);
  VAR_8 |= (1 << 4);
  break;
 case 24:
  VAR_8 |= (2 << 6);
  VAR_8 |= (2 << 4);
  break;
 case 32:
  VAR_8 |= (3 << 6);
  VAR_8 |= (3 << 4);
  break;
 case 16:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_7, VAR_1, 0x8ff0, VAR_8);

 return 0;
}
