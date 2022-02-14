
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {scalar_t__ pin_nid; int dev_id; int pcm; } ;
struct hdmi_spec_per_cvt {int assigned; } ;
struct hdmi_spec {int num_pins; int num_cvts; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*,int,scalar_t__) ;
 struct hdmi_spec_per_cvt* FUNC_1 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,scalar_t__) ;
 int FUNC_6 (struct hda_codec*,scalar_t__) ;
 int FUNC_7 (struct hda_codec*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct hda_codec *VAR_2,
      hda_nid_t VAR_3,
      int VAR_4, int VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_2->spec;
 hda_nid_t VAR_7;
 int VAR_8, VAR_9;
 struct hdmi_spec_per_cvt *VAR_10;
 struct hdmi_spec_per_pin *VAR_11;
 int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_6->num_pins; VAR_12++) {
  int VAR_13;
  int VAR_14;

  VAR_11 = FUNC_2(VAR_6, VAR_12);




  if (!VAR_11->pcm)
   continue;

  if ((VAR_11->pin_nid == VAR_3) &&
   (VAR_11->dev_id == VAR_4))
   continue;







  VAR_14 = FUNC_6(VAR_2, VAR_11->pin_nid) + 1;
  if (VAR_11->dev_id >= VAR_14)
   continue;

  VAR_7 = VAR_11->pin_nid;







  VAR_13 = FUNC_5(VAR_2, VAR_7);
  FUNC_7(VAR_2, VAR_7, VAR_11->dev_id);
  VAR_9 = FUNC_3(VAR_2, VAR_7, 0,
       VAR_0, 0);
  if (VAR_9 != VAR_5) {
   FUNC_7(VAR_2, VAR_7, VAR_13);
   continue;
  }





  for (VAR_8 = 0; VAR_8 < VAR_6->num_cvts; VAR_8++) {
   VAR_10 = FUNC_1(VAR_6, VAR_8);
   if (!VAR_10->assigned) {
    FUNC_0(VAR_2,
       "choose cvt %d for pin nid %d\n",
     VAR_8, VAR_7);
    FUNC_4(VAR_2, VAR_7, 0,
         VAR_1,
         VAR_8);
    break;
   }
  }
  FUNC_7(VAR_2, VAR_7, VAR_13);
 }
}
