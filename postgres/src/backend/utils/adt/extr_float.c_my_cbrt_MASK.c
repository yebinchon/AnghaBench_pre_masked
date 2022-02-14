
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static double
FUNC_2(double VAR_0)
{
 int VAR_1 = (VAR_0 < 0.0);
 double VAR_2 = FUNC_0(VAR_0);
 double VAR_3 = FUNC_1(VAR_2, (double) 1.0 / (double) 3.0);







 if (VAR_3 > 0.0)
  VAR_3 -= (VAR_3 - VAR_2 / (VAR_3 * VAR_3)) / (double) 3.0;

 return VAR_1 ? -VAR_3 : VAR_3;
}
