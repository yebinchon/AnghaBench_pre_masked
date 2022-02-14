
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obs_source_frame {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct TYPE_5__ {TYPE_1__* async_preload_frame; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;



__attribute__((used)) static inline bool FUNC_0(obs_source_t *VAR_0,
      const struct obs_source_frame *VAR_1)
{
 if (!VAR_0->async_preload_frame)
  return 1;

 return VAR_1->width != VAR_0->async_preload_frame->width ||
        VAR_1->height != VAR_0->async_preload_frame->height ||
        VAR_1->format != VAR_0->async_preload_frame->format;
}
