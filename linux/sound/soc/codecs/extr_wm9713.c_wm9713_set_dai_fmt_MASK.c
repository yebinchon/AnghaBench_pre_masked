
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned int VAR_2 ;



 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_5->component;
 u16 VAR_8 = FUNC_0(VAR_7, VAR_1) & 0xffc5;
 u16 VAR_9 = 0x8000;


 switch (VAR_6 & VAR_4) {
 case 139:
  VAR_9 |= 0x4000;
  VAR_8 |= 0x0010;
  break;
 case 138:
  VAR_9 |= 0x6000;
  VAR_8 |= 0x0018;
  break;
 case 136:
  VAR_9 |= 0x2000;
  VAR_8 |= 0x001a;
  break;
 case 137:
  VAR_8 |= 0x0012;
  break;
 }


 switch (VAR_6 & VAR_3) {
 case 132:
  VAR_9 |= 0x00c0;
  break;
 case 131:
  VAR_9 |= 0x0080;
  break;
 case 129:
  VAR_9 |= 0x0040;
  break;
 }


 switch (VAR_6 & VAR_2) {
 case 133:
  VAR_9 |= 0x0002;
  break;
 case 128:
  break;
 case 130:
  VAR_9 |= 0x0001;
  break;
 case 135:
  VAR_9 |= 0x0003;
  break;
 case 134:
  VAR_9 |= 0x0043;
  break;
 }

 FUNC_1(VAR_7, VAR_1, VAR_8);
 FUNC_1(VAR_7, VAR_0, VAR_9);
 return 0;
}
