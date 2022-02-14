
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct da7210_priv {scalar_t__ master; scalar_t__ mclk_rate; } ;


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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_0 (int ,char*,int ) ;
 struct da7210_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_54)
{
 struct da7210_priv *VAR_55 = FUNC_1(VAR_54);

 FUNC_0(VAR_54->dev, "DA7210 Audio Codec %s\n", VAR_53);

 VAR_55->mclk_rate = 0;
 VAR_55->master = 0;


 FUNC_2(VAR_54, VAR_10, VAR_49 | VAR_9);






 FUNC_2(VAR_54, VAR_28, VAR_29 | VAR_27);
 FUNC_2(VAR_54, VAR_30, VAR_31);


 FUNC_2(VAR_54, VAR_22, VAR_24);
 FUNC_2(VAR_54, VAR_23, VAR_25);


 FUNC_2(VAR_54, VAR_0, VAR_1 | VAR_2);






 FUNC_2(VAR_54, VAR_15,
       VAR_12 | VAR_11 |
       VAR_14 | VAR_13);


 FUNC_2(VAR_54, VAR_40, VAR_42);
 FUNC_2(VAR_54, VAR_41, VAR_43);


 FUNC_2(VAR_54, VAR_17,
       VAR_16 | VAR_21 |
       VAR_18 | VAR_19 | VAR_20);


 FUNC_2(VAR_54, VAR_51, VAR_48);
 FUNC_2(VAR_54, VAR_32, VAR_33);
 FUNC_2(VAR_54, VAR_34, VAR_35);
 FUNC_2(VAR_54, VAR_36, VAR_37 |
       VAR_38 | VAR_39);


 FUNC_2(VAR_54, VAR_3, VAR_4);
 FUNC_2(VAR_54, VAR_5, VAR_6);

 FUNC_2(VAR_54, VAR_7, VAR_8);


 FUNC_2(VAR_54, VAR_46, VAR_26 |
           VAR_45);


 FUNC_2(VAR_54, VAR_44, VAR_47);


 FUNC_2(VAR_54, VAR_52, VAR_50);

 FUNC_0(VAR_54->dev, "DA7210 Audio Codec %s\n", VAR_53);

 return 0;
}
