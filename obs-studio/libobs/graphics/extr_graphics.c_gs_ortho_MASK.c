
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_ortho ) (int ,float,float,float,float,float,float) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,float,float,float,float,float,float) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5,
       float VAR_6)
{
 graphics_t *VAR_7 = VAR_0;

 if (!FUNC_0("gs_ortho"))
  return;

 VAR_7->exports.device_ortho(VAR_7->device, VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
}
