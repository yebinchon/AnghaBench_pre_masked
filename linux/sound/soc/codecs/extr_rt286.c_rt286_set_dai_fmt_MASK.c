
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




 unsigned int VAR_4 ;


 unsigned int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_6, unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;

 switch (VAR_7 & VAR_5) {
 case 133:
  FUNC_0(VAR_8,
   VAR_3, 0x800, 0x800);
  break;
 case 132:
  FUNC_0(VAR_8,
   VAR_3, 0x800, 0x0);
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_7 & VAR_4) {
 case 129:
  FUNC_0(VAR_8,
   VAR_3, 0x300, 0x0);
  break;
 case 128:
  FUNC_0(VAR_8,
   VAR_3, 0x300, 0x1 << 8);
  break;
 case 131:
  FUNC_0(VAR_8,
   VAR_3, 0x300, 0x2 << 8);
  break;
 case 130:
  FUNC_0(VAR_8,
   VAR_3, 0x300, 0x3 << 8);
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_8, VAR_2, 0x8000, 0);
 FUNC_0(VAR_8, VAR_1, 0x8000, 0);

 return 0;
}
