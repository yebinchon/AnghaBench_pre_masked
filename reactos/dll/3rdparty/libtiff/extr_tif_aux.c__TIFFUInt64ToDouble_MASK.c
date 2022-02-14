
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_3__ {scalar_t__ high; } ;
struct TYPE_4__ {scalar_t__ value; TYPE_1__ part; } ;
typedef TYPE_2__ _Int64 ;



double
FUNC_0(uint64 VAR_0)
{
 _Int64 VAR_1;

 VAR_1.value = VAR_0;
 if (VAR_1.part.high >= 0) {
  return (double)VAR_1.value;
 } else {
  long double VAR_2;
  VAR_2 = (long double)VAR_1.value;
  VAR_2 += 18446744073709551616.0;
  return (double)VAR_2;
 }
}
