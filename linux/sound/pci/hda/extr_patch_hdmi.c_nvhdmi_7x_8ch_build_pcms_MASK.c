
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int dummy; } ;
struct hda_pcm {int own_chmap; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 struct hda_pcm* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;
 int VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2) {
  struct hda_pcm *VAR_3 = FUNC_0(VAR_1, 0);
  VAR_3->own_chmap = 1;
 }
 return VAR_2;
}
