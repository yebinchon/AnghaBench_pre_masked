
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_hdmi_eld {int eld_ver; int baseline_len; int cea_edid_ver; int support_hdcp; int support_ai; int conn_type; int sad_count; int aud_synch_delay; int spk_alloc; scalar_t__ sad; int monitor_name; void* product_id; void* manufacture_id; int port_id; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char const*,int,int,int) ;
 int FUNC_1 (struct hda_codec*,char*,int) ;
 void* FUNC_2 (unsigned char const*) ;
 int FUNC_3 (unsigned char const*) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,unsigned char const*) ;
 int FUNC_5 (struct parsed_hdmi_eld*,int ,int) ;
 int FUNC_6 (int ,unsigned char const*,int) ;

int FUNC_7(struct hda_codec *VAR_5, struct parsed_hdmi_eld *VAR_6,
     const unsigned char *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->eld_ver = FUNC_0(VAR_7, 0, 3, 5);
 if (VAR_6->eld_ver != VAR_3 &&
     VAR_6->eld_ver != VAR_4) {
  FUNC_1(VAR_5, "HDMI: Unknown ELD version %d\n", VAR_6->eld_ver);
  goto out_fail;
 }

 VAR_6->baseline_len = FUNC_0(VAR_7, 2, 0, 8);
 VAR_9 = FUNC_0(VAR_7, 4, 0, 5);
 VAR_6->cea_edid_ver = FUNC_0(VAR_7, 4, 5, 3);

 VAR_6->support_hdcp = FUNC_0(VAR_7, 5, 0, 1);
 VAR_6->support_ai = FUNC_0(VAR_7, 5, 1, 1);
 VAR_6->conn_type = FUNC_0(VAR_7, 5, 2, 2);
 VAR_6->sad_count = FUNC_0(VAR_7, 5, 4, 4);

 VAR_6->aud_synch_delay = FUNC_0(VAR_7, 6, 0, 8) * 2;
 VAR_6->spk_alloc = FUNC_0(VAR_7, 7, 0, 7);

 VAR_6->port_id = FUNC_3(VAR_7 + 8);


 VAR_6->manufacture_id = FUNC_2(VAR_7 + 16);
 VAR_6->product_id = FUNC_2(VAR_7 + 18);

 if (VAR_9 > VAR_2) {
  FUNC_1(VAR_5, "HDMI: MNL is reserved value %d\n", VAR_9);
  goto out_fail;
 } else if (VAR_1 + VAR_9 > VAR_8) {
  FUNC_1(VAR_5, "HDMI: out of range MNL %d\n", VAR_9);
  goto out_fail;
 } else
  FUNC_6(VAR_6->monitor_name, VAR_7 + VAR_1, VAR_9 + 1);

 for (VAR_10 = 0; VAR_10 < VAR_6->sad_count; VAR_10++) {
  if (VAR_1 + VAR_9 + 3 * (VAR_10 + 1) > VAR_8) {
   FUNC_1(VAR_5, "HDMI: out of range SAD %d\n", VAR_10);
   goto out_fail;
  }
  FUNC_4(VAR_5, VAR_6->sad + VAR_10,
     VAR_7 + VAR_1 + VAR_9 + 3 * VAR_10);
 }






 if (!VAR_6->spk_alloc)
  VAR_6->spk_alloc = 0xffff;

 return 0;

out_fail:
 return -VAR_0;
}
