
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int caps; } ;
struct obs_encoder {TYPE_1__ info; } ;
struct TYPE_5__ {scalar_t__ using_nv12_tex; } ;
struct TYPE_6__ {TYPE_2__ video; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(const struct obs_encoder *VAR_2)
{
 return (VAR_2->info.caps & VAR_0) != 0 &&
        VAR_1->video.using_nv12_tex;
}
