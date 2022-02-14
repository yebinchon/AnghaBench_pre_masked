
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int skip_verbs; } ;
struct alc_spec {int init_amp; TYPE_1__ gen; int (* init_hook ) (struct hda_codec*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 scalar_t__ FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;


 if (FUNC_3(VAR_1))
  FUNC_2(VAR_1);

 if (VAR_2->init_hook)
  VAR_2->init_hook(VAR_1);

 VAR_2->gen.skip_verbs = 1;
 FUNC_6(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_2->init_amp);
 FUNC_5(VAR_1);

 FUNC_4(VAR_1, VAR_0);

 return 0;
}
