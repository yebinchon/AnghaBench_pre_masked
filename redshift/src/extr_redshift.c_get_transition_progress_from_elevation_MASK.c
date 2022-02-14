
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double low; double high; } ;
typedef TYPE_1__ transition_scheme_t ;



__attribute__((used)) static double
FUNC_0(
 const transition_scheme_t *VAR_0, double VAR_1)
{
 if (VAR_1 < VAR_0->low) {
  return 0.0;
 } else if (VAR_1 < VAR_0->high) {
  return (VAR_0->low - VAR_1) /
   (VAR_0->low - VAR_0->high);
 } else {
  return 1.0;
 }
}
