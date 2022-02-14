
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_scale_info {scalar_t__ width; scalar_t__ height; int range; int colorspace; int format; } ;
struct video_output_info {scalar_t__ width; scalar_t__ height; int range; int colorspace; int format; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* get_video_info ) (int ,struct video_scale_info*) ;} ;
struct obs_encoder {TYPE_2__ context; TYPE_1__ info; int media; } ;


 scalar_t__ FUNC_0 (struct obs_encoder*) ;
 scalar_t__ FUNC_1 (struct obs_encoder*) ;
 int FUNC_2 (struct obs_encoder*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,struct video_scale_info*) ;
 struct video_output_info* FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct obs_encoder *VAR_0,
      struct video_scale_info *VAR_1)
{
 const struct video_output_info *VAR_2;
 VAR_2 = FUNC_4(VAR_0->media);

 VAR_1->format = VAR_2->format;
 VAR_1->colorspace = VAR_2->colorspace;
 VAR_1->range = VAR_2->range;
 VAR_1->width = FUNC_1(VAR_0);
 VAR_1->height = FUNC_0(VAR_0);

 if (VAR_0->info.get_video_info)
  VAR_0->info.get_video_info(VAR_0->context.data, VAR_1);

 if (VAR_1->width != VAR_2->width || VAR_1->height != VAR_2->height)
  FUNC_2(VAR_0, VAR_1->width, VAR_1->height);
}
