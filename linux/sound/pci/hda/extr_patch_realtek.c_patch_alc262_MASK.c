
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int shared_mic_vref_pin; int beep_nid; int no_analog; } ;
struct alc_spec {TYPE_1__ gen; int shutup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_6 ;
 int FUNC_3 (struct hda_codec*,int,int,int) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*,int,int,int ,int) ;
 scalar_t__ FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct alc_spec*,int,int,int ) ;
 int FUNC_9 (struct hda_codec*,int ) ;
 int FUNC_10 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct hda_codec *VAR_7)
{
 struct alc_spec *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, 0x0b);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7->spec;
 VAR_8->gen.shared_mic_vref_pin = 0x18;

 VAR_8->shutup = VAR_6;







 FUNC_3(VAR_7, 0x20, 0x0a, 10);

 FUNC_5(VAR_7);

 FUNC_10(VAR_7, VAR_3, VAR_4,
         VAR_5);
 FUNC_9(VAR_7, VAR_0);

 FUNC_2(VAR_7);

 if (FUNC_7(VAR_7))
  VAR_8->gen.beep_nid = 0x01;


 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  goto error;

 if (!VAR_8->gen.no_analog && VAR_8->gen.beep_nid) {
  VAR_9 = FUNC_8(VAR_8, 0x0b, 0x05, VAR_2);
  if (VAR_9 < 0)
   goto error;
 }

 FUNC_9(VAR_7, VAR_1);

 return 0;

 error:
 FUNC_4(VAR_7);
 return VAR_9;
}
