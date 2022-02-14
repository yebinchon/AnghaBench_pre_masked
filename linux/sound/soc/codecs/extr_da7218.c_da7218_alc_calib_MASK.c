
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_39)
{
 u8 VAR_40, VAR_41;
 u8 VAR_42, VAR_43;
 u8 VAR_44, VAR_45, VAR_46, VAR_47;
 u8 VAR_48, VAR_49;
 u8 VAR_50;
 int VAR_51 = 0;
 bool VAR_52 = 0;


 VAR_40 = FUNC_1(VAR_39, VAR_29);
 VAR_41 = FUNC_1(VAR_39, VAR_32);


 VAR_42 = FUNC_1(VAR_39, VAR_35);
 VAR_43 = FUNC_1(VAR_39, VAR_38);


 VAR_44 = FUNC_1(VAR_39, VAR_11);
 VAR_45 = FUNC_1(VAR_39, VAR_14);
 VAR_46 = FUNC_1(VAR_39, VAR_19);
 VAR_47 = FUNC_1(VAR_39, VAR_22);


 VAR_48 = FUNC_1(VAR_39, VAR_17);
 VAR_49 = FUNC_1(VAR_39, VAR_25);


 FUNC_2(VAR_39, VAR_29, VAR_27,
       VAR_27);
 FUNC_2(VAR_39, VAR_32, VAR_30,
       VAR_30);
 FUNC_2(VAR_39, VAR_29,
       VAR_28,
       VAR_28);
 FUNC_2(VAR_39, VAR_32,
       VAR_31,
       VAR_31);


 FUNC_2(VAR_39, VAR_35,
       VAR_33 |
       VAR_34,
       VAR_33);
 FUNC_2(VAR_39, VAR_38,
       VAR_36 |
       VAR_37,
       VAR_36);


 FUNC_2(VAR_39, VAR_11,
       VAR_12 |
       VAR_13,
       VAR_12);
 FUNC_2(VAR_39, VAR_14,
       VAR_15 |
       VAR_16,
       VAR_15);
 FUNC_2(VAR_39, VAR_19,
       VAR_20 |
       VAR_21,
       VAR_20);
 FUNC_2(VAR_39, VAR_22,
       VAR_23 |
       VAR_24,
       VAR_23);






 FUNC_2(VAR_39, VAR_17,
       VAR_18, 0);
 FUNC_2(VAR_39, VAR_25,
       VAR_26, 0);


 FUNC_2(VAR_39, VAR_8, VAR_7,
       VAR_7);
 do {
  VAR_50 = FUNC_1(VAR_39, VAR_8);
  if (VAR_50 & VAR_7) {
   ++VAR_51;
   FUNC_4(VAR_1,
         VAR_0);
  } else {
   VAR_52 = 1;
  }

 } while ((VAR_51 < VAR_2) && (!VAR_52));


 if ((!VAR_52) || (VAR_50 & VAR_10)) {
  FUNC_0(VAR_39->dev,
    "ALC auto calibration failed - %s\n",
    (VAR_52) ? "overflow" : "timeout");
  FUNC_2(VAR_39, VAR_8,
        VAR_9, 0);
  FUNC_2(VAR_39, VAR_3,
        VAR_6, 0);

 } else {

  FUNC_2(VAR_39, VAR_8,
        VAR_9,
        VAR_9);


  FUNC_2(VAR_39, VAR_3,
        VAR_6,
        VAR_4 |
        VAR_5);
 }


 FUNC_3(VAR_39, VAR_17, VAR_48);
 FUNC_3(VAR_39, VAR_25, VAR_49);


 FUNC_3(VAR_39, VAR_11, VAR_44);
 FUNC_3(VAR_39, VAR_14, VAR_45);
 FUNC_3(VAR_39, VAR_19, VAR_46);
 FUNC_3(VAR_39, VAR_22, VAR_47);


 FUNC_3(VAR_39, VAR_35, VAR_42);
 FUNC_3(VAR_39, VAR_38, VAR_43);


 FUNC_3(VAR_39, VAR_29, VAR_40);
 FUNC_3(VAR_39, VAR_32, VAR_41);
}
