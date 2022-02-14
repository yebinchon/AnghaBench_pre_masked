
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int k; float* bounds; int * funcs; int * encode; } ;
struct TYPE_6__ {TYPE_1__ st; } ;
struct TYPE_7__ {float** domain; int n; TYPE_2__ u; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 float FUNC_0 (float,float,float) ;
 float FUNC_1 (float,float,float,int ,int ) ;
 int FUNC_2 (int *,int ,float*,int,float*,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_function *VAR_1, float VAR_2, float *VAR_3)
{
 float VAR_4, VAR_5;
 int VAR_6 = VAR_1->u.st.k;
 float *VAR_7 = VAR_1->u.st.bounds;
 int VAR_8;

 VAR_2 = FUNC_0(VAR_2, VAR_1->domain[0][0], VAR_1->domain[0][1]);

 for (VAR_8 = 0; VAR_8 < VAR_6 - 1; VAR_8++)
 {
  if (VAR_2 < VAR_7[VAR_8])
   break;
 }

 if (VAR_8 == 0 && VAR_6 == 1)
 {
  VAR_4 = VAR_1->domain[0][0];
  VAR_5 = VAR_1->domain[0][1];
 }
 else if (VAR_8 == 0)
 {
  VAR_4 = VAR_1->domain[0][0];
  VAR_5 = VAR_7[0];
 }
 else if (VAR_8 == VAR_6 - 1)
 {
  VAR_4 = VAR_7[VAR_6 - 2];
  VAR_5 = VAR_1->domain[0][1];
 }
 else
 {
  VAR_4 = VAR_7[VAR_8 - 1];
  VAR_5 = VAR_7[VAR_8];
 }

 VAR_2 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_1->u.st.encode[VAR_8 * 2 + 0], VAR_1->u.st.encode[VAR_8 * 2 + 1]);

 FUNC_2(VAR_0, VAR_1->u.st.funcs[VAR_8], &VAR_2, 1, VAR_3, VAR_1->n);
}
