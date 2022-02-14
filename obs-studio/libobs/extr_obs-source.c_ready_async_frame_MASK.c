
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct obs_source_frame {scalar_t__ timestamp; } ;
struct TYPE_7__ {int num; struct obs_source_frame** array; } ;
struct TYPE_6__ {scalar_t__ last_sys_timestamp; scalar_t__ last_frame_ts; TYPE_5__ async_frames; scalar_t__ async_unbuffered; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_5__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,struct obs_source_frame*) ;

__attribute__((used)) static bool FUNC_4(obs_source_t *VAR_2, uint64_t VAR_3)
{
 struct obs_source_frame *VAR_4 = VAR_2->async_frames.array[0];
 struct obs_source_frame *VAR_5 = ((void*)0);
 uint64_t VAR_6 = VAR_3 - VAR_2->last_sys_timestamp;
 uint64_t VAR_7 = VAR_4->timestamp;
 uint64_t VAR_8 = 0;

 if (VAR_2->async_unbuffered) {
  while (VAR_2->async_frames.num > 1) {
   FUNC_1(VAR_2->async_frames, 0);
   FUNC_3(VAR_2, VAR_4);
   VAR_4 = VAR_2->async_frames.array[0];
  }

  VAR_2->last_frame_ts = VAR_4->timestamp;
  return 1;
 }
 if (FUNC_2(VAR_2, VAR_7)) {



  VAR_2->last_frame_ts = VAR_4->timestamp;
  return 1;
 } else {
  VAR_8 = VAR_7 - VAR_2->last_frame_ts;
  VAR_2->last_frame_ts += VAR_6;
 }

 while (VAR_2->last_frame_ts > VAR_4->timestamp) {





  if ((VAR_2->last_frame_ts - VAR_4->timestamp) < 2000000)
   break;

  if (VAR_5)
   FUNC_1(VAR_2->async_frames, 0);
  FUNC_3(VAR_2, VAR_5);

  if (VAR_2->async_frames.num == 1)
   return 1;

  VAR_5 = VAR_4;
  VAR_4 = VAR_2->async_frames.array[1];


  if ((VAR_4->timestamp - VAR_7) > VAR_1) {



   VAR_2->last_frame_ts =
    VAR_4->timestamp - VAR_8;
  }

  VAR_7 = VAR_4->timestamp;
  VAR_8 = VAR_7 - VAR_2->last_frame_ts;
 }






 return VAR_5 != ((void*)0);
}
