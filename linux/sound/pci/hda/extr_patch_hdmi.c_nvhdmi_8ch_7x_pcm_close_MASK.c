
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdmi_spec {int multiout; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int *) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_4,
       struct hda_codec *VAR_5,
       struct snd_pcm_substream *VAR_6)
{
 struct hdmi_spec *VAR_7 = VAR_5->spec;
 int VAR_8;

 FUNC_1(VAR_5, VAR_3,
   0, VAR_0, 0);
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {

  FUNC_1(VAR_5, VAR_2[VAR_8], 0,
    VAR_0, 0);

  FUNC_1(VAR_5, VAR_2[VAR_8], 0,
    VAR_1, 0);
 }



 FUNC_0(VAR_5, 8);

 return FUNC_2(VAR_5, &VAR_7->multiout);
}
