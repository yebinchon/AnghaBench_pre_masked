
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_2__ {int add_stereo_mix_input; } ;
struct ad198x_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
          const struct hda_fixup *VAR_3, int VAR_4)
{
 struct ad198x_spec *VAR_5 = VAR_2->spec;

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2, VAR_3, VAR_4);
  VAR_5->gen.add_stereo_mix_input = VAR_1;
 }
}
