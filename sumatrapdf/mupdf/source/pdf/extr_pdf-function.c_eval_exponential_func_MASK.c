
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; float* c0; float* c1; } ;
struct TYPE_6__ {TYPE_1__ e; } ;
struct TYPE_7__ {int n; int ** range; scalar_t__ has_range; TYPE_2__ u; int ** domain; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 float FUNC_0 (float,int ,int ) ;
 float FUNC_1 (float,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_function *VAR_1, float VAR_2, float *VAR_3)
{
 float VAR_4 = VAR_2;
 float VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_4, VAR_1->domain[0][0], VAR_1->domain[0][1]);


 if ((VAR_1->u.e.n != (int)VAR_1->u.e.n && VAR_4 < 0) || (VAR_1->u.e.n < 0 && VAR_4 == 0))
 {
  for (VAR_6 = 0; VAR_6 < VAR_1->n; VAR_6++)
   VAR_3[VAR_6] = 0;
  return;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_1->u.e.n);
 for (VAR_6 = 0; VAR_6 < VAR_1->n; VAR_6++)
 {
  VAR_3[VAR_6] = VAR_1->u.e.c0[VAR_6] + VAR_5 * (VAR_1->u.e.c1[VAR_6] - VAR_1->u.e.c0[VAR_6]);
  if (VAR_1->has_range)
   VAR_3[VAR_6] = FUNC_0(VAR_3[VAR_6], VAR_1->range[VAR_6][0], VAR_1->range[VAR_6][1]);
 }
}
