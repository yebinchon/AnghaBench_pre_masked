
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 scalar_t__ FUNC_0 (double const) ;

__attribute__((used)) static double FUNC_1(const double VAR_1)
{
 const double VAR_2 = -VAR_0;
 double VAR_3 = (double)FUNC_0(VAR_1);
 double VAR_4 = VAR_3 * VAR_3;
 if (VAR_3 < 1) return (VAR_2 + 2) * VAR_4 * VAR_3 - (VAR_2 + 3) * VAR_4 + 1;
 if (VAR_3 < 2) return VAR_2 * VAR_4 * VAR_3 - 5 * VAR_2 * VAR_4 + 8 * VAR_2 * VAR_3 - 4 * VAR_2;
 return 0;
}
