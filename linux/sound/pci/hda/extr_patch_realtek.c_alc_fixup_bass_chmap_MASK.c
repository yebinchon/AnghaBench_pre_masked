
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_6__ {TYPE_2__** pcm_rec; } ;
struct alc_spec {TYPE_3__ gen; } ;
struct TYPE_5__ {TYPE_1__* stream; } ;
struct TYPE_4__ {int chmap; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2,
        const struct hda_fixup *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_0) {
  struct alc_spec *VAR_5 = VAR_2->spec;
  VAR_5->gen.pcm_rec[0]->stream[0].chmap = VAR_1;
 }
}
