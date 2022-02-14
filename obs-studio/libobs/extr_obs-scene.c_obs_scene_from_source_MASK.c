
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_scene_t ;
struct TYPE_9__ {scalar_t__ id; } ;


 TYPE_4__ VAR_0 ;

obs_scene_t *FUNC_0(const obs_source_t *VAR_1)
{
 if (!VAR_1 || VAR_1->info.id != VAR_0.id)
  return ((void*)0);

 return VAR_1->context.data;
}
