
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_14)
{
 u8 VAR_15, VAR_16, VAR_17, VAR_18;


 VAR_15 = FUNC_1(VAR_14, VAR_10);


 VAR_16 = FUNC_1(VAR_14, VAR_13);


 VAR_17 = FUNC_1(VAR_14, VAR_0);


 FUNC_2(VAR_14, VAR_10, VAR_8,
       VAR_8);
 FUNC_2(VAR_14, VAR_10,
       VAR_9,
       VAR_9);


 FUNC_2(VAR_14, VAR_13,
       VAR_11 |
       VAR_12,
       VAR_11);


 FUNC_2(VAR_14, VAR_0,
       VAR_2 | VAR_1,
       VAR_1);


 FUNC_2(VAR_14, VAR_5,
       VAR_3,
       VAR_3);
 do {
  VAR_18 = FUNC_1(VAR_14, VAR_5);
 } while (VAR_18 & VAR_3);


 if (VAR_18 & VAR_4) {
  FUNC_0(VAR_14->dev,
    "ALC auto calibration failed with overflow\n");
  FUNC_2(VAR_14, VAR_5,
        VAR_6 |
        VAR_7, 0);
 } else {

  FUNC_2(VAR_14, VAR_5,
        VAR_6 |
        VAR_7,
        VAR_6 |
        VAR_7);
 }


 FUNC_3(VAR_14, VAR_0, VAR_17);


 FUNC_3(VAR_14, VAR_13, VAR_16);


 FUNC_3(VAR_14, VAR_10, VAR_15);
}
