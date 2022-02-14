
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {int destroy_media; int media_valid; int media; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, float VAR_1)
{
 FUNC_0(VAR_1);

 struct ffmpeg_source *VAR_2 = VAR_0;
 if (VAR_2->destroy_media) {
  if (VAR_2->media_valid) {
   FUNC_1(&VAR_2->media);
   VAR_2->media_valid = 0;
  }
  VAR_2->destroy_media = 0;
 }
}
