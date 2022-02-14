
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 switch (VAR_4) {
 case 129:
  if (128 ==
   FUNC_1(VAR_3)) {
   FUNC_3(VAR_3,
    VAR_2, VAR_0);
   FUNC_2(VAR_3, 0x0d, 0x200, 0x200);
   FUNC_2(VAR_3, 0x52, 0x80, 0x0);
   FUNC_0(20);
   FUNC_2(VAR_3, 0x0d, 0x200, 0x0);
   FUNC_2(VAR_3, 0x52, 0x80, 0x80);
  }
  break;

 case 128:
  FUNC_3(VAR_3,
   VAR_2, VAR_1);
  break;

 default:
  break;
 }

 return 0;
}
