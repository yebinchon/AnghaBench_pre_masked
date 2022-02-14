
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int strm_value ;



__attribute__((used)) static inline double
FUNC_0(strm_value VAR_0)
{
  union {
    double f;
    uint64_t i;
  } VAR_1;

  VAR_1.i = VAR_0;
  return VAR_1.f;
}
