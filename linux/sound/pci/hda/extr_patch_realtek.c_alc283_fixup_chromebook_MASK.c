
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int mixer_nid; } ;
struct alc_spec {TYPE_1__ gen; } ;




 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
        const struct hda_fixup *VAR_1, int VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_0, 0x03, 0);

  VAR_3->gen.mixer_nid = 0;
  break;
 case 129:


  FUNC_0(VAR_0, 0x06, 0x000c, 0);

  FUNC_0(VAR_0, 0x1a, 0, 1 << 4);
  break;
 }
}
