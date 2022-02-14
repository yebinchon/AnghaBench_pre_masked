
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_12,
          enum snd_soc_bias_level VAR_13)
{
 switch (VAR_13) {
 case 130:
  FUNC_0(VAR_12);
  break;
 case 129:
  break;
 case 128:

  FUNC_1(VAR_12, VAR_4,
    VAR_5,
    VAR_0);
  FUNC_1(VAR_12, VAR_6,
    VAR_7,
    VAR_1);

  FUNC_1(VAR_12, VAR_2,
    VAR_3,
    0xffff ^ (VAR_11
    | VAR_10));
  break;
 case 131:

  FUNC_1(VAR_12, VAR_6,
    VAR_7, 0);
  FUNC_1(VAR_12, VAR_8,
    VAR_9, 0);
  FUNC_1(VAR_12, VAR_4,
    VAR_5, 0);
  break;
 }
 return 0;
}
