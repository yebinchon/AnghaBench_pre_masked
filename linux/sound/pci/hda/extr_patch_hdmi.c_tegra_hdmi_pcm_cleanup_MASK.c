
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_0,
      struct hda_codec *VAR_1,
      struct snd_pcm_substream *VAR_2)
{

 FUNC_1(VAR_1, 0);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
