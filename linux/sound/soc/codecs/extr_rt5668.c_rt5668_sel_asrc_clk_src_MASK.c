
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,unsigned int) ;

int FUNC_1(struct snd_soc_component *VAR_7,
  unsigned int VAR_8, unsigned int VAR_9)
{

 switch (VAR_9) {
 case 128:
 case 130:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 if (VAR_8 & VAR_2) {
  FUNC_0(VAR_7, VAR_5,
   VAR_3,
   VAR_9 << VAR_4);
 }

 if (VAR_8 & VAR_1) {
  FUNC_0(VAR_7, VAR_6,
   VAR_3,
   VAR_9 << VAR_4);
 }

 return 0;
}
