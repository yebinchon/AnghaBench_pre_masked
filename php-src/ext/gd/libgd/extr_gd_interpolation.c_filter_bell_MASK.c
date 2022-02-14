
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double const,double) ;

__attribute__((used)) static double FUNC_1(const double VAR_0)
{
 const double VAR_1 = VAR_0 < 0.0 ? -VAR_0 : VAR_0;

 if (VAR_1 < 0.5) return (0.75 - VAR_1*VAR_1);
 if (VAR_1 < 1.5) return (0.5 * FUNC_0(VAR_1 - 1.5, 2.0));
 return 0.0;
}
