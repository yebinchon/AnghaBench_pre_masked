
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vec3 {int z; int y; int x; } ;
struct TYPE_3__ {int z; int y; int x; } ;
struct TYPE_4__ {int z; int y; int x; } ;
struct bounds {TYPE_1__ min; TYPE_2__ max; } ;



void FUNC_0(struct vec3 *VAR_0, const struct bounds *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 > 8)
  return;
 if (VAR_2 > 3) {
  VAR_0->x = VAR_1->max.x;
  VAR_2 -= 4;
 } else {
  VAR_0->x = VAR_1->min.x;
 }

 if (VAR_2 > 1) {
  VAR_0->y = VAR_1->max.y;
  VAR_2 -= 2;
 } else {
  VAR_0->y = VAR_1->min.y;
 }

 VAR_0->z = (VAR_2 == 1) ? VAR_1->max.z : VAR_1->min.z;
}
