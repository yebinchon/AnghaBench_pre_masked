
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fps_den; scalar_t__ fps_num; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ video_t ;



double FUNC_0(const video_t *VAR_0)
{
 if (!VAR_0)
  return 0.0;

 return (double)VAR_0->info.fps_num / (double)VAR_0->info.fps_den;
}
