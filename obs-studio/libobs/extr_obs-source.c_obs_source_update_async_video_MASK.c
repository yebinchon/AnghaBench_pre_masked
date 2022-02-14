
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct obs_source_frame {scalar_t__ timestamp; } ;
struct TYPE_11__ {int async_rendered; int timing_set; int async_update_texture; int async_texrender; int async_textures; scalar_t__ timing_adjust; int async_unbuffered; int async_decoupled; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_10__ {scalar_t__ video_time; } ;
struct TYPE_12__ {TYPE_1__ video; } ;


 int FUNC_0 (TYPE_2__*,struct obs_source_frame*) ;
 struct obs_source_frame* FUNC_1 (TYPE_2__*,struct obs_source_frame*) ;
 TYPE_7__* VAR_0 ;
 struct obs_source_frame* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct obs_source_frame*) ;
 int FUNC_4 (TYPE_2__*,struct obs_source_frame*,int ,int ) ;

__attribute__((used)) static void FUNC_5(obs_source_t *VAR_1)
{
 if (!VAR_1->async_rendered) {
  struct obs_source_frame *VAR_2 = FUNC_2(VAR_1);

  if (VAR_2)
   VAR_2 = FUNC_1(VAR_1, VAR_2);

  VAR_1->async_rendered = 1;
  if (VAR_2) {
   FUNC_0(VAR_1, VAR_2);

   if (!VAR_1->async_decoupled ||
       !VAR_1->async_unbuffered) {
    VAR_1->timing_adjust = VAR_0->video.video_time -
       VAR_2->timestamp;
    VAR_1->timing_set = 1;
   }

   if (VAR_1->async_update_texture) {
    FUNC_4(VAR_1, VAR_2,
            VAR_1->async_textures,
            VAR_1->async_texrender);
    VAR_1->async_update_texture = 0;
   }

   FUNC_3(VAR_1, VAR_2);
  }
 }
}
