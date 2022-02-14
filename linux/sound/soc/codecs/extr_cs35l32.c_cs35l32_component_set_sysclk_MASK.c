
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_5,
         int VAR_6, int VAR_7, unsigned int VAR_8, int VAR_9)
{
 unsigned int VAR_10;

 switch (VAR_8) {
 case 6000000:
  VAR_10 = VAR_2;
  break;
 case 12000000:
  VAR_10 = VAR_1 | VAR_2;
  break;
 case 6144000:
  VAR_10 = 0;
  break;
 case 12288000:
  VAR_10 = VAR_1;
  break;
 default:
  return -VAR_4;
 }

 return FUNC_0(VAR_5, VAR_0,
   VAR_1 | VAR_3, VAR_10);
}
