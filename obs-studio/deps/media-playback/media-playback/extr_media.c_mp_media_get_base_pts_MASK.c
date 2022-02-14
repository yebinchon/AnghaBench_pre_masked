
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ next_pts; } ;
struct TYPE_5__ {scalar_t__ next_pts; } ;
struct TYPE_7__ {TYPE_2__ a; scalar_t__ has_audio; TYPE_1__ v; scalar_t__ has_video; } ;
typedef TYPE_3__ mp_media_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static inline int64_t FUNC_0(mp_media_t *VAR_0)
{
 int64_t VAR_1 = 0;

 if (VAR_0->has_video && VAR_0->v.next_pts > VAR_1)
  VAR_1 = VAR_0->v.next_pts;
 if (VAR_0->has_audio && VAR_0->a.next_pts > VAR_1)
  VAR_1 = VAR_0->a.next_pts;

 return VAR_1;
}
