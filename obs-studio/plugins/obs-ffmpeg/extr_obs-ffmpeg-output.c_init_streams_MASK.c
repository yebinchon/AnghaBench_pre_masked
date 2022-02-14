
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ffmpeg_data {int num_audio_streams; int audio_streams; TYPE_1__* output; } ;
struct TYPE_4__ {scalar_t__ video_codec; scalar_t__ audio_codec; } ;
struct TYPE_3__ {TYPE_2__* oformat; } ;
typedef TYPE_2__ AVOutputFormat ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ffmpeg_data*,int) ;
 int FUNC_2 (struct ffmpeg_data*) ;

__attribute__((used)) static inline bool FUNC_3(struct ffmpeg_data *VAR_1)
{
 AVOutputFormat *VAR_2 = VAR_1->output->oformat;

 if (VAR_2->video_codec != VAR_0)
  if (!FUNC_2(VAR_1))
   return 0;

 if (VAR_2->audio_codec != VAR_0 &&
     VAR_1->num_audio_streams) {
  VAR_1->audio_streams =
   FUNC_0(1, VAR_1->num_audio_streams * sizeof(void *));
  for (int VAR_3 = 0; VAR_3 < VAR_1->num_audio_streams; VAR_3++) {
   if (!FUNC_1(VAR_1, VAR_3))
    return 0;
  }
 }

 return 1;
}
