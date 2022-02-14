
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct vec3 {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct matrix4 {int dummy; } ;
struct TYPE_2__ {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct bounds {TYPE_1__ max; TYPE_1__ min; } ;


 int FUNC_0 (struct bounds*,struct bounds*) ;
 int FUNC_1 (struct vec3*,struct bounds const*,int) ;
 int FUNC_2 (struct bounds*,int ,int) ;
 int FUNC_3 (TYPE_1__*,struct vec3*) ;
 int FUNC_4 (struct vec3*,struct vec3*,struct matrix4 const*) ;

void FUNC_5(struct bounds *VAR_0, const struct bounds *VAR_1,
        const struct matrix4 *VAR_2)
{
 struct bounds VAR_3;
 bool VAR_4 = 0;
 int VAR_5;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  struct vec3 VAR_6;
  FUNC_1(&VAR_6, VAR_1, VAR_5);
  FUNC_4(&VAR_6, &VAR_6, VAR_2);

  if (!VAR_4) {
   FUNC_3(&VAR_3.min, &VAR_6);
   FUNC_3(&VAR_3.max, &VAR_6);
   VAR_4 = 1;
  } else {
   if (VAR_6.x < VAR_3.min.x)
    VAR_3.min.x = VAR_6.x;
   else if (VAR_6.x > VAR_3.max.x)
    VAR_3.max.x = VAR_6.x;

   if (VAR_6.y < VAR_3.min.y)
    VAR_3.min.y = VAR_6.y;
   else if (VAR_6.y > VAR_3.max.y)
    VAR_3.max.y = VAR_6.y;

   if (VAR_6.z < VAR_3.min.z)
    VAR_3.min.z = VAR_6.z;
   else if (VAR_6.z > VAR_3.max.z)
    VAR_3.max.z = VAR_6.z;
  }
 }

 FUNC_0(VAR_0, &VAR_3);
}
