
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vbuf ;
typedef int adns_status ;
struct TYPE_2__ {int i; int str; } ;
typedef TYPE_1__ adns_rr_intstr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static adns_status FUNC_3(vbuf *VAR_0, const void *VAR_1) {
  const adns_rr_intstr *VAR_2= VAR_1;
  char VAR_3[10];

  FUNC_2(VAR_3,"%u ",VAR_2->i);
  FUNC_0(VAR_3);
  return FUNC_1(VAR_0,VAR_2->str);
}
