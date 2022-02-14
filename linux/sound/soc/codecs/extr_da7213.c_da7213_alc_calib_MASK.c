
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7213_priv {scalar_t__ alc_calib_auto; } ;


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
 int FUNC_1 (struct snd_soc_component*) ;
 struct da7213_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_12)
{
 struct da7213_priv *VAR_13 = FUNC_2(VAR_12);
 u8 VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18, VAR_19;


 VAR_14 = FUNC_3(VAR_12, VAR_1);
 VAR_15 = FUNC_3(VAR_12, VAR_2);


 VAR_16 = FUNC_3(VAR_12, VAR_7);
 VAR_17 = FUNC_3(VAR_12, VAR_10);


 VAR_18 = FUNC_3(VAR_12, VAR_3);
 VAR_19 = FUNC_3(VAR_12, VAR_4);


 FUNC_4(VAR_12, VAR_1, VAR_0,
       VAR_0);
 FUNC_4(VAR_12, VAR_2, VAR_0,
       VAR_0);


 FUNC_4(VAR_12, VAR_7,
       VAR_5 |
       VAR_6,
       VAR_5 |
       VAR_6);
 FUNC_4(VAR_12, VAR_10,
       VAR_9 |
       VAR_8,
       VAR_9 |
       VAR_8);


 FUNC_4(VAR_12, VAR_3, VAR_11,
       VAR_11);
 FUNC_4(VAR_12, VAR_4, VAR_11,
       VAR_11);


 if (VAR_13->alc_calib_auto)
  FUNC_0(VAR_12);
 else
  FUNC_1(VAR_12);


 FUNC_5(VAR_12, VAR_7, VAR_16);
 FUNC_5(VAR_12, VAR_10, VAR_17);


 FUNC_5(VAR_12, VAR_1, VAR_14);
 FUNC_5(VAR_12, VAR_2, VAR_15);


 FUNC_5(VAR_12, VAR_3, VAR_18);
 FUNC_5(VAR_12, VAR_4, VAR_19);
}
