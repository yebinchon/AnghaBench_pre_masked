
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vbuf ;
typedef scalar_t__ adns_status ;
struct TYPE_2__ {int serial; int rname; int mname; } ;
typedef TYPE_1__ adns_rr_soa ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static adns_status FUNC_4(vbuf *VAR_1, const void *VAR_2) {
  const adns_rr_soa *VAR_3= VAR_2;
  char VAR_4[20];
  int VAR_5;
  adns_status VAR_6;

  VAR_6= FUNC_1(VAR_1,VAR_3->mname); if (VAR_6) return VAR_6;
  FUNC_0(" ");
  VAR_6= FUNC_2(VAR_1,VAR_3->rname); if (VAR_6) return VAR_6;

  for (VAR_5=0; VAR_5<5; VAR_5++) {
    FUNC_3(VAR_4," %lu",(&VAR_3->serial)[VAR_5]);
    FUNC_0(VAR_4);
  }

  return VAR_0;
}
