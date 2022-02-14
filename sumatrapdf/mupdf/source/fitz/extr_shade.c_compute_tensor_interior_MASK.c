
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int x; int y; } ;
typedef TYPE_1__ fz_point ;



__attribute__((used)) static fz_point
FUNC_0(
 fz_point VAR_0, fz_point VAR_1, fz_point VAR_2, fz_point VAR_3,
 fz_point VAR_4, fz_point VAR_5, fz_point VAR_6, fz_point VAR_7)
{
 fz_point VAR_8;



 VAR_8.x = -4 * VAR_0.x;
 VAR_8.x += 6 * (VAR_1.x + VAR_2.x);
 VAR_8.x += -2 * (VAR_3.x + VAR_4.x);
 VAR_8.x += 3 * (VAR_5.x + VAR_6.x);
 VAR_8.x += -1 * VAR_7.x;
 VAR_8.x /= 9;

 VAR_8.y = -4 * VAR_0.y;
 VAR_8.y += 6 * (VAR_1.y + VAR_2.y);
 VAR_8.y += -2 * (VAR_3.y + VAR_4.y);
 VAR_8.y += 3 * (VAR_5.y + VAR_6.y);
 VAR_8.y += -1 * VAR_7.y;
 VAR_8.y /= 9;

 return VAR_8;
}
