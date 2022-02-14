
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ Point ;


 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double) ;
 double FUNC_5 (int) ;

__attribute__((used)) static double
FUNC_6(Point *VAR_3, Point *VAR_4)
{
 double VAR_5,
    VAR_6,
    VAR_7,
    VAR_8;
 double VAR_9;
 double VAR_10;



 VAR_5 = FUNC_2(VAR_3->x);
 VAR_6 = FUNC_2(VAR_3->y);

 VAR_7 = FUNC_2(VAR_4->x);
 VAR_8 = FUNC_2(VAR_4->y);


 VAR_9 = FUNC_3(VAR_5 - VAR_7);
 if (VAR_9 > VAR_1)
  VAR_9 = VAR_2 - VAR_9;

 VAR_10 = FUNC_5(FUNC_4(FUNC_3(VAR_6 - VAR_8) / 2.) * FUNC_4(FUNC_3(VAR_6 - VAR_8) / 2.) +
    FUNC_1(VAR_6) * FUNC_1(VAR_8) * FUNC_4(VAR_9 / 2.) * FUNC_4(VAR_9 / 2.));
 if (VAR_10 > 1.)
  VAR_10 = 1.;

 return 2. * VAR_0 * FUNC_0(VAR_10);
}
