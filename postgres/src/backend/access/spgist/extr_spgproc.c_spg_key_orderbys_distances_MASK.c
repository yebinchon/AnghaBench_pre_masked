
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef int Point ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 double FUNC_3 (int *,int ) ;
 double FUNC_4 (int *,int *) ;

double *
FUNC_5(Datum VAR_0, bool VAR_1,
         ScanKey VAR_2, int VAR_3)
{
 int VAR_4;
 double *VAR_5 = (double *) FUNC_2(VAR_3 * sizeof(double)),
      *VAR_6 = VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4, ++VAR_2, ++VAR_6)
 {
  Point *VAR_7 = FUNC_1(VAR_2->sk_argument);

  *VAR_6 = VAR_1 ? FUNC_4(VAR_7, FUNC_1(VAR_0))
   : FUNC_3(VAR_7, FUNC_0(VAR_0));
 }

 return VAR_5;
}
