
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_scale_info {int format; } ;
struct nvenc_encoder {int encoder; } ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct video_scale_info *VAR_2)
{
 struct nvenc_encoder *VAR_3 = VAR_1;
 enum video_format VAR_4;

 VAR_4 = FUNC_0(VAR_3->encoder);

 if (!FUNC_1(VAR_4)) {
  VAR_4 = FUNC_1(VAR_2->format) ? VAR_2->format
        : VAR_0;
 }

 VAR_2->format = VAR_4;
}
