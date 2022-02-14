
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct obs_source_frame {int timestamp; } ;
struct TYPE_6__ {struct obs_source_frame** array; int num; } ;
struct TYPE_5__ {int last_frame_ts; TYPE_4__ async_frames; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_4__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline struct obs_source_frame *FUNC_2(obs_source_t *VAR_0,
        uint64_t VAR_1)
{
 if (!VAR_0->async_frames.num)
  return ((void*)0);

 if (!VAR_0->last_frame_ts || FUNC_1(VAR_0, VAR_1)) {
  struct obs_source_frame *VAR_2 = VAR_0->async_frames.array[0];
  FUNC_0(VAR_0->async_frames, 0);

  if (!VAR_0->last_frame_ts)
   VAR_0->last_frame_ts = VAR_2->timestamp;

  return VAR_2;
 }

 return ((void*)0);
}
