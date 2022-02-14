
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int dummy; } ;
struct ffmpeg_source {int source; scalar_t__ is_looping; scalar_t__ is_clear_on_media_end; scalar_t__ close_when_inactive; } ;


 int FUNC_0 (int ,struct obs_source_frame*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct obs_source_frame *VAR_1)
{
 struct ffmpeg_source *VAR_2 = VAR_0;
 if (VAR_2->close_when_inactive)
  return;

 if (VAR_2->is_clear_on_media_end || VAR_2->is_looping)
  FUNC_0(VAR_2->source, VAR_1);
}
