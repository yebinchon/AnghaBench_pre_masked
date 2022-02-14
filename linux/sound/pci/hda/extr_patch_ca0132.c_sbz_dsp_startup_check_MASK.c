
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init ) (struct hda_codec*) ;} ;
struct hda_codec {TYPE_1__ patch_ops; struct ca0132_spec* spec; } ;
struct ca0132_spec {int startup_check_entered; int dsp_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct hda_codec*,char*,unsigned int) ;
 int FUNC_2 (struct hda_codec*,char*,...) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;
 unsigned int VAR_3[4];
 unsigned int VAR_4 = 0x390;
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 3;

 if (VAR_2->startup_check_entered)
  return;

 VAR_2->startup_check_entered = 1;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  FUNC_0(VAR_1, VAR_4, &VAR_3[VAR_5]);
  VAR_4 += 0x4;
 }
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_3[VAR_5] == 0xa1a2a3a4)
   VAR_6 = 1;
 }

 FUNC_1(VAR_1, "Startup Check: %d ", VAR_6);
 if (VAR_6)
  FUNC_2(VAR_1, "DSP not initialized properly. Attempting to fix.");





 while (VAR_6 && (VAR_7 != 0)) {
  FUNC_2(VAR_1, "Reloading... Tries left: %d", VAR_7);
  FUNC_3(VAR_1);
  VAR_2->dsp_state = VAR_0;
  VAR_1->patch_ops.init(VAR_1);
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   FUNC_0(VAR_1, VAR_4, &VAR_3[VAR_5]);
   VAR_4 += 0x4;
  }
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   if (VAR_3[VAR_5] == 0xa1a2a3a4)
    VAR_6 = 1;
  }
  VAR_7--;
 }

 if (!VAR_6 && VAR_7 < 3)
  FUNC_2(VAR_1, "DSP fixed.");

 if (!VAR_6)
  return;

 FUNC_2(VAR_1, "DSP failed to initialize properly. Either try a full shutdown or a suspend to clear the internal memory.");
}
