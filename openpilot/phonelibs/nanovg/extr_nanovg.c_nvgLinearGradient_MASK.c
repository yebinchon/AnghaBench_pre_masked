
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
 int FUNC_2 (float,float) ;
 float FUNC_3 (float) ;

NVGpaint FUNC_4(NVGcontext* VAR_0,
          float VAR_1, float VAR_2, float VAR_3, float VAR_4,
          NVGcolor VAR_5, NVGcolor VAR_6)
{
 NVGpaint VAR_7;
 float VAR_8, VAR_9, VAR_10;
 const float VAR_11 = 1e5;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));


 VAR_8 = VAR_3 - VAR_1;
 VAR_9 = VAR_4 - VAR_2;
 VAR_10 = FUNC_3(VAR_8*VAR_8 + VAR_9*VAR_9);
 if (VAR_10 > 0.0001f) {
  VAR_8 /= VAR_10;
  VAR_9 /= VAR_10;
 } else {
  VAR_8 = 0;
  VAR_9 = 1;
 }

 VAR_7.xform[0] = VAR_9; VAR_7.xform[1] = -VAR_8;
 VAR_7.xform[2] = VAR_8; VAR_7.xform[3] = VAR_9;
 VAR_7.xform[4] = VAR_1 - VAR_8*VAR_11; VAR_7.xform[5] = VAR_2 - VAR_9*VAR_11;

 VAR_7.extent[0] = VAR_11;
 VAR_7.extent[1] = VAR_11 + VAR_10*0.5f;

 VAR_7.radius = 0.0f;

 VAR_7.feather = FUNC_2(1.0f, VAR_10);

 VAR_7.innerColor = VAR_5;
 VAR_7.outerColor = VAR_6;

 return VAR_7;
}
