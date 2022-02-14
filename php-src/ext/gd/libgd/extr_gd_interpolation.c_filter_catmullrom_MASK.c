
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(const double VAR_0)
{
 if (VAR_0 < -2.0)
  return(0.0f);
 if (VAR_0 < -1.0)
  return(0.5f*(4.0f+VAR_0*(8.0f+VAR_0*(5.0f+VAR_0))));
 if (VAR_0 < 0.0)
  return(0.5f*(2.0f+VAR_0*VAR_0*(-5.0f-3.0f*VAR_0)));
 if (VAR_0 < 1.0)
  return(0.5f*(2.0f+VAR_0*VAR_0*(-5.0f+3.0f*VAR_0)));
 if (VAR_0 < 2.0)
  return(0.5f*(4.0f+VAR_0*(-8.0f+VAR_0*(5.0f-VAR_0))));
 return(0.0f);
}
