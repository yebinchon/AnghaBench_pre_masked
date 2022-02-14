
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static double
FUNC_1(double VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 double VAR_4,
    VAR_5,
    VAR_6;

 VAR_4 = (double) VAR_1 * (double) VAR_2;

 VAR_5 = (double) (VAR_1 - VAR_3) +
  (double) VAR_3 * (double) VAR_1 / VAR_0;

 VAR_6 = VAR_4 / VAR_5;


 if (VAR_6 < (double) VAR_2)
  VAR_6 = (double) VAR_2;

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 return FUNC_0(VAR_6 + 0.5);
}
