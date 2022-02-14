
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int n; int* c1; void** c0; } ;
struct TYPE_6__ {TYPE_1__ e; } ;
struct TYPE_7__ {int m; scalar_t__** domain; int n; TYPE_2__ u; } ;
typedef TYPE_3__ pdf_function ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_3, pdf_function *VAR_4, pdf_obj *VAR_5)
{
 pdf_obj *VAR_6;
 int VAR_7;

 if (VAR_4->m > 1)
  FUNC_2(VAR_3, "exponential functions have at most one input");
 VAR_4->m = 1;

 VAR_6 = FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_2));
 VAR_4->u.e.n = FUNC_7(VAR_3, VAR_6);


 if (VAR_4->u.e.n != (int) VAR_4->u.e.n)
 {

  for (VAR_7 = 0; VAR_7 < VAR_4->m; VAR_7++)
   if (VAR_4->domain[VAR_7][0] < 0 || VAR_4->domain[VAR_7][1] < 0)
    FUNC_2(VAR_3, "exponential function input domain includes illegal negative input values");
 }
 else if (VAR_4->u.e.n < 0)
 {

  for (VAR_7 = 0; VAR_7 < VAR_4->m; VAR_7++)
   if (VAR_4->domain[VAR_7][0] == 0 || VAR_4->domain[VAR_7][1] == 0 ||
    (VAR_4->domain[VAR_7][0] < 0 && VAR_4->domain[VAR_7][1] > 0))
    FUNC_2(VAR_3, "exponential function input domain includes illegal input value zero");
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->n; VAR_7++)
 {
  VAR_4->u.e.c0[VAR_7] = 0;
  VAR_4->u.e.c1[VAR_7] = 1;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_0));
 if (FUNC_6(VAR_3, VAR_6))
 {
  int VAR_8 = FUNC_1(VAR_4->n, FUNC_4(VAR_3, VAR_6));
  if (VAR_8 != VAR_4->n)
   FUNC_2(VAR_3, "wrong number of C0 constants for exponential function");

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_4->u.e.c0[VAR_7] = FUNC_3(VAR_3, VAR_6, VAR_7);
 }

 VAR_6 = FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_1));
 if (FUNC_6(VAR_3, VAR_6))
 {
  int VAR_9 = FUNC_1(VAR_4->n, FUNC_4(VAR_3, VAR_6));
  if (VAR_9 != VAR_4->n)
   FUNC_2(VAR_3, "wrong number of C1 constants for exponential function");

  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
   VAR_4->u.e.c1[VAR_7] = FUNC_3(VAR_3, VAR_6, VAR_7);
 }
}
