
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct dma_engine {TYPE_1__* dmab; int buf_size; int m_converter_format; struct hda_codec* codec; } ;
struct ca0132_spec {int dsp_stream_id; } ;
struct TYPE_3__ {scalar_t__ area; } ;


 int FUNC_0 (struct hda_codec*,TYPE_1__*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct dma_engine *VAR_0)
{
 struct hda_codec *VAR_1 = VAR_0->codec;
 struct ca0132_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 if (VAR_0->dmab->area)
  FUNC_0(VAR_1, VAR_0->dmab);

 VAR_3 = FUNC_1(VAR_1,
   VAR_0->m_converter_format,
   VAR_0->buf_size,
   VAR_0->dmab);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2->dsp_stream_id = VAR_3;
 return 0;
}
