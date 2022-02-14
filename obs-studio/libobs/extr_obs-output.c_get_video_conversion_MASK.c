
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_scale_info {scalar_t__ height; scalar_t__ width; int range; int colorspace; int format; } ;
struct video_output_info {int format; } ;
struct obs_output {struct video_scale_info video_conversion; scalar_t__ scaled_height; scalar_t__ scaled_width; int video; scalar_t__ video_conversion_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct obs_output*) ;
 scalar_t__ FUNC_1 (struct obs_output*) ;
 scalar_t__ FUNC_2 (struct obs_output*) ;
 struct video_output_info* FUNC_3 (int ) ;

__attribute__((used)) static inline struct video_scale_info *
FUNC_4(struct obs_output *VAR_2)
{
 if (VAR_2->video_conversion_set) {
  if (!VAR_2->video_conversion.width)
   VAR_2->video_conversion.width =
    FUNC_2(VAR_2);

  if (!VAR_2->video_conversion.height)
   VAR_2->video_conversion.height =
    FUNC_1(VAR_2);

  return &VAR_2->video_conversion;

 } else if (FUNC_0(VAR_2)) {
  const struct video_output_info *VAR_3 =
   FUNC_3(VAR_2->video);

  VAR_2->video_conversion.format = VAR_3->format;
  VAR_2->video_conversion.colorspace = VAR_0;
  VAR_2->video_conversion.range = VAR_1;
  VAR_2->video_conversion.width = VAR_2->scaled_width;
  VAR_2->video_conversion.height = VAR_2->scaled_height;
  return &VAR_2->video_conversion;
 }

 return ((void*)0);
}
