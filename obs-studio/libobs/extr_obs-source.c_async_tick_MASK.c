
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int * cur_async_frame; int async_update_texture; int async_mutex; int last_sys_timestamp; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_10__ {int video_time; } ;
struct TYPE_12__ {TYPE_1__ video; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_7(obs_source_t *VAR_1)
{
 uint64_t VAR_2 = VAR_0->video.video_time;

 FUNC_3(&VAR_1->async_mutex);

 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_1, VAR_2);
 } else {
  if (VAR_1->cur_async_frame) {
   FUNC_5(VAR_1, VAR_1->cur_async_frame);
   VAR_1->cur_async_frame = ((void*)0);
  }

  VAR_1->cur_async_frame = FUNC_2(VAR_1, VAR_2);
 }

 VAR_1->last_sys_timestamp = VAR_2;
 FUNC_4(&VAR_1->async_mutex);

 if (VAR_1->cur_async_frame)
  VAR_1->async_update_texture =
   FUNC_6(VAR_1, VAR_1->cur_async_frame);
}
