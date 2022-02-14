
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; } ;
struct sigmatel_spec {int linear_tone_beep; TYPE_1__ gen; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_11)
{
 struct sigmatel_spec *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = VAR_11->spec;
 VAR_12->linear_tone_beep = 1;
 VAR_12->gen.own_eapd_ctl = 1;

 FUNC_1(VAR_11, VAR_7);


 FUNC_3(VAR_11, 0x12, VAR_6,
      (0 << VAR_2) |
      (2 << VAR_1) |
      (0x27 << VAR_3) |
      (0 << VAR_0));

 FUNC_4(VAR_11, VAR_10, VAR_8,
      VAR_9);
 FUNC_2(VAR_11, VAR_4);

 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13 < 0) {
  FUNC_5(VAR_11);
  return VAR_13;
 }

 FUNC_2(VAR_11, VAR_5);

 return 0;
}
