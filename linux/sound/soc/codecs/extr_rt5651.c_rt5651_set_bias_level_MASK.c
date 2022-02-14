
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_17,
   enum snd_soc_bias_level VAR_18)
{
 switch (VAR_18) {
 case 129:
  if (128 == FUNC_0(VAR_17)) {
   if (FUNC_1(VAR_17, VAR_1) & 0x9200)
    FUNC_2(VAR_17, VAR_0,
          0xc00, 0xc00);
  }
  break;
 case 128:
  if (130 == FUNC_0(VAR_17)) {
   FUNC_2(VAR_17, VAR_2,
    VAR_15 | VAR_11 |
    VAR_4 | VAR_16,
    VAR_15 | VAR_11 |
    VAR_4 | VAR_16);
   FUNC_4(10000, 15000);
   FUNC_2(VAR_17, VAR_2,
    VAR_7 | VAR_8,
    VAR_7 | VAR_8);
   FUNC_2(VAR_17, VAR_0, 0x1, 0x1);
  }
  break;

 case 130:
  FUNC_3(VAR_17, VAR_0, 0x0010);
  FUNC_3(VAR_17, VAR_5, 0x0000);
  FUNC_3(VAR_17, VAR_6, 0x0000);
  FUNC_3(VAR_17, VAR_14, 0x0000);
  FUNC_3(VAR_17, VAR_12, 0x0000);

  FUNC_2(VAR_17, VAR_2,
   ~VAR_10, 0);

  FUNC_2(VAR_17, VAR_3,
        ~(VAR_13 | VAR_9), 0);
  break;

 default:
  break;
 }

 return 0;
}
