
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {size_t* dyn_adc_idx; size_t* cur_mux; unsigned int cur_adc_stream_tag; unsigned int cur_adc_format; int cur_adc; int * adc_nids; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_1,
           struct hda_codec *VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4,
           struct snd_pcm_substream *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_2->spec;
 VAR_6->cur_adc = VAR_6->adc_nids[VAR_6->dyn_adc_idx[VAR_6->cur_mux[0]]];
 VAR_6->cur_adc_stream_tag = VAR_3;
 VAR_6->cur_adc_format = VAR_4;
 FUNC_1(VAR_2, VAR_6->cur_adc, VAR_3, 0, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_0);
 return 0;
}
