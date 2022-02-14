
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ds3db_need_recalc; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_6__ {int nrofbuffers; TYPE_4__** buffers; } ;
typedef TYPE_2__ IDirectSound3DListenerImpl ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(IDirectSound3DListenerImpl *VAR_0)
{
 int VAR_1;
 FUNC_1("(%p)\n",VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->device->nrofbuffers; VAR_1++)
 {

  if (VAR_0->device->buffers[VAR_1]->ds3db_need_recalc)
  {
   FUNC_0(VAR_0->device->buffers[VAR_1]);
  }
 }
}
