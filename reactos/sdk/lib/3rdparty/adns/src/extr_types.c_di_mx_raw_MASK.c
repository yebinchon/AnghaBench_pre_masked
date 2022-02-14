
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int adns_state ;
struct TYPE_2__ {scalar_t__ i; } ;
typedef TYPE_1__ adns_rr_intstr ;



__attribute__((used)) static int FUNC_0(adns_state VAR_0, const void *VAR_1, const void *VAR_2) {
  const adns_rr_intstr *VAR_3= VAR_1, *VAR_4= VAR_2;

  if (VAR_3->i < VAR_4->i) return 0;
  if (VAR_3->i > VAR_4->i) return 1;
  return 0;
}
