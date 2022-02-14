
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int recording; } ;




 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_1(struct hda_pcm_stream *VAR_0,
     struct hda_codec *VAR_1,
     struct snd_pcm_substream *VAR_2,
     int VAR_3)
{
 struct conexant_spec *VAR_4 = VAR_1->spec;




 switch (VAR_3) {
 case 128:
  VAR_4->recording = 1;
  FUNC_0(VAR_1);
  break;
 case 129:
  VAR_4->recording = 0;
  FUNC_0(VAR_1);
  break;
 }
}
