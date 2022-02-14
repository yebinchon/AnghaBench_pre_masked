
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {int source; scalar_t__ is_clear_on_media_end; int media; scalar_t__ media_valid; scalar_t__ restart_on_activate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ffmpeg_source *VAR_1 = VAR_0;

 if (VAR_1->restart_on_activate) {
  if (VAR_1->media_valid) {
   FUNC_0(&VAR_1->media);

   if (VAR_1->is_clear_on_media_end)
    FUNC_1(VAR_1->source, ((void*)0));
  }
 }
}
