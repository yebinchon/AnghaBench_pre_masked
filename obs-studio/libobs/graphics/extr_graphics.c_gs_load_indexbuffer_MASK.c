
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_indexbuffer_t ;
struct TYPE_4__ {int (* device_load_indexbuffer ) (int ,int *) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_indexbuffer_t *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_load_indexbuffer"))
  return;

 VAR_2->exports.device_load_indexbuffer(VAR_2->device,
        VAR_1);
}
