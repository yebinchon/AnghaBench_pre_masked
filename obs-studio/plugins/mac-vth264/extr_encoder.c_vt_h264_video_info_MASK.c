
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_h264_encoder {scalar_t__ obs_pix_fmt; scalar_t__ fullrange; int vt_pix_fmt; } ;
struct video_scale_info {scalar_t__ format; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(void *VAR_8, struct video_scale_info *VAR_9)
{
 struct vt_h264_encoder *VAR_10 = VAR_8;

 if (VAR_9->format == VAR_1) {
  VAR_10->obs_pix_fmt = VAR_9->format;
  VAR_10->vt_pix_fmt =
   VAR_10->fullrange
    ? VAR_7
    : VAR_6;
  return;
 }

 if (VAR_9->format == VAR_2)
  FUNC_0(VAR_0, "I444 color format not supported");


 VAR_10->obs_pix_fmt = VAR_3;
 VAR_10->vt_pix_fmt =
  VAR_10->fullrange
   ? VAR_4
   : VAR_5;

 VAR_9->format = VAR_10->obs_pix_fmt;
}
