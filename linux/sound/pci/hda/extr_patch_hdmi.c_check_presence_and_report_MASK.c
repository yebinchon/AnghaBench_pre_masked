
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int pcm_lock; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hdmi_spec*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,int ,int) ;
 int FUNC_5 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_0, hda_nid_t VAR_1,
          int VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_0->spec;
 int VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);

 if (VAR_4 < 0)
  return;
 FUNC_2(&VAR_3->pcm_lock);
 if (FUNC_1(FUNC_0(VAR_3, VAR_4), 1))
  FUNC_5(VAR_0);
 FUNC_3(&VAR_3->pcm_lock);
}
