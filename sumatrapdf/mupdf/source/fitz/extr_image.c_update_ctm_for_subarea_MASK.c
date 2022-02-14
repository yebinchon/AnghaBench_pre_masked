
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float a; float d; float e; float f; scalar_t__ c; scalar_t__ b; } ;
typedef TYPE_1__ fz_matrix ;
struct TYPE_9__ {int x0; int y0; int x1; int y1; } ;
typedef TYPE_2__ fz_irect ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void
FUNC_1(fz_matrix *VAR_0, const fz_irect *VAR_1, int VAR_2, int VAR_3)
{
 fz_matrix VAR_4;

 if (VAR_1->x0 == 0 && VAR_1->y0 == 0 && VAR_1->x1 == VAR_2 && VAR_1->y1 == VAR_3)
  return;

 VAR_4.a = (float) (VAR_1->x1 - VAR_1->x0) / VAR_2;
 VAR_4.b = 0;
 VAR_4.c = 0;
 VAR_4.d = (float) (VAR_1->y1 - VAR_1->y0) / VAR_3;
 VAR_4.e = (float) VAR_1->x0 / VAR_2;
 VAR_4.f = (float) VAR_1->y0 / VAR_3;
 *VAR_0 = FUNC_0(VAR_4, *VAR_0);
}
