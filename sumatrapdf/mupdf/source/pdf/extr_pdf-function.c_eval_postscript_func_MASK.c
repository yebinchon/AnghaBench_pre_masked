
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ps_stack ;
struct TYPE_5__ {int code; } ;
struct TYPE_6__ {TYPE_1__ p; } ;
struct TYPE_7__ {int m; int n; int ** range; TYPE_2__ u; int ** domain; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 float FUNC_0 (float const,int ,int ) ;
 int FUNC_1 (int *) ;
 float FUNC_2 (int *) ;
 int FUNC_3 (int *,float) ;
 int FUNC_4 (int *,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_function *VAR_1, const float *VAR_2, float *VAR_3)
{
 ps_stack VAR_4;
 float VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1->m; VAR_6++)
 {
  VAR_5 = FUNC_0(VAR_2[VAR_6], VAR_1->domain[VAR_6][0], VAR_1->domain[VAR_6][1]);
  FUNC_3(&VAR_4, VAR_5);
 }

 FUNC_4(VAR_0, VAR_1->u.p.code, &VAR_4, 0);

 for (VAR_6 = VAR_1->n - 1; VAR_6 >= 0; VAR_6--)
 {
  VAR_5 = FUNC_2(&VAR_4);
  VAR_3[VAR_6] = FUNC_0(VAR_5, VAR_1->range[VAR_6][0], VAR_1->range[VAR_6][1]);
 }
}
