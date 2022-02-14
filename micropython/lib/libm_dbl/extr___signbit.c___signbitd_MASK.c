
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



int FUNC_0(double VAR_0)
{
 union {
  double d;
  uint64_t i;
 } VAR_1 = { VAR_0 };
 return VAR_1.i>>63;
}
