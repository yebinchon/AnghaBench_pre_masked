
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weekday_behavior; scalar_t__ weekday; scalar_t__ d; scalar_t__ have_weekday_relative; } ;
struct TYPE_5__ {scalar_t__ d; TYPE_1__ relative; int m; int y; } ;
typedef TYPE_2__ timelib_time ;
typedef scalar_t__ timelib_sll ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(timelib_time* VAR_0)
{
 timelib_sll VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0->y, VAR_0->m, VAR_0->d);
 if (VAR_0->relative.weekday_behavior == 2)
 {

  if (VAR_1 == 0 && VAR_0->relative.weekday != 0) {
   VAR_0->relative.weekday -= 7;
  }



  if (VAR_0->relative.weekday == 0 && VAR_1 != 0) {
   VAR_0->relative.weekday = 7;
  }

  VAR_0->d -= VAR_1;
  VAR_0->d += VAR_0->relative.weekday;
  return;
 }
 VAR_2 = VAR_0->relative.weekday - VAR_1;
 if ((VAR_0->relative.d < 0 && VAR_2 < 0) || (VAR_0->relative.d >= 0 && VAR_2 <= -VAR_0->relative.weekday_behavior)) {
  VAR_2 += 7;
 }
 if (VAR_0->relative.weekday >= 0) {
  VAR_0->d += VAR_2;
 } else {
  VAR_0->d -= (7 - (FUNC_0(VAR_0->relative.weekday) - VAR_1));
 }
 VAR_0->relative.have_weekday_relative = 0;
}
