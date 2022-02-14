
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct quat {float w; float x; float y; float z; float* ptr; } ;
struct TYPE_6__ {float z; float y; float x; } ;
struct TYPE_5__ {float y; float z; float x; } ;
struct TYPE_4__ {float x; float z; float y; } ;
struct matrix4 {TYPE_3__ z; TYPE_2__ y; TYPE_1__ x; } ;
struct f4x4 {float** ptr; } ;


 float FUNC_0 (float) ;

void FUNC_1(struct quat *VAR_0, const struct matrix4 *VAR_1)
{
 float VAR_2 = (VAR_1->x.x + VAR_1->y.y + VAR_1->z.z);
 float VAR_3;
 float VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_2 > 0.0f) {
  VAR_4 = FUNC_0(VAR_2 + 1.0f);
  VAR_0->w = VAR_4 * 0.5f;

  VAR_3 = 0.5f / VAR_4;
  VAR_0->x = (VAR_1->y.z - VAR_1->z.y) * VAR_3;
  VAR_0->y = (VAR_1->z.x - VAR_1->x.z) * VAR_3;
  VAR_0->z = (VAR_1->x.y - VAR_1->y.x) * VAR_3;
 } else {
  struct f4x4 *VAR_8 = (struct f4x4 *)VAR_1;

  VAR_5 = (VAR_1->x.x > VAR_1->y.y) ? 0 : 1;

  if (VAR_1->z.z > VAR_8->ptr[VAR_5][VAR_5])
   VAR_5 = 2;

  VAR_6 = (VAR_5 + 1) % 3;
  VAR_7 = (VAR_5 + 2) % 3;



  VAR_4 = FUNC_0(
   (VAR_8->ptr[VAR_5][VAR_5] - VAR_8->ptr[VAR_6][VAR_6] - VAR_8->ptr[VAR_7][VAR_7]) +
   1.0f);

  VAR_0->ptr[VAR_5] = VAR_4 * 0.5f;

  VAR_3 = 0.5f / VAR_4;
  VAR_0->ptr[VAR_6] = (VAR_8->ptr[VAR_5][VAR_6] + VAR_8->ptr[VAR_6][VAR_5]) * VAR_3;
  VAR_0->ptr[VAR_7] = (VAR_8->ptr[VAR_5][VAR_7] + VAR_8->ptr[VAR_7][VAR_5]) * VAR_3;
  VAR_0->w = (VAR_8->ptr[VAR_6][VAR_7] - VAR_8->ptr[VAR_7][VAR_6]) * VAR_3;
 }
}
