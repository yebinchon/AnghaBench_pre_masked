
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ y; scalar_t__ m; scalar_t__ d; scalar_t__ h; scalar_t__ i; scalar_t__ s; scalar_t__ us; } ;
typedef TYPE_1__ timelib_time ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(timelib_time *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_1->y == VAR_0 ) VAR_1->y = 1970;
 if (VAR_1->m == VAR_0 ) VAR_1->m = 1;
 if (VAR_1->d == VAR_0 ) VAR_1->d = 1;
 if (VAR_1->h == VAR_0 ) VAR_1->h = 0;
 if (VAR_1->i == VAR_0 ) VAR_1->i = 0;
 if (VAR_1->s == VAR_0 ) VAR_1->s = 0;
 if (VAR_1->us == VAR_0 ) VAR_1->us = 0;
}
