
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {int multiout; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct hda_codec*,int *,unsigned int,unsigned int,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_1,
    struct hda_codec *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4,
    struct snd_pcm_substream *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_2->spec;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6->multiout,
            VAR_3, VAR_4, VAR_5);
 if (!VAR_7)
  FUNC_0(VAR_1, VAR_2, VAR_5,
           VAR_0);
 return VAR_7;
}
