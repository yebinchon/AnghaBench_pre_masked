
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int timelib_sll ;
struct TYPE_11__ {int unit; int multiplier; } ;
typedef TYPE_4__ timelib_relunit ;
struct TYPE_12__ {TYPE_3__* time; } ;
struct TYPE_8__ {int type; int amount; } ;
struct TYPE_9__ {int us; int s; int i; int h; int d; int m; int y; int weekday; int weekday_behavior; TYPE_1__ special; } ;
struct TYPE_10__ {TYPE_2__ relative; } ;
typedef TYPE_5__ Scanner ;



 int FUNC_0 () ;
 int FUNC_1 () ;






 int FUNC_2 () ;


 TYPE_4__* FUNC_3 (char**) ;

__attribute__((used)) static void FUNC_4(char **VAR_0, timelib_sll VAR_1, int VAR_2, Scanner *VAR_3)
{
 const timelib_relunit* VAR_4;

 if (!(VAR_4 = FUNC_3(VAR_0))) {
  return;
 }

 switch (VAR_4->unit) {
  case 134: VAR_3->time->relative.us += VAR_1 * VAR_4->multiplier; break;
  case 131: VAR_3->time->relative.s += VAR_1 * VAR_4->multiplier; break;
  case 133: VAR_3->time->relative.i += VAR_1 * VAR_4->multiplier; break;
  case 135: VAR_3->time->relative.h += VAR_1 * VAR_4->multiplier; break;
  case 136: VAR_3->time->relative.d += VAR_1 * VAR_4->multiplier; break;
  case 132: VAR_3->time->relative.m += VAR_1 * VAR_4->multiplier; break;
  case 128: VAR_3->time->relative.y += VAR_1 * VAR_4->multiplier; break;

  case 129:
   FUNC_1();
   FUNC_2();
   VAR_3->time->relative.d += (VAR_1 > 0 ? VAR_1 - 1 : VAR_1) * 7;
   VAR_3->time->relative.weekday = VAR_4->multiplier;
   VAR_3->time->relative.weekday_behavior = VAR_2;
   break;

  case 130:
   FUNC_0();
   FUNC_2();
   VAR_3->time->relative.special.type = VAR_4->multiplier;
   VAR_3->time->relative.special.amount = VAR_1;
 }
}
