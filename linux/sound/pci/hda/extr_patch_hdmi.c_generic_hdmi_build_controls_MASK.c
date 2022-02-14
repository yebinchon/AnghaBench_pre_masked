
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int * mux_nids; int pin_nid; } ;
struct hdmi_spec {int pcm_used; int num_pins; int chmap; int * cvt_nids; scalar_t__ dyn_pcm_assign; int pcm_bitmap; } ;
struct hda_pcm {int device; int pcm; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int) ;
 struct hda_pcm* FUNC_1 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;
 int FUNC_4 (struct hdmi_spec_per_pin*,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_7 (struct hda_codec*,int) ;
 int FUNC_8 (int ,int,int *) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_2->spec;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->pcm_used; VAR_7++) {
  if (!FUNC_1(VAR_3, VAR_7)->pcm) {

   FUNC_5(VAR_7, &VAR_3->pcm_bitmap);
   continue;
  }

  VAR_5 = FUNC_0(VAR_2, VAR_7);
  if (VAR_5 < 0)
   return VAR_5;




  if (VAR_3->dyn_pcm_assign)
   VAR_5 = FUNC_6(VAR_2,
       0, VAR_3->cvt_nids[0],
       VAR_0);
  else {
   struct hdmi_spec_per_pin *VAR_8 =
    FUNC_2(VAR_3, VAR_7);
   VAR_5 = FUNC_6(VAR_2,
        VAR_8->pin_nid,
        VAR_8->mux_nids[0],
        VAR_0);
  }
  if (VAR_5 < 0)
   return VAR_5;
  FUNC_7(VAR_2, VAR_7);

  VAR_4 = FUNC_1(VAR_3, VAR_7)->device;
  if (VAR_4 != VAR_1) {

   VAR_5 = FUNC_3(VAR_2, VAR_7, VAR_4);
   if (VAR_5 < 0)
    return VAR_5;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->num_pins; VAR_6++) {
  struct hdmi_spec_per_pin *VAR_9 = FUNC_2(VAR_3, VAR_6);

  FUNC_4(VAR_9, 0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3->pcm_used; VAR_7++) {
  struct hda_pcm *VAR_10;

  VAR_10 = FUNC_1(VAR_3, VAR_7);
  if (!VAR_10 || !VAR_10->pcm)
   break;
  VAR_5 = FUNC_8(VAR_10->pcm, VAR_7, &VAR_3->chmap);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
