
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vbuf ;
typedef scalar_t__ adns_status ;
struct TYPE_2__ {scalar_t__ i; int str; } ;
typedef TYPE_1__ adns_rr_intstr ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static adns_status FUNC_2(vbuf *VAR_1, const void *VAR_2) {
  const adns_rr_intstr *const *VAR_3= VAR_2;
  const adns_rr_intstr *VAR_4;
  adns_status VAR_5;
  int VAR_6;

  for (VAR_4= *VAR_3, VAR_6=0; VAR_4->i >= 0; VAR_4++, VAR_6=1) {
    if (VAR_6) FUNC_0(" ");
    VAR_5= FUNC_1(VAR_1,VAR_4->str,VAR_4->i); if (VAR_5) return VAR_5;
  }
  return VAR_0;
}
