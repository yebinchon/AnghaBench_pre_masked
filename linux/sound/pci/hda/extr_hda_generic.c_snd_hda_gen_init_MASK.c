
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hook; scalar_t__ sw_kctl; } ;
struct hda_gen_spec {TYPE_2__ vmaster_mute; int skip_verbs; int (* init_hook ) (struct hda_codec*) ;} ;
struct TYPE_3__ {int regmap; } ;
struct hda_codec {TYPE_1__ core; struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct hda_codec*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct hda_codec*) ;
 int FUNC_13 (struct hda_codec*) ;
 int FUNC_14 (struct hda_codec*) ;

int FUNC_15(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;

 if (VAR_1->init_hook)
  VAR_1->init_hook(VAR_0);

 if (!VAR_1->skip_verbs)
  FUNC_10(VAR_0);

 FUNC_8(VAR_0);
 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0);

 FUNC_0(VAR_0);

 FUNC_13(VAR_0);


 FUNC_14(VAR_0);

 FUNC_9(VAR_0->core.regmap);

 if (VAR_1->vmaster_mute.sw_kctl && VAR_1->vmaster_mute.hook)
  FUNC_11(&VAR_1->vmaster_mute);

 FUNC_1(VAR_0, 0x01);
 return 0;
}
