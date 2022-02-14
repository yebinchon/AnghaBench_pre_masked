
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m; int n; } ;
typedef TYPE_1__ pdf_function ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,float const*,float*) ;

void
FUNC_1(fz_context *VAR_2, pdf_function *VAR_3, const float *VAR_4, int VAR_5, float *VAR_6, int VAR_7)
{
 float VAR_8[VAR_0];
 float VAR_9[VAR_1];
 int VAR_10;

 if (VAR_5 < VAR_3->m)
 {
  for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
   VAR_8[VAR_10] = VAR_4[VAR_10];
  for (; VAR_10 < VAR_3->m; ++VAR_10)
   VAR_8[VAR_10] = 0;
  VAR_4 = VAR_8;
 }

 if (VAR_7 < VAR_3->n)
 {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10)
   VAR_6[VAR_10] = VAR_9[VAR_10];
 }
 else
 {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
  for (VAR_10 = VAR_3->n; VAR_10 < VAR_7; ++VAR_10)
   VAR_6[VAR_10] = 0;
 }
}
