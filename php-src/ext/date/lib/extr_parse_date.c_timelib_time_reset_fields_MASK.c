
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int m; int d; int * tz_info; scalar_t__ us; scalar_t__ s; scalar_t__ i; scalar_t__ h; } ;
typedef TYPE_1__ timelib_time ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(timelib_time *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));

 VAR_0->y = 1970;
 VAR_0->m = 1;
 VAR_0->d = 1;
 VAR_0->h = VAR_0->i = VAR_0->s = 0;
 VAR_0->us = 0;
 VAR_0->tz_info = ((void*)0);
}
