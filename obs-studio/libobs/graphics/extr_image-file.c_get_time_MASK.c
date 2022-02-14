
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_6__ {TYPE_1__* frames; } ;
struct TYPE_7__ {TYPE_2__ gif; } ;
typedef TYPE_3__ gs_image_file_t ;
struct TYPE_5__ {scalar_t__ frame_delay; } ;



__attribute__((used)) static inline uint64_t FUNC_0(gs_image_file_t *VAR_0, int VAR_1)
{
 uint64_t VAR_2 = (uint64_t)VAR_0->gif.frames[VAR_1].frame_delay * 10000000ULL;
 if (!VAR_2)
  VAR_2 = 100000000;
 return VAR_2;
}
