
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {int destroy_media; scalar_t__ media_valid; scalar_t__ close_when_inactive; int source; scalar_t__ is_clear_on_media_end; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ffmpeg_source *VAR_1 = VAR_0;
 if (VAR_1->is_clear_on_media_end) {
  FUNC_0(VAR_1->source, ((void*)0));
  if (VAR_1->close_when_inactive && VAR_1->media_valid)
   VAR_1->destroy_media = 1;
 }
}
