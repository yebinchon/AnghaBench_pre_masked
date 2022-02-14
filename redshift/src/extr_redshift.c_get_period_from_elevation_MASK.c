
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double low; double high; } ;
typedef TYPE_1__ transition_scheme_t ;
typedef int period_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static period_t
FUNC_0(
 const transition_scheme_t *VAR_3, double VAR_4)
{
 if (VAR_4 < VAR_3->low) {
  return VAR_1;
 } else if (VAR_4 < VAR_3->high) {
  return VAR_2;
 } else {
  return VAR_0;
 }
}
