
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
          float VAR_1, float VAR_2, float VAR_3, float VAR_4,
          NVGcolor VAR_5, NVGcolor VAR_6)
{
 NVGpaint VAR_7;
 float VAR_8 = (VAR_3+VAR_4)*0.5f;
 float VAR_9 = (VAR_4-VAR_3);
 FUNC_0(VAR_0);
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 FUNC_2(VAR_7.xform);
 VAR_7.xform[4] = VAR_1;
 VAR_7.xform[5] = VAR_2;

 VAR_7.extent[0] = VAR_8;
 VAR_7.extent[1] = VAR_8;

 VAR_7.radius = VAR_8;

 VAR_7.feather = FUNC_3(1.0f, VAR_9);

 VAR_7.innerColor = VAR_5;
 VAR_7.outerColor = VAR_6;

 return VAR_7;
}
