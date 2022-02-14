
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;



__attribute__((used)) static void
FUNC_0(fz_point *VAR_0, fz_point *VAR_1, fz_point *VAR_2, int VAR_3)
{
 float VAR_4 = (VAR_0[1 * VAR_3].x + VAR_0[2 * VAR_3].x) * 0.5f;
 float VAR_5 = (VAR_0[1 * VAR_3].y + VAR_0[2 * VAR_3].y) * 0.5f;

 VAR_1[1 * VAR_3].x = (VAR_0[0 * VAR_3].x + VAR_0[1 * VAR_3].x) * 0.5f;
 VAR_1[1 * VAR_3].y = (VAR_0[0 * VAR_3].y + VAR_0[1 * VAR_3].y) * 0.5f;
 VAR_2[2 * VAR_3].x = (VAR_0[2 * VAR_3].x + VAR_0[3 * VAR_3].x) * 0.5f;
 VAR_2[2 * VAR_3].y = (VAR_0[2 * VAR_3].y + VAR_0[3 * VAR_3].y) * 0.5f;

 VAR_1[2 * VAR_3].x = (VAR_1[1 * VAR_3].x + VAR_4) * 0.5f;
 VAR_1[2 * VAR_3].y = (VAR_1[1 * VAR_3].y + VAR_5) * 0.5f;
 VAR_2[1 * VAR_3].x = (VAR_4 + VAR_2[2 * VAR_3].x) * 0.5f;
 VAR_2[1 * VAR_3].y = (VAR_5 + VAR_2[2 * VAR_3].y) * 0.5f;

 VAR_1[3 * VAR_3].x = (VAR_1[2 * VAR_3].x + VAR_2[1 * VAR_3].x) * 0.5f;
 VAR_1[3 * VAR_3].y = (VAR_1[2 * VAR_3].y + VAR_2[1 * VAR_3].y) * 0.5f;
 VAR_2[0 * VAR_3].x = (VAR_1[2 * VAR_3].x + VAR_2[1 * VAR_3].x) * 0.5f;
 VAR_2[0 * VAR_3].y = (VAR_1[2 * VAR_3].y + VAR_2[1 * VAR_3].y) * 0.5f;

 VAR_1[0 * VAR_3].x = VAR_0[0 * VAR_3].x;
 VAR_1[0 * VAR_3].y = VAR_0[0 * VAR_3].y;
 VAR_2[3 * VAR_3].x = VAR_0[3 * VAR_3].x;
 VAR_2[3 * VAR_3].y = VAR_0[3 * VAR_3].y;
}
