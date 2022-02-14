
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obs_source_frame {int refs; } ;
struct TYPE_5__ {int async_active; int async_mutex; int async_frames; } ;
typedef TYPE_1__ obs_source_t ;


 struct obs_source_frame* FUNC_0 (TYPE_1__*,struct obs_source_frame const*) ;
 int FUNC_1 (int ,struct obs_source_frame**) ;
 int FUNC_2 (struct obs_source_frame*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(obs_source_t *VAR_0,
     const struct obs_source_frame *VAR_1)
{
 if (!FUNC_3(VAR_0, "obs_source_output_video"))
  return;

 if (!VAR_1) {
  VAR_0->async_active = 0;
  return;
 }

 struct obs_source_frame *VAR_2 = !!VAR_1 ? FUNC_0(VAR_0, VAR_1)
        : ((void*)0);


 FUNC_5(&VAR_0->async_mutex);
 if (VAR_2) {
  if (FUNC_4(&VAR_2->refs) == 0) {
   FUNC_2(VAR_2);
   VAR_2 = ((void*)0);
  } else {
   FUNC_1(VAR_0->async_frames, &VAR_2);
   VAR_0->async_active = 1;
  }
 }
 FUNC_6(&VAR_0->async_mutex);
}
