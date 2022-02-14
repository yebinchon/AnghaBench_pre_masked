
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbuf ;
typedef scalar_t__ adns_status ;
struct TYPE_3__ {int astatus; int naddrs; int * addrs; int host; } ;
typedef TYPE_1__ adns_rr_hostaddr ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static adns_status FUNC_9(vbuf *VAR_1, const adns_rr_hostaddr *VAR_2) {
  const char *VAR_3;
  adns_status VAR_4;
  char VAR_5[20];
  int VAR_6;

  VAR_4= FUNC_5(VAR_1,VAR_2->host); if (VAR_4) return VAR_4;

  FUNC_0(" ");
  FUNC_0(FUNC_2(VAR_2->astatus));

  FUNC_7(VAR_5," %d ",VAR_2->astatus);
  FUNC_0(VAR_5);

  FUNC_0(FUNC_1(VAR_2->astatus));
  FUNC_0(" ");

  VAR_3= FUNC_3(VAR_2->astatus);
  VAR_4= FUNC_6(VAR_1,VAR_3,(int)FUNC_8(VAR_3)); if (VAR_4) return VAR_4;

  if (VAR_2->naddrs >= 0) {
    FUNC_0(" (");
    for (VAR_6=0; VAR_6<VAR_2->naddrs; VAR_6++) {
      FUNC_0(" ");
      VAR_4= FUNC_4(VAR_1,&VAR_2->addrs[VAR_6]);
    }
    FUNC_0(" )");
  } else {
    FUNC_0(" ?");
  }
  return VAR_0;
}
