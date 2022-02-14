
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int * linesize; int * data; } ;
struct obs_core_video {int ** mapped_surfaces; int *** copy_surfaces; int * textures_copied; } ;
typedef int gs_stagesurf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_core_video *VAR_1,
      int VAR_2, struct video_data *VAR_3)
{
 if (!VAR_1->textures_copied[VAR_2])
  return 0;

 for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  gs_stagesurf_t *VAR_5 =
   VAR_1->copy_surfaces[VAR_2][VAR_4];
  if (VAR_5) {
   if (!FUNC_0(VAR_5, &VAR_3->data[VAR_4],
       &VAR_3->linesize[VAR_4]))
    return 0;

   VAR_1->mapped_surfaces[VAR_4] = VAR_5;
  }
 }
 return 1;
}
