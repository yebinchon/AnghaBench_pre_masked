
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct obs_source_frame {int timestamp; int height; int width; int format; } ;
struct TYPE_7__ {int last_frame_ts; int async_texrender; int async_textures; int async_preload_frame; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (int ,struct obs_source_frame const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct obs_source_frame const*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(obs_source_t *VAR_0,
      const struct obs_source_frame *VAR_1)
{
 if (!FUNC_5(VAR_0, "obs_source_preload_video"))
  return;
 if (!VAR_1)
  return;

 FUNC_1();

 if (FUNC_6(VAR_0, VAR_1)) {
  FUNC_4(VAR_0->async_preload_frame);
  VAR_0->async_preload_frame = FUNC_3(
   VAR_1->format, VAR_1->width, VAR_1->height);
 }

 FUNC_0(VAR_0->async_preload_frame, VAR_1);
 FUNC_7(VAR_0, VAR_0->async_preload_frame);
 FUNC_8(VAR_0, VAR_0->async_preload_frame,
         VAR_0->async_textures, VAR_0->async_texrender);

 VAR_0->last_frame_ts = VAR_1->timestamp;

 FUNC_2();
}
