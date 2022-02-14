
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float dy; float y; float dx; float dmx; float dmy; } ;
typedef TYPE_1__ NVGpoint ;



__attribute__((used)) static void FUNC_0(int VAR_0, NVGpoint* VAR_1, NVGpoint* VAR_2, float VAR_3,
       float* VAR_4, float* VAR_5, float* VAR_6, float* VAR_7)
{
 if (VAR_0) {
  *VAR_4 = VAR_2->x + VAR_1->dy * VAR_3;
  *VAR_5 = VAR_2->y - VAR_1->dx * VAR_3;
  *VAR_6 = VAR_2->x + VAR_2->dy * VAR_3;
  *VAR_7 = VAR_2->y - VAR_2->dx * VAR_3;
 } else {
  *VAR_4 = VAR_2->x + VAR_2->dmx * VAR_3;
  *VAR_5 = VAR_2->y + VAR_2->dmy * VAR_3;
  *VAR_6 = VAR_2->x + VAR_2->dmx * VAR_3;
  *VAR_7 = VAR_2->y + VAR_2->dmy * VAR_3;
 }
}
