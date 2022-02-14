
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


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
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_16,
        struct snd_ctl_elem_value *VAR_17)
{
 struct snd_soc_component *VAR_18 = FUNC_4(VAR_16);
 u8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 if (VAR_17->value.integer.value[0]) {






  VAR_22 = FUNC_1(VAR_18, VAR_12);
  VAR_23 = FUNC_1(VAR_18, VAR_14);


  FUNC_2(VAR_18, VAR_12,
        VAR_13, VAR_13);
  FUNC_2(VAR_18, VAR_14,
        VAR_15, VAR_15);


  VAR_20 = FUNC_1(VAR_18, VAR_0);
  VAR_21 = FUNC_1(VAR_18, VAR_2);


  FUNC_2(VAR_18, VAR_0,
        VAR_1, VAR_1);
  FUNC_2(VAR_18, VAR_2,
        VAR_3, VAR_3);



  VAR_24 = FUNC_0(VAR_18,
    VAR_4);

  VAR_25 = FUNC_0(VAR_18,
     VAR_5);


  VAR_26 = -VAR_24;
  VAR_27 = -VAR_25;

  VAR_19 = (VAR_26 & VAR_6) >> 8;
  FUNC_3(VAR_18, VAR_8, VAR_19);
  VAR_19 = (VAR_26 & VAR_7) >> 16;
  FUNC_3(VAR_18, VAR_10, VAR_19);

  VAR_19 = (VAR_27 & VAR_6) >> 8;
  FUNC_3(VAR_18, VAR_9, VAR_19);
  VAR_19 = (VAR_27 & VAR_7) >> 16;
  FUNC_3(VAR_18, VAR_11, VAR_19);


  FUNC_3(VAR_18, VAR_0, VAR_20);
  FUNC_3(VAR_18, VAR_2, VAR_21);


  FUNC_3(VAR_18, VAR_12, VAR_22);
  FUNC_3(VAR_18, VAR_14, VAR_23);
 }

 return FUNC_5(VAR_16, VAR_17);
}
