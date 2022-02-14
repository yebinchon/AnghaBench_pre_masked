
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {unsigned long long mute_bits; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int FUNC_0 (struct hda_codec*) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;
 FUNC_0(VAR_0);
 if (FUNC_1(VAR_0, 0x1b))
  VAR_1->gen.mute_bits |= (1ULL << 0x14);
}
