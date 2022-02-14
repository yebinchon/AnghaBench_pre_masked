
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int FUNC_1 (struct snd_soc_component*,int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 unsigned char VAR_7;
 struct snd_soc_component *VAR_8 = VAR_5->component;


 switch (VAR_6 & VAR_4) {
 case 131:
  VAR_7 = 1;
  break;
 case 130:
  VAR_7 = 0;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_8, VAR_1, FUNC_0(0), VAR_7);


 switch (VAR_6 & VAR_2) {
 case 129:
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_6 & VAR_3) {
 case 128:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
