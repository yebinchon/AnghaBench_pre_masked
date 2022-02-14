
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mesh_path {int flags; int frame_queue; TYPE_1__* sdata; } ;
struct TYPE_2__ {int local; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct mesh_path *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1->sdata->local,
    &VAR_1->frame_queue);
}
