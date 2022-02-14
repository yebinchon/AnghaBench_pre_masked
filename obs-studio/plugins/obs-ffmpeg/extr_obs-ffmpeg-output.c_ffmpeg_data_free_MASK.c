
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ffmpeg_data {scalar_t__ last_error; TYPE_2__* output; int * audio_streams; scalar_t__ video; scalar_t__ initialized; } ;
struct TYPE_5__ {int pb; TYPE_1__* oformat; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ffmpeg_data*) ;
 int FUNC_5 (struct ffmpeg_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ffmpeg_data*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ffmpeg_data *VAR_1)
{
 if (VAR_1->initialized)
  FUNC_0(VAR_1->output);

 if (VAR_1->video)
  FUNC_5(VAR_1);
 if (VAR_1->audio_streams) {
  FUNC_4(VAR_1);
  FUNC_6(VAR_1->audio_streams);
  VAR_1->audio_streams = ((void*)0);
 }

 if (VAR_1->output) {
  if ((VAR_1->output->oformat->flags & VAR_0) == 0)
   FUNC_2(VAR_1->output->pb);

  FUNC_1(VAR_1->output);
 }

 if (VAR_1->last_error)
  FUNC_3(VAR_1->last_error);

 FUNC_7(VAR_1, 0, sizeof(struct ffmpeg_data));
}
