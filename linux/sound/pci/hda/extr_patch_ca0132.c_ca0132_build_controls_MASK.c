
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct TYPE_3__ {int sw_kctl; } ;
struct ca0132_spec {int num_mixers; scalar_t__ dig_in; int multiout; scalar_t__ dig_out; int autocfg; TYPE_1__ vmaster_mute; int tlv; int * dacs; int * mixers; } ;
struct TYPE_4__ {char* name; int direct; int nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct hda_codec*,char*,int *,int ,char*,int,int *) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,char*,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*,int ,char*,int) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (struct hda_codec*) ;
 int FUNC_12 (struct hda_codec*) ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 scalar_t__ FUNC_13 (struct ca0132_spec*) ;
 scalar_t__ FUNC_14 (struct ca0132_spec*) ;
 scalar_t__ FUNC_15 (struct ca0132_spec*) ;
 scalar_t__ FUNC_16 (struct ca0132_spec*) ;
 int FUNC_17 (struct hda_codec*,int ) ;
 int FUNC_18 (struct hda_codec*,char*,int ,int ,char*) ;
 int FUNC_19 (struct hda_codec*,scalar_t__) ;
 int FUNC_20 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_21 (struct hda_codec*,int *) ;
 int FUNC_22 (struct hda_codec*,int *) ;
 int FUNC_23 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_24 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_25(struct hda_codec *VAR_13)
{
 struct ca0132_spec *VAR_14 = VAR_13->spec;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;


 for (VAR_15 = 0; VAR_15 < VAR_14->num_mixers; VAR_15++) {
  VAR_18 = FUNC_17(VAR_13, VAR_14->mixers[VAR_15]);
  if (VAR_18 < 0)
   return VAR_18;
 }

 if (FUNC_15(VAR_14)) {
  FUNC_23(VAR_13, VAR_14->dacs[0], VAR_3,
     VAR_14->tlv);
  FUNC_18(VAR_13, "Master Playback Volume",
     VAR_14->tlv, VAR_11,
     "Playback Volume");
  VAR_18 = FUNC_0(VAR_13, "Master Playback Switch",
         ((void*)0), VAR_11,
         "Playback Switch",
         1, &VAR_14->vmaster_mute.sw_kctl);
  if (VAR_18 < 0)
   return VAR_18;
 }




 VAR_16 = VAR_6 + VAR_4;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {

  if (FUNC_16(VAR_14)) {
   if (VAR_15 == (VAR_1 - VAR_5 +
      VAR_6))
    continue;
  }

  VAR_18 = FUNC_2(VAR_13, VAR_12[VAR_15].nid,
        VAR_12[VAR_15].name,
        VAR_12[VAR_15].direct);
  if (VAR_18 < 0)
   return VAR_18;
 }





 if (FUNC_14(VAR_14)) {
  VAR_18 = FUNC_12(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_1(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_2(VAR_13, VAR_7,
     "Enable OutFX", 0);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_2(VAR_13, VAR_0,
     "Enable InFX", 1);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_17 = VAR_6 - 1;
  for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
   VAR_18 = FUNC_8(VAR_13,
         VAR_12[VAR_15].nid,
         VAR_12[VAR_15].name,
         VAR_12[VAR_15].direct);
   if (VAR_18 < 0)
    return VAR_18;
  }

  VAR_18 = FUNC_8(VAR_13, VAR_10,
     "X-Bass Crossover", VAR_2);

  if (VAR_18 < 0)
   return VAR_18;
 } else {
  VAR_18 = FUNC_2(VAR_13, VAR_7,
     "PlayEnhancement", 0);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_2(VAR_13, VAR_0,
     "CrystalVoice", 1);
  if (VAR_18 < 0)
   return VAR_18;
 }
 VAR_18 = FUNC_4(VAR_13);
 if (VAR_18 < 0)
  return VAR_18;






 if (FUNC_15(VAR_14)) {
  VAR_18 = FUNC_11(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_10(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;




  if (FUNC_13(VAR_14) != VAR_9) {
   VAR_18 = FUNC_9(VAR_13);
   if (VAR_18 < 0)
    return VAR_18;
  }
 }

 if (FUNC_13(VAR_14) == VAR_8) {
  VAR_18 = FUNC_5(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_6(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
 }

 if (FUNC_13(VAR_14) == VAR_9) {
  VAR_18 = FUNC_24(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
 }




 VAR_18 = FUNC_22(VAR_13, &VAR_14->autocfg);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_14->dig_out) {
  VAR_18 = FUNC_20(VAR_13, VAR_14->dig_out,
          VAR_14->dig_out);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_21(VAR_13, &VAR_14->multiout);
  if (VAR_18 < 0)
   return VAR_18;

 }

 if (VAR_14->dig_in) {
  VAR_18 = FUNC_19(VAR_13, VAR_14->dig_in);
  if (VAR_18 < 0)
   return VAR_18;
 }

 if (FUNC_15(VAR_14))
  FUNC_7(VAR_13);

 return 0;
}
