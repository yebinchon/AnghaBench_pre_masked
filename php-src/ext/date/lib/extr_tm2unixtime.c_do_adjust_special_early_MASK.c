
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_7__ {int first_last_day_of; int m; TYPE_1__ special; scalar_t__ have_special_relative; } ;
struct TYPE_8__ {int d; int m; TYPE_2__ relative; } ;
typedef TYPE_3__ timelib_time ;






 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(timelib_time* VAR_0)
{
 if (VAR_0->relative.have_special_relative) {
  switch (VAR_0->relative.special.type) {
   case 131:
    VAR_0->d = 1;
    VAR_0->m += VAR_0->relative.m;
    VAR_0->relative.m = 0;
    break;
   case 128:
    VAR_0->d = 1;
    VAR_0->m += VAR_0->relative.m + 1;
    VAR_0->relative.m = 0;
    break;
  }
 }
 switch (VAR_0->relative.first_last_day_of) {
  case 130:
   VAR_0->d = 1;
   break;
  case 129:
   VAR_0->d = 0;
   VAR_0->m++;
   break;
 }
 FUNC_0(VAR_0);
}
