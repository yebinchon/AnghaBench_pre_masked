
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ us; int s; int i; int h; int d; int m; int y; } ;
typedef TYPE_1__ timelib_time ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int*,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(timelib_time* VAR_1)
{
 if (VAR_1->us != VAR_0) FUNC_0(0, 1000000, 1000000, &VAR_1->us, &VAR_1->s);
 if (VAR_1->s != VAR_0) FUNC_0(0, 60, 60, &VAR_1->s, &VAR_1->i);
 if (VAR_1->s != VAR_0) FUNC_0(0, 60, 60, &VAR_1->i, &VAR_1->h);
 if (VAR_1->s != VAR_0) FUNC_0(0, 24, 24, &VAR_1->h, &VAR_1->d);
 FUNC_0(1, 13, 12, &VAR_1->m, &VAR_1->y);


 if (VAR_1->y == 1970 && VAR_1->m == 1 && VAR_1->d != 1) {
  FUNC_2(VAR_1);
 }

 do {} while (FUNC_1(&VAR_1->y, &VAR_1->m, &VAR_1->d));
 FUNC_0(1, 13, 12, &VAR_1->m, &VAR_1->y);
}
