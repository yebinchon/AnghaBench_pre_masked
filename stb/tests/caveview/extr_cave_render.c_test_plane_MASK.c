
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; scalar_t__ w; } ;
typedef TYPE_1__ plane ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(plane *VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{

   float VAR_7=0;
   FUNC_0(VAR_1 <= VAR_4 && VAR_2 <= VAR_5 && VAR_3 <= VAR_6);
   if (VAR_0->x > 0) VAR_7 += VAR_4*VAR_0->x; else VAR_7 += VAR_1*VAR_0->x;
   if (VAR_0->y > 0) VAR_7 += VAR_5*VAR_0->y; else VAR_7 += VAR_2*VAR_0->y;
   if (VAR_0->z > 0) VAR_7 += VAR_6*VAR_0->z; else VAR_7 += VAR_3*VAR_0->z;
   return VAR_7 + VAR_0->w >= 0;
}
