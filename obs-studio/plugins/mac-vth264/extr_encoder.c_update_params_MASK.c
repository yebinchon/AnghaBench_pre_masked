
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_t ;
typedef void* uint32_t ;
struct vt_h264_encoder {int fullrange; void* bframes; int rc_max_bitrate_window; scalar_t__ rc_max_bitrate; void* limit_bitrate; int profile; void* bitrate; void* keyint; int fps_den; int fps_num; int encoder; int height; int width; int colorspace; } ;
struct video_scale_info {int format; } ;
struct video_output_info {scalar_t__ range; int fps_den; int fps_num; int colorspace; int format; } ;
typedef int obs_data_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 struct video_output_info* FUNC_7 (int *) ;
 int FUNC_8 (struct vt_h264_encoder*,struct video_scale_info*) ;

__attribute__((used)) static void FUNC_9(struct vt_h264_encoder *VAR_1, obs_data_t *VAR_2)
{
 video_t *VAR_3 = FUNC_6(VAR_1->encoder);
 const struct video_output_info *VAR_4 = FUNC_7(VAR_3);

 struct video_scale_info VAR_5 = {.format = VAR_4->format};

 VAR_1->fullrange = VAR_4->range == VAR_0;


 FUNC_8(VAR_1, &VAR_5);

 VAR_1->colorspace = VAR_4->colorspace;

 VAR_1->width = FUNC_5(VAR_1->encoder);
 VAR_1->height = FUNC_4(VAR_1->encoder);
 VAR_1->fps_num = VAR_4->fps_num;
 VAR_1->fps_den = VAR_4->fps_den;
 VAR_1->keyint = (uint32_t)FUNC_2(VAR_2, "keyint_sec");
 VAR_1->bitrate = (uint32_t)FUNC_2(VAR_2, "bitrate");
 VAR_1->profile = FUNC_3(VAR_2, "profile");
 VAR_1->limit_bitrate = FUNC_0(VAR_2, "limit_bitrate");
 VAR_1->rc_max_bitrate = FUNC_2(VAR_2, "max_bitrate");
 VAR_1->rc_max_bitrate_window =
  FUNC_1(VAR_2, "max_bitrate_window");
 VAR_1->bframes = FUNC_0(VAR_2, "bframes");
}
