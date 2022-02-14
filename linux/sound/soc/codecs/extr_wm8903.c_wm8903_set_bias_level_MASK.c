
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_24,
     enum snd_soc_bias_level VAR_25)
{
 switch (VAR_25) {
 case 130:
  break;

 case 129:
  FUNC_3(VAR_24, VAR_16,
        VAR_20,
        VAR_19);
  break;

 case 128:
  if (FUNC_2(VAR_24) == 131) {
   FUNC_3(VAR_24, VAR_1,
         VAR_9 | VAR_7 |
         VAR_14 |
         VAR_2,
         VAR_9 |
         (2 << VAR_8) |
         VAR_14);

   FUNC_3(VAR_24,
         VAR_0,
         VAR_13,
         VAR_13);

   FUNC_1(33);

   FUNC_3(VAR_24, VAR_10,
         VAR_11 | VAR_12,
         VAR_11 | VAR_12);

   FUNC_3(VAR_24,
         VAR_0,
         VAR_13, 0);

   FUNC_3(VAR_24, VAR_16,
         VAR_23 |
         VAR_3 |
         VAR_17 |
         VAR_21 |
         VAR_20 |
         VAR_15,
         VAR_23 |
         VAR_3 |
         VAR_17 |
         (2 << VAR_22) |
         VAR_18 |
         VAR_15);

   FUNC_1(129);

   FUNC_3(VAR_24, VAR_10,
         VAR_11 | VAR_12,
         0);

   FUNC_3(VAR_24, VAR_16,
         VAR_21, 0);

   FUNC_3(VAR_24, VAR_16,
         VAR_20,
         VAR_19);

   FUNC_3(VAR_24, VAR_1,
         VAR_2 | VAR_9,
         VAR_2);




   FUNC_0(VAR_24->dev, "Enabling Class W\n");
   FUNC_3(VAR_24, VAR_4,
         VAR_5 |
         VAR_6,
         VAR_5 |
         VAR_6);
  }

  FUNC_3(VAR_24, VAR_16,
        VAR_20,
        VAR_18);
  break;

 case 131:
  FUNC_3(VAR_24, VAR_1,
        VAR_2, 0);

  FUNC_3(VAR_24, VAR_16,
        VAR_21,
        2 << VAR_22);

  FUNC_3(VAR_24, VAR_16,
        VAR_15, 0);

  FUNC_1(290);

  FUNC_3(VAR_24, VAR_16,
        VAR_23 | VAR_3 |
        VAR_17 | VAR_20 |
        VAR_21 |
        VAR_15, 0);

  FUNC_3(VAR_24, VAR_1,
        VAR_14, 0);
  break;
 }

 return 0;
}
