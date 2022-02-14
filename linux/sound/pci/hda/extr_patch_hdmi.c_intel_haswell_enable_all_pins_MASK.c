
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec {int vendor_nid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3,
       bool VAR_4)
{
 unsigned int VAR_5;
 struct hdmi_spec *VAR_6 = VAR_3->spec;

 VAR_5 = FUNC_0(VAR_3, VAR_6->vendor_nid, 0,
    VAR_1, 0);
 if (VAR_5 == -1 || VAR_5 & VAR_0)
  return;

 VAR_5 |= VAR_0;
 VAR_5 = FUNC_0(VAR_3, VAR_6->vendor_nid, 0,
    VAR_2, VAR_5);
 if (VAR_5 == -1)
  return;

 if (VAR_4)
  FUNC_1(VAR_3);
}
