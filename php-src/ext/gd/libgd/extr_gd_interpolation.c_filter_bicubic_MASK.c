
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double const) ;

__attribute__((used)) static double FUNC_1(const double VAR_0)
{
  const double VAR_1 = (double)FUNC_0(VAR_0);
  const double VAR_2 = VAR_1 * VAR_1;
  if (VAR_1<1) return 1-2*VAR_2+VAR_2*VAR_1;
  if (VAR_1<2) return 4 - 8*VAR_1 +5*VAR_2 - VAR_2*VAR_1;
  return 0;
}
