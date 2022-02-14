
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct hda_pcm** pcm_rec; } ;
struct via_spec {TYPE_2__ gen; } ;
struct hda_pcm {scalar_t__ pcm_type; TYPE_3__* stream; } ;
struct TYPE_4__ {int vendor_id; } ;
struct hda_codec {TYPE_1__ core; struct via_spec* spec; } ;
struct TYPE_6__ {int formats; int substreams; } ;


 int FUNC_0 (struct hda_pcm**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_3)
{
 struct via_spec *VAR_4 = VAR_3->spec;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0 || VAR_3->core.vendor_id != 0x11061708)
  return VAR_6;





 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->gen.pcm_rec); VAR_5++) {
  struct hda_pcm *VAR_7 = VAR_4->gen.pcm_rec[VAR_5];
  if (!VAR_7)
   continue;
  if (!VAR_7->stream[VAR_2].substreams ||
      VAR_7->pcm_type != VAR_0)
   continue;
  VAR_7->stream[VAR_2].formats =
   VAR_1;
 }

 return 0;
}
