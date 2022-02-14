
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int p ;
struct TYPE_4__ {float* xform; float* extent; float radius; void* outerColor; void* innerColor; int feather; } ;
typedef TYPE_1__ NVGpaint ;
typedef int NVGcontext ;
typedef void* NVGcolor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (float,float) ;

NVGpaint FUNC_4(NVGcontext* VAR_0,
          float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6,
          NVGcolor VAR_7, NVGcolor VAR_8)
{
 NVGpaint VAR_9;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));

 FUNC_2(VAR_9.xform);
 VAR_9.xform[4] = VAR_1+VAR_3*0.5f;
 VAR_9.xform[5] = VAR_2+VAR_4*0.5f;

 VAR_9.extent[0] = VAR_3*0.5f;
 VAR_9.extent[1] = VAR_4*0.5f;

 VAR_9.radius = VAR_5;

 VAR_9.feather = FUNC_3(1.0f, VAR_6);

 VAR_9.innerColor = VAR_7;
 VAR_9.outerColor = VAR_8;

 return VAR_9;
}
