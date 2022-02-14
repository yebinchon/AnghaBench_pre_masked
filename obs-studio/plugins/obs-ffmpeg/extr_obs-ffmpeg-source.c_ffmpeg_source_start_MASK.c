
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {int source; scalar_t__ is_local_file; int is_looping; int media; scalar_t__ media_valid; } ;


 int FUNC_0 (struct ffmpeg_source*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ffmpeg_source *VAR_0)
{
 if (!VAR_0->media_valid)
  FUNC_0(VAR_0);

 if (VAR_0->media_valid) {
  FUNC_1(&VAR_0->media, VAR_0->is_looping);
  if (VAR_0->is_local_file)
   FUNC_2(VAR_0->source);
 }
}
