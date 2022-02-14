
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs4349_private {unsigned int mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 struct cs4349_private* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
         unsigned int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct cs4349_private *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;

 VAR_6 = VAR_3 & VAR_1;

 switch (VAR_6) {
 case 130:
 case 129:
 case 128:
  VAR_5->mode = VAR_3 & VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
