
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* get_constraints ) (struct sway_view*,double*,double*,double*,double*) ;} ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (struct sway_view*,double*,double*,double*,double*) ;

void FUNC_1(struct sway_view *VAR_2, double *VAR_3,
  double *VAR_4, double *VAR_5, double *VAR_6) {
 if (VAR_2->impl->get_constraints) {
  VAR_2->impl->get_constraints(VAR_2,
    VAR_3, VAR_4, VAR_5, VAR_6);
 } else {
  *VAR_3 = VAR_1;
  *VAR_4 = VAR_0;
  *VAR_5 = VAR_1;
  *VAR_6 = VAR_0;
 }
}
