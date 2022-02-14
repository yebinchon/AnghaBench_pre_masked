
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cache_size; int height; int width; int format; } ;
struct video_output {size_t available_frames; TYPE_1__ info; int * cache; } ;
struct video_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct video_frame*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct video_output *VAR_1)
{
 if (VAR_1->info.cache_size > VAR_0)
  VAR_1->info.cache_size = VAR_0;

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->info.cache_size; VAR_2++) {
  struct video_frame *VAR_3;
  VAR_3 = (struct video_frame *)&VAR_1->cache[VAR_2];

  FUNC_0(VAR_3, VAR_1->info.format, VAR_1->info.width,
     VAR_1->info.height);
 }

 VAR_1->available_frames = VAR_1->info.cache_size;
}
