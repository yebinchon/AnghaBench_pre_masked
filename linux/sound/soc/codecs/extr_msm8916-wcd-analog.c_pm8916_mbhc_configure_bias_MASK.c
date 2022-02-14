
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {int* vref_btn_micb; int* vref_btn_cs; struct snd_soc_component* component; } ;


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
 int FUNC_0 (struct snd_soc_component*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pm8916_wcd_analog_priv *VAR_15,
          bool VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_15->component;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 int *VAR_22, VAR_23;

 if (!VAR_16) {

  FUNC_0(VAR_17, VAR_9,
        VAR_14,
        VAR_13);

  FUNC_0(VAR_17, VAR_10,
       VAR_11,
       0);

  FUNC_0(VAR_17, VAR_4,
        VAR_6,
        VAR_5);
 }
 FUNC_0(VAR_17, VAR_4,
   VAR_8,
   VAR_7);

 if (VAR_16)
  VAR_22 = &VAR_15->vref_btn_micb[0];
 else
  VAR_22 = &VAR_15->vref_btn_cs[0];


 VAR_21 = VAR_0;
 for (VAR_23 = 0; VAR_23 < VAR_12; VAR_23++) {

  VAR_18 = (VAR_22[VAR_23] / 100);
  VAR_19 = ((VAR_22[VAR_23] % 100) / 12);
  VAR_20 = (VAR_18 << VAR_1) |
    (VAR_19 << VAR_2);
  FUNC_0(VAR_17, VAR_21,
          VAR_3,
          VAR_20);
  VAR_21++;
 }

 return 0;
}
