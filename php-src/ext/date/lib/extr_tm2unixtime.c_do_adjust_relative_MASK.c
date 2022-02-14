
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int first_last_day_of; scalar_t__ y; scalar_t__ m; scalar_t__ d; scalar_t__ h; scalar_t__ i; scalar_t__ s; scalar_t__ us; scalar_t__ have_weekday_relative; } ;
struct TYPE_7__ {int d; int m; TYPE_1__ relative; int y; int h; int i; int s; int us; scalar_t__ have_relative; } ;
typedef TYPE_2__ timelib_time ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(timelib_time* VAR_0)
{
 if (VAR_0->relative.have_weekday_relative) {
  FUNC_0(VAR_0);
 }
 FUNC_1(VAR_0);

 if (VAR_0->have_relative) {
  VAR_0->us += VAR_0->relative.us;

  VAR_0->s += VAR_0->relative.s;
  VAR_0->i += VAR_0->relative.i;
  VAR_0->h += VAR_0->relative.h;

  VAR_0->d += VAR_0->relative.d;
  VAR_0->m += VAR_0->relative.m;
  VAR_0->y += VAR_0->relative.y;
 }

 switch (VAR_0->relative.first_last_day_of) {
  case 129:
   VAR_0->d = 1;
   break;
  case 128:
   VAR_0->d = 0;
   VAR_0->m++;
   break;
 }

 FUNC_1(VAR_0);
}
