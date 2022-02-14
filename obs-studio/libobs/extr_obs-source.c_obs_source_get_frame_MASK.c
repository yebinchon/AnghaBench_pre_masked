
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_source_frame {int refs; } ;
struct TYPE_4__ {int async_mutex; struct obs_source_frame* cur_async_frame; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct obs_source_frame *FUNC_4(obs_source_t *VAR_0)
{
 struct obs_source_frame *VAR_1 = ((void*)0);

 if (!FUNC_0(VAR_0, "obs_source_get_frame"))
  return ((void*)0);

 FUNC_2(&VAR_0->async_mutex);

 VAR_1 = VAR_0->cur_async_frame;
 VAR_0->cur_async_frame = ((void*)0);

 if (VAR_1) {
  FUNC_1(&VAR_1->refs);
 }

 FUNC_3(&VAR_0->async_mutex);

 return VAR_1;
}
