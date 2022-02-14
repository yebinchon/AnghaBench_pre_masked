
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int p ;
struct TYPE_4__ {float* xform; float* extent; int image; int outerColor; int innerColor; } ;
typedef TYPE_1__ NVGpaint ;
typedef int NVGcontext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int,int,int,float) ;
 int FUNC_3 (float*,float) ;

NVGpaint FUNC_4(NVGcontext* VAR_0,
        float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5,
        int VAR_6, float VAR_7)
{
 NVGpaint VAR_8;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 FUNC_3(VAR_8.xform, VAR_5);
 VAR_8.xform[4] = VAR_1;
 VAR_8.xform[5] = VAR_2;

 VAR_8.extent[0] = VAR_3;
 VAR_8.extent[1] = VAR_4;

 VAR_8.image = VAR_6;

 VAR_8.innerColor = VAR_8.outerColor = FUNC_2(1,1,1,VAR_7);

 return VAR_8;
}
