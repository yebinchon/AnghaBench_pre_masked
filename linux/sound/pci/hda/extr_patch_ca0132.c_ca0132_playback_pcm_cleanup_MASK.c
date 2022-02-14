
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; int * dacs; scalar_t__* effects_switch; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_3,
   struct hda_codec *VAR_4,
   struct snd_pcm_substream *VAR_5)
{
 struct ca0132_spec *VAR_6 = VAR_4->spec;

 if (VAR_6->dsp_state == VAR_0)
  return 0;



 if (VAR_6->effects_switch[VAR_2 - VAR_1])
  FUNC_0(50);

 FUNC_1(VAR_4, VAR_6->dacs[0]);

 return 0;
}
