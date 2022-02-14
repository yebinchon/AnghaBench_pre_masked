
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_frustum ) (int ,float,float,float,float,float,float) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 float FUNC_0 (float) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,float,float,float,float,float,float) ;
 float FUNC_3 (float) ;
 TYPE_2__* VAR_0 ;

void FUNC_4(float VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
 graphics_t *VAR_5 = VAR_0;
 float VAR_6, VAR_7, VAR_8, VAR_9;

 if (!FUNC_1("gs_perspective"))
  return;

 VAR_9 = VAR_3 * FUNC_3(FUNC_0(VAR_1) * 0.5f);
 VAR_8 = -VAR_9;

 VAR_6 = VAR_8 * VAR_2;
 VAR_7 = VAR_9 * VAR_2;

 VAR_5->exports.device_frustum(VAR_5->device, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_3, VAR_4);
}
