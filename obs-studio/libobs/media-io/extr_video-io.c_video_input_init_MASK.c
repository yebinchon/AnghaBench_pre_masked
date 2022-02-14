
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_scale_info {scalar_t__ format; scalar_t__ width; scalar_t__ height; int colorspace; int range; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; int colorspace; int range; } ;
struct video_output {TYPE_1__ info; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct video_input {TYPE_2__ conversion; int * frame; int scaler; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,TYPE_2__*,struct video_scale_info*,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct video_input *VAR_5,
        struct video_output *VAR_6)
{
 if (VAR_5->conversion.width != VAR_6->info.width ||
     VAR_5->conversion.height != VAR_6->info.height ||
     VAR_5->conversion.format != VAR_6->info.format) {
  struct video_scale_info VAR_7 = {.format = VAR_6->info.format,
      .width = VAR_6->info.width,
      .height = VAR_6->info.height,
      .range = VAR_6->info.range,
      .colorspace =
       VAR_6->info.colorspace};

  int VAR_8 = FUNC_2(&VAR_5->scaler,
           &VAR_5->conversion, &VAR_7,
           VAR_4);
  if (VAR_8 != VAR_3) {
   if (VAR_8 == VAR_2)
    FUNC_0(VAR_0, "video_input_init: Bad "
      "scale conversion type");
   else
    FUNC_0(VAR_0, "video_input_init: Failed to "
      "create scaler");

   return 0;
  }

  for (size_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
   FUNC_1(&VAR_5->frame[VAR_9],
      VAR_5->conversion.format,
      VAR_5->conversion.width,
      VAR_5->conversion.height);
 }

 return 1;
}
