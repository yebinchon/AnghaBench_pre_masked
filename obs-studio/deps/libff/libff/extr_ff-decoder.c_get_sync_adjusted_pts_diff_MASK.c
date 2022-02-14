
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_clock {int dummy; } ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (struct ff_clock*) ;

__attribute__((used)) static double FUNC_2(struct ff_clock *VAR_2, double VAR_3,
                                         double VAR_4)
{
 double VAR_5 = VAR_4;
 double VAR_6 = FUNC_1(VAR_2);
 double VAR_7 = VAR_3 - VAR_6;
 double VAR_8;

 VAR_8 = (VAR_4 > VAR_1) ? VAR_4
                                                 : VAR_1;

 if (FUNC_0(VAR_7) < VAR_0) {
  if (VAR_7 <= -VAR_8) {
   VAR_5 = 0;

  } else if (VAR_7 >= VAR_8) {
   VAR_5 = 2 * VAR_4;
  }
 }

 return VAR_5;
}
