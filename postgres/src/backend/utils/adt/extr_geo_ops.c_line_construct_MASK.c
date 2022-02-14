
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_6__ {double A; double B; double C; } ;
struct TYPE_5__ {double x; int y; } ;
typedef TYPE_1__ Point ;
typedef TYPE_2__ LINE ;


 double VAR_0 ;
 double FUNC_0 (int ,int ) ;
 int FUNC_1 (double,double) ;

__attribute__((used)) static inline void
FUNC_2(LINE *VAR_1, Point *VAR_2, float8 VAR_3)
{
 if (VAR_3 == VAR_0)
 {

  VAR_1->A = -1.0;
  VAR_1->B = 0.0;
  VAR_1->C = VAR_2->x;
 }
 else
 {

  VAR_1->A = VAR_3;
  VAR_1->B = -1.0;
  VAR_1->C = FUNC_0(VAR_2->y, FUNC_1(VAR_3, VAR_2->x));

  if (VAR_1->C == 0.0)
   VAR_1->C = 0.0;
 }
}
