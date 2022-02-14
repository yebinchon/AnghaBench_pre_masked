
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* get_dropped_frames ) (int ) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_output_t ;


 int FUNC_0 (TYPE_3__ const*,char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(const obs_output_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_output_get_frames_dropped"))
  return 0;
 if (!VAR_0->info.get_dropped_frames)
  return 0;

 return VAR_0->info.get_dropped_frames(VAR_0->context.data);
}
