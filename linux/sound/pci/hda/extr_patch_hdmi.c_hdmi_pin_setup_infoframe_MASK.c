
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dp_audio_infoframe {int type; int len; int ver; int CC02_CT47; int CA; } ;
struct hdmi_audio_infoframe {int type; int ver; int len; int CC02_CT47; int CA; } ;
union audio_infoframe {int bytes; struct dp_audio_infoframe dp; struct hdmi_audio_infoframe hdmi; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;
typedef int ai ;


 int FUNC_0 (struct hda_codec*,char*,int ,...) ;
 int FUNC_1 (struct hdmi_audio_infoframe*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (union audio_infoframe*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_0,
         hda_nid_t VAR_1,
         int VAR_2, int VAR_3,
         int VAR_4)
{
 union audio_infoframe VAR_5;

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 if (VAR_4 == 0) {
  struct hdmi_audio_infoframe *VAR_6 = &VAR_5.hdmi;

  VAR_6->type = 0x84;
  VAR_6->ver = 0x01;
  VAR_6->len = 0x0a;
  VAR_6->CC02_CT47 = VAR_3 - 1;
  VAR_6->CA = VAR_2;
  FUNC_1(VAR_6);
 } else if (VAR_4 == 1) {
  struct dp_audio_infoframe *VAR_7 = &VAR_5.dp;

  VAR_7->type = 0x84;
  VAR_7->len = 0x1b;
  VAR_7->ver = 0x11 << 2;
  VAR_7->CC02_CT47 = VAR_3 - 1;
  VAR_7->CA = VAR_2;
 } else {
  FUNC_0(VAR_0, "HDMI: unknown connection type at pin %d\n",
       VAR_1);
  return;
 }






 if (!FUNC_3(VAR_0, VAR_1, VAR_5.bytes,
     sizeof(VAR_5))) {
  FUNC_0(VAR_0,
     "hdmi_pin_setup_infoframe: pin=%d channels=%d ca=0x%02x\n",
       VAR_1,
       VAR_3, VAR_2);
  FUNC_5(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_1,
         VAR_5.bytes, sizeof(VAR_5));
  FUNC_4(VAR_0, VAR_1);
 }
}
