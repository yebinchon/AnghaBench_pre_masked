
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hda_pcm_stream {int channels_max; int nid; } ;
struct hdmi_spec {struct hda_pcm_stream pcm_playback; TYPE_1__* pcm_rec; } ;
struct hda_pcm {struct hda_pcm_stream* stream; int pcm_type; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {struct hda_pcm* pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct hda_pcm* FUNC_3 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_3->spec;
 struct hda_pcm *VAR_5;
 unsigned int VAR_6;
 struct hda_pcm_stream *VAR_7;
 struct hdmi_spec_per_cvt *VAR_8;

 VAR_8 = FUNC_0(VAR_4, 0);
 VAR_6 = FUNC_1(VAR_3, VAR_8->cvt_nid);
 VAR_6 = FUNC_2(VAR_6);

 VAR_5 = FUNC_3(VAR_3, "HDMI 0");
 if (!VAR_5)
  return -VAR_0;
 VAR_4->pcm_rec[0].pcm = VAR_5;
 VAR_5->pcm_type = VAR_1;
 VAR_7 = &VAR_5->stream[VAR_2];
 *VAR_7 = VAR_4->pcm_playback;
 VAR_7->nid = VAR_8->cvt_nid;
 if (VAR_7->channels_max <= 2 && VAR_6 && VAR_6 <= 16)
  VAR_7->channels_max = VAR_6;

 return 0;
}
