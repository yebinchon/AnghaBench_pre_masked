
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int frame_ready; int eof; } ;
struct TYPE_5__ {int frame_ready; int eof; } ;
struct TYPE_7__ {TYPE_2__ v; scalar_t__ has_video; TYPE_1__ a; scalar_t__ has_audio; } ;
typedef TYPE_3__ mp_media_t ;



__attribute__((used)) static inline bool FUNC_0(mp_media_t *VAR_0)
{
 if (VAR_0->has_audio && !VAR_0->a.eof && !VAR_0->a.frame_ready)
  return 0;
 if (VAR_0->has_video && !VAR_0->v.eof && !VAR_0->v.frame_ready)
  return 0;
 return 1;
}
