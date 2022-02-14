
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int num_mux_nids; scalar_t__* mux_nids; int mux_idx; } ;
struct hdmi_spec_per_cvt {scalar_t__ cvt_nid; scalar_t__ assigned; } ;
struct hdmi_spec {int num_cvts; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
      int VAR_2, int *VAR_3)
{
 struct hdmi_spec *VAR_4 = VAR_1->spec;
 struct hdmi_spec_per_pin *VAR_5;
 struct hdmi_spec_per_cvt *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0;


 if (VAR_2 < 0)
  VAR_5 = ((void*)0);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_2);


 for (VAR_7 = 0; VAR_7 < VAR_4->num_cvts; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, VAR_7);


  if (VAR_6->assigned)
   continue;
  if (VAR_5 == ((void*)0))
   break;

  for (VAR_8 = 0; VAR_8 < VAR_5->num_mux_nids; VAR_8++)
   if (VAR_5->mux_nids[VAR_8] == VAR_6->cvt_nid)
    break;

  if (VAR_8 == VAR_5->num_mux_nids)
   continue;
  break;
 }


 if (VAR_7 == VAR_4->num_cvts)
  return -VAR_0;

 if (VAR_5 != ((void*)0))
  VAR_5->mux_idx = VAR_8;

 if (VAR_3)
  *VAR_3 = VAR_7;

 return 0;
}
