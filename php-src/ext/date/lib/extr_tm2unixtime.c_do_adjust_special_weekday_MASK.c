
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int amount; } ;
struct TYPE_6__ {TYPE_1__ special; } ;
struct TYPE_7__ {int d; int m; int y; TYPE_2__ relative; } ;
typedef TYPE_3__ timelib_time ;
typedef int timelib_sll ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(timelib_time* VAR_0)
{
 timelib_sll VAR_1, VAR_2, VAR_3;

 VAR_1 = VAR_0->relative.special.amount;
 VAR_2 = FUNC_0(VAR_0->y, VAR_0->m, VAR_0->d);


 VAR_0->d += (VAR_1 / 5) * 7;


 VAR_3 = (VAR_1 % 5);

 if (VAR_1 > 0) {
  if (VAR_3 == 0) {

   if (VAR_2 == 0) {
    VAR_0->d -= 2;
   } else if (VAR_2 == 6) {
    VAR_0->d -= 1;
   }
  } else if (VAR_2 == 6) {


   VAR_0->d += 1;
  } else if (VAR_2 + VAR_3 > 5) {


   VAR_0->d += 2;
  }
 } else {



  if (VAR_3 == 0) {
   if (VAR_2 == 6) {
    VAR_0->d += 2;
   } else if (VAR_2 == 0) {
    VAR_0->d += 1;
   }
  } else if (VAR_2 == 0) {
   VAR_0->d -= 1;
  } else if (VAR_2 + VAR_3 < 1) {
   VAR_0->d -= 2;
  }
 }

 VAR_0->d += VAR_3;
}
