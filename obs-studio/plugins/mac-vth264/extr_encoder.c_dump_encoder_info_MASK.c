
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {char* profile; scalar_t__ hw_enc; int rc_max_bitrate_window; int rc_max_bitrate; scalar_t__ limit_bitrate; int keyint; int height; int width; int fps_den; int fps_num; int bitrate; int vt_encoder_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,char*,int ,int ,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct vt_h264_encoder *VAR_1)
{
 FUNC_0(VAR_0,
  "settings:\n"
  "\tvt_encoder_id          %s\n"
  "\tbitrate:               %d (kbps)\n"
  "\tfps_num:               %d\n"
  "\tfps_den:               %d\n"
  "\twidth:                 %d\n"
  "\theight:                %d\n"
  "\tkeyint:                %d (s)\n"
  "\tlimit_bitrate:         %s\n"
  "\trc_max_bitrate:        %d (kbps)\n"
  "\trc_max_bitrate_window: %f (s)\n"
  "\thw_enc:                %s\n"
  "\tprofile:               %s\n",
  VAR_1->vt_encoder_id, VAR_1->bitrate, VAR_1->fps_num, VAR_1->fps_den,
  VAR_1->width, VAR_1->height, VAR_1->keyint,
  VAR_1->limit_bitrate ? "on" : "off", VAR_1->rc_max_bitrate,
  VAR_1->rc_max_bitrate_window, VAR_1->hw_enc ? "on" : "off",
  (VAR_1->profile != ((void*)0) && !!FUNC_1(VAR_1->profile)) ? VAR_1->profile
         : "default");
}
