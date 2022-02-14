
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ cur_out_type; scalar_t__ cur_mic_type; scalar_t__ in_enum_val; scalar_t__* effects_switch; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {int mid; int* reqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 TYPE_1__* VAR_18 ;
 scalar_t__ FUNC_0 (struct ca0132_spec*) ;
 scalar_t__ FUNC_1 (struct ca0132_spec*) ;
 int FUNC_2 (struct hda_codec*,char*,scalar_t__,long) ;
 int FUNC_3 (struct hda_codec*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_19, hda_nid_t VAR_20, long VAR_21)
{
 struct ca0132_spec *VAR_22 = VAR_19->spec;
 unsigned int VAR_23, VAR_24;
 int VAR_25 = VAR_10 + VAR_6;
 int VAR_26 = 0;
 int VAR_27 = VAR_20 - VAR_2;

 if ((VAR_27 < 0) || (VAR_27 >= VAR_25))
  return 0;


 if ((VAR_20 >= VAR_12) && (VAR_20 < VAR_11)) {

  if (!VAR_22->effects_switch[VAR_13 - VAR_2])
   VAR_21 = 0;
  if (VAR_22->cur_out_type == VAR_15 && VAR_20 == VAR_17)
   VAR_21 = 0;
 }


 if ((VAR_20 >= VAR_8) && (VAR_20 < VAR_7)) {

  if (!VAR_22->effects_switch[VAR_0 - VAR_2])
   VAR_21 = 0;


  if ((VAR_20 == VAR_16) && (VAR_22->cur_mic_type != VAR_1))
   VAR_21 = 0;


  if ((VAR_20 == VAR_16) && FUNC_1(VAR_22)
    && (VAR_22->cur_mic_type != VAR_14)) {
   if (VAR_22->effects_switch[VAR_0 -
       VAR_2]) {

    if (VAR_22->effects_switch[VAR_16 -
        VAR_2]) {
     VAR_24 = VAR_4;
     VAR_21 = 1;
    } else
     VAR_24 = VAR_3;

    FUNC_3(VAR_19, 0x80, 0x00, VAR_24);
   }
  }




  if ((VAR_20 == VAR_9) && FUNC_1(VAR_22)
    && (VAR_22->cur_mic_type != VAR_14)) {
   if (VAR_22->effects_switch[VAR_0 -
       VAR_2]) {
    if (VAR_22->effects_switch[VAR_9 -
        VAR_2])
     VAR_24 = VAR_3;
    else
     VAR_24 = VAR_5;
   } else
    VAR_24 = VAR_5;

   FUNC_3(VAR_19, 0x47, 0x00, VAR_24);
  }


  if (FUNC_0(VAR_22) &&
    VAR_22->in_enum_val == VAR_14)
   VAR_21 = 0;
 }

 FUNC_2(VAR_19, "ca0132_effect_set: nid=0x%x, val=%ld\n",
      VAR_20, VAR_21);

 VAR_23 = (VAR_21 == 0) ? VAR_5 : VAR_3;
 VAR_26 = FUNC_3(VAR_19, VAR_18[VAR_27].mid,
       VAR_18[VAR_27].reqs[0], VAR_23);

 if (VAR_26 < 0)
  return 0;

 return 1;
}
