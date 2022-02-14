
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6,
         unsigned int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 u16 VAR_9 = FUNC_0(VAR_8, VAR_5) & 0xFE67;
 u16 VAR_10 = FUNC_0(VAR_8, VAR_4) & 0x1fe;

 switch (VAR_7 & VAR_3) {
 case 138:
  VAR_10 |= 1;
  break;
 case 137:
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_8, VAR_4, VAR_10);

 switch (VAR_7 & VAR_1) {
 case 134:
  VAR_9 |= (2 << 3);
  break;
 case 131:
  VAR_9 |= (1 << 3);
  break;
 case 128:
  break;
 case 136:
  VAR_9 |= (3 << 3);
  break;
 case 135:
  VAR_9 |= (3 << 3) | (1 << 7);
  break;
 }

 switch (VAR_7 & VAR_2) {
 case 129:
  break;
 case 130:
  VAR_9 |= (1 << 7);
  break;
 case 132:
  VAR_9 |= (1 << 8);
  break;
 case 133:
  VAR_9 |= (1 << 8) | (1 << 7);
  break;
 }

 FUNC_1(VAR_8, VAR_5, VAR_9);

 return 0;
}
