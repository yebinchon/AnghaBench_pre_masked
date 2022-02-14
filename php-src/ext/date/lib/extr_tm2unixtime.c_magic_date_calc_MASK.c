
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int y; int m; } ;
typedef TYPE_1__ timelib_time ;
typedef int timelib_sll ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(timelib_time *VAR_1)
{
 timelib_sll VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;


 if (VAR_1->d < -719498) {
  return;
 }

 VAR_7 = VAR_1->d + VAR_0 - 1;

 VAR_2 = (10000 * VAR_7 + 14780) / 3652425;
 VAR_3 = VAR_7 - ((365*VAR_2) + (VAR_2/4) - (VAR_2/100) + (VAR_2/400));
 if (VAR_3 < 0) {
  VAR_2--;
  VAR_3 = VAR_7 - ((365*VAR_2) + (VAR_2/4) - (VAR_2/100) + (VAR_2/400));
 }
 VAR_4 = (100 * VAR_3 + 52) / 3060;
 VAR_5 = ((VAR_4 + 2) % 12) + 1;
 VAR_2 = VAR_2 + (VAR_4 + 2) / 12;
 VAR_6 = VAR_3 - ((VAR_4 * 306 + 5) / 10) + 1;
 VAR_1->y = VAR_2;
 VAR_1->m = VAR_5;
 VAR_1->d = VAR_6;
}
