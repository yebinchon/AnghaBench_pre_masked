
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; float z; float w; } ;
struct matrix4 {TYPE_2__ z; TYPE_2__ t; TYPE_2__ y; TYPE_2__ x; } ;
struct TYPE_4__ {struct matrix4 cur_proj; } ;
typedef TYPE_1__ gs_device_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(gs_device_t *VAR_0, float VAR_1, float VAR_2, float VAR_3,
      float VAR_4, float VAR_5, float VAR_6)
{
 struct matrix4 *VAR_7 = &VAR_0->cur_proj;

 float VAR_8 = VAR_2 - VAR_1;
 float VAR_9 = VAR_3 - VAR_4;
 float VAR_10 = VAR_5 - VAR_6;
 float VAR_11 = 2.0f * VAR_5;

 FUNC_0(&VAR_7->x);
 FUNC_0(&VAR_7->y);
 FUNC_0(&VAR_7->z);
 FUNC_0(&VAR_7->t);

 VAR_7->x.x = VAR_11 / VAR_8;
 VAR_7->z.x = (VAR_1 + VAR_2) / VAR_8;

 VAR_7->y.y = VAR_11 / VAR_9;
 VAR_7->z.y = (VAR_4 + VAR_3) / VAR_9;

 VAR_7->z.z = (VAR_6 + VAR_5) / VAR_10;
 VAR_7->t.z = 2.0f * (VAR_5 * VAR_6) / VAR_10;

 VAR_7->z.w = -1.0f;
}
