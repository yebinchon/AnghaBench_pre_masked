
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int naddrs; void* addrs; int host; } ;
typedef TYPE_1__ adns_rr_hostaddr ;
typedef int adns_query ;


 int FUNC_0 (int ,void**,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(adns_query VAR_0, adns_rr_hostaddr *VAR_1) {
  void *VAR_2;

  FUNC_1(VAR_0,&VAR_1->host);
  VAR_2= VAR_1->addrs;
  FUNC_0(VAR_0, &VAR_2, VAR_1->naddrs*sizeof(*VAR_1->addrs));
  VAR_1->addrs= VAR_2;
}
