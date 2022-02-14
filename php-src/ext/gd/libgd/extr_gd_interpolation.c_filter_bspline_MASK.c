
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(const double VAR_0)
{
 if (VAR_0>2.0f) {
  return 0.0f;
 } else {
  double VAR_1, VAR_2, VAR_3, VAR_4;

  const double VAR_5 = VAR_0 - 1.0f;
  const double VAR_6 = VAR_0 + 1.0f;
  const double VAR_7 = VAR_0 + 2.0f;

  if ((VAR_7) <= 0.0f) VAR_1 = 0.0f; else VAR_1 = VAR_7*VAR_7*VAR_7;
  if ((VAR_6) <= 0.0f) VAR_2 = 0.0f; else VAR_2 = VAR_6*VAR_6*VAR_6;
  if (VAR_0 <= 0) VAR_3 = 0.0f; else VAR_3 = VAR_0*VAR_0*VAR_0;
  if ((VAR_5) <= 0.0f) VAR_4 = 0.0f; else VAR_4 = VAR_5*VAR_5*VAR_5;

  return (0.16666666666666666667f * (VAR_1 - (4.0f * VAR_2) + (6.0f * VAR_3) - (4.0f * VAR_4)));
 }
}
