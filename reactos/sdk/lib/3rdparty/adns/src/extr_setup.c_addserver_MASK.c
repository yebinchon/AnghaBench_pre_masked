
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {scalar_t__ s_addr; } ;
struct server {struct in_addr addr; } ;
typedef TYPE_1__* adns_state ;
struct TYPE_5__ {int nservers; struct server* servers; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,char*,int ) ;
 int FUNC_2 (struct in_addr) ;

__attribute__((used)) static void FUNC_3(adns_state VAR_1, struct in_addr VAR_2) {
  int VAR_3;
  struct server *VAR_4;

  for (VAR_3=0; VAR_3<VAR_1->nservers; VAR_3++) {
    if (VAR_1->servers[VAR_3].addr.s_addr == VAR_2.s_addr) {
      FUNC_0(VAR_1,-1,0,"duplicate nameserver %s ignored",FUNC_2(VAR_2));
      return;
    }
  }

  if (VAR_1->nservers>=VAR_0) {
    FUNC_1(VAR_1,-1,0,"too many nameservers, ignoring %s",FUNC_2(VAR_2));
    return;
  }

  VAR_4= VAR_1->servers+VAR_1->nservers;
  VAR_4->addr= VAR_2;
  VAR_1->nservers++;
}
