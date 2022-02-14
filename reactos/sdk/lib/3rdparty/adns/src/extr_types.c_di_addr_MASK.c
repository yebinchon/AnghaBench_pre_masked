
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int adns_state ;
struct TYPE_6__ {int sin_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {TYPE_2__ inet; TYPE_1__ sa; } ;
struct TYPE_8__ {TYPE_3__ addr; } ;
typedef TYPE_4__ adns_rr_addr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(adns_state VAR_1, const void *VAR_2, const void *VAR_3) {
  const adns_rr_addr *VAR_4= VAR_2, *VAR_5= VAR_3;

  FUNC_0(VAR_4->addr.sa.sa_family == VAR_0);
  return FUNC_1(VAR_1, VAR_4->addr.inet.sin_addr, VAR_5->addr.inet.sin_addr);
}
