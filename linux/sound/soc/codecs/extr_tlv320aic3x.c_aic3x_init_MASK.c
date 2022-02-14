
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct aic3x_priv {int model; int ocmv; } ;



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
 int FUNC_0 (struct snd_soc_component*) ;
 struct aic3x_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_44)
{
 struct aic3x_priv *VAR_45 = FUNC_1(VAR_44);

 FUNC_3(VAR_44, VAR_1, VAR_31);
 FUNC_3(VAR_44, VAR_2, VAR_42);


 FUNC_3(VAR_44, VAR_20, VAR_11 | VAR_30);
 FUNC_3(VAR_44, VAR_39, VAR_11 | VAR_30);


 FUNC_3(VAR_44, VAR_5, VAR_11 | VAR_41);
 FUNC_3(VAR_44, VAR_8, VAR_11 | VAR_41);
 FUNC_3(VAR_44, VAR_4, VAR_11 | VAR_41);
 FUNC_3(VAR_44, VAR_7, VAR_11 | VAR_41);

 FUNC_3(VAR_44, VAR_6, VAR_11 | VAR_41);
 FUNC_3(VAR_44, VAR_9, VAR_11 | VAR_41);


 FUNC_2(VAR_44, VAR_29, VAR_43, VAR_43);
 FUNC_2(VAR_44, VAR_40, VAR_43, VAR_43);
 FUNC_2(VAR_44, VAR_13, VAR_43, VAR_43);
 FUNC_2(VAR_44, VAR_18, VAR_43, VAR_43);
 FUNC_2(VAR_44, VAR_12, VAR_43, VAR_43);
 FUNC_2(VAR_44, VAR_17, VAR_43, VAR_43);


 FUNC_3(VAR_44, VAR_19, VAR_10);
 FUNC_3(VAR_44, VAR_38, VAR_10);

 FUNC_3(VAR_44, VAR_21, 0x0);
 FUNC_3(VAR_44, VAR_22, 0x0);


 FUNC_3(VAR_44, VAR_33, VAR_11);
 FUNC_3(VAR_44, VAR_36, VAR_11);
 FUNC_3(VAR_44, VAR_32, VAR_11);
 FUNC_3(VAR_44, VAR_35, VAR_11);

 FUNC_3(VAR_44, VAR_34, VAR_11);
 FUNC_3(VAR_44, VAR_37, VAR_11);


 if (VAR_45->model != VAR_0) {

  FUNC_3(VAR_44, VAR_24, VAR_11);
  FUNC_3(VAR_44, VAR_27, VAR_11);
  FUNC_3(VAR_44, VAR_23, VAR_11);
  FUNC_3(VAR_44, VAR_26, VAR_11);

  FUNC_3(VAR_44, VAR_25, VAR_11);
  FUNC_3(VAR_44, VAR_28, VAR_11);
 }

 switch (VAR_45->model) {
 case 128:
 case 129:
  FUNC_0(VAR_44);
  break;
 case 130:
  FUNC_3(VAR_44, VAR_3, 0);
  break;
 }


 FUNC_2(VAR_44, VAR_14, VAR_15,
       VAR_45->ocmv << VAR_16);

 return 0;
}
