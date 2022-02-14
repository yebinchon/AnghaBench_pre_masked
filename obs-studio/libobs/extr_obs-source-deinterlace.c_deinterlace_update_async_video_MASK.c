
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct obs_source_frame {int dummy; } ;
struct TYPE_8__ {int deinterlace_rendered; int * async_texrender; int * async_prev_texrender; int ** async_textures; int ** async_prev_textures; } ;
typedef TYPE_1__ obs_source_t ;
typedef int gs_texture_t ;
typedef int gs_texrender_t ;


 size_t VAR_0 ;
 struct obs_source_frame* FUNC_0 (TYPE_1__*,struct obs_source_frame*) ;
 struct obs_source_frame* FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,struct obs_source_frame*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct obs_source_frame*) ;
 int FUNC_4 (TYPE_1__*,struct obs_source_frame*,int **,int *) ;

void FUNC_5(obs_source_t *VAR_1)
{
 struct obs_source_frame *VAR_2;
 bool VAR_3;

 if (VAR_1->deinterlace_rendered)
  return;

 VAR_2 = FUNC_1(VAR_1, &VAR_3);

 VAR_1->deinterlace_rendered = 1;
 if (VAR_2)
  VAR_2 = FUNC_0(VAR_1, VAR_2);

 if (VAR_2) {
  if (FUNC_3(VAR_1, VAR_2)) {
   FUNC_4(VAR_1, VAR_2,
           VAR_1->async_prev_textures,
           VAR_1->async_prev_texrender);
  }

  FUNC_2(VAR_1, VAR_2);

 } else if (VAR_3) {
  for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   gs_texture_t *VAR_5 = VAR_1->async_prev_textures[VAR_4];
   VAR_1->async_prev_textures[VAR_4] =
    VAR_1->async_textures[VAR_4];
   VAR_1->async_textures[VAR_4] = VAR_5;
  }

  if (VAR_1->async_texrender) {
   gs_texrender_t *VAR_6 = VAR_1->async_prev_texrender;
   VAR_1->async_prev_texrender = VAR_1->async_texrender;
   VAR_1->async_texrender = VAR_6;
  }
 }
}
