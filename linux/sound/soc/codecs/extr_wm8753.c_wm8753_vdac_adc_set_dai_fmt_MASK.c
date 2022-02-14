
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_3,
  unsigned int VAR_4)
{
 u16 VAR_5 = FUNC_0(VAR_3, VAR_2) & 0x01ec;


 switch (VAR_4 & VAR_1) {
 case 130:
  VAR_5 |= 0x0002;
  break;
 case 128:
  break;
 case 129:
  VAR_5 |= 0x0001;
  break;
 case 132:
  VAR_5 |= 0x0003;
  break;
 case 131:
  VAR_5 |= 0x0013;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_2, VAR_5);
 return 0;
}
