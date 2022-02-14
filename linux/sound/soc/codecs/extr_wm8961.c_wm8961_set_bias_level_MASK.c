
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_7,
     enum snd_soc_bias_level VAR_8)
{
 u16 VAR_9;






 switch (VAR_8) {
 case 130:
  break;

 case 129:
  if (FUNC_0(VAR_7) == 128) {

   VAR_9 = FUNC_1(VAR_7, VAR_0);
   VAR_9 |= VAR_2 | VAR_1;
   FUNC_2(VAR_7, VAR_0, VAR_9);


   VAR_9 = FUNC_1(VAR_7, VAR_3);
   VAR_9 &= ~VAR_4;
   VAR_9 |= (1 << VAR_5) | VAR_6;
   FUNC_2(VAR_7, VAR_3, VAR_9);
  }
  break;

 case 128:
  if (FUNC_0(VAR_7) == 129) {

   VAR_9 = FUNC_1(VAR_7, VAR_3);
   VAR_9 &= ~VAR_6;
   FUNC_2(VAR_7, VAR_3, VAR_9);


   VAR_9 = FUNC_1(VAR_7, VAR_0);
   VAR_9 &= ~(VAR_2 | VAR_1);
   FUNC_2(VAR_7, VAR_0, VAR_9);


   VAR_9 = FUNC_1(VAR_7, VAR_3);
   VAR_9 &= ~VAR_4;
   FUNC_2(VAR_7, VAR_3, VAR_9);
  }
  break;

 case 131:
  break;
 }

 return 0;
}
