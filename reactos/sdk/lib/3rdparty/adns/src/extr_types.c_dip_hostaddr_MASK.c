
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int adns_state ;
struct TYPE_12__ {scalar_t__ astatus; TYPE_4__* addrs; } ;
typedef TYPE_5__ adns_rr_hostaddr ;
struct TYPE_9__ {int sin_addr; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_10__ {TYPE_2__ inet; TYPE_1__ sa; } ;
struct TYPE_11__ {TYPE_3__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(adns_state VAR_1, const adns_rr_hostaddr *VAR_2, const adns_rr_hostaddr *VAR_3) {
  if (VAR_2->astatus != VAR_3->astatus) return VAR_2->astatus;
  if (VAR_2->astatus) return 0;

  FUNC_0(VAR_2->addrs[0].addr.sa.sa_family == VAR_0);
  FUNC_0(VAR_3->addrs[0].addr.sa.sa_family == VAR_0);
  return FUNC_1(VAR_1,
      VAR_2->addrs[0].addr.inet.sin_addr,
      VAR_3->addrs[0].addr.inet.sin_addr);
}
