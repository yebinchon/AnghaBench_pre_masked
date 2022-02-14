
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int strm_value ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (double) ;

strm_value
FUNC_1(double VAR_1)
{
  union {
    double f;
    uint64_t i;
  } VAR_2;

  if (FUNC_0(VAR_1)) {
    return VAR_0;
  }
  VAR_2.f = VAR_1;
  return VAR_2.i;
}
