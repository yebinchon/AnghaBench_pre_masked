
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct sortlist {TYPE_2__ base; TYPE_1__ mask; } ;
struct in_addr {int s_addr; } ;
typedef TYPE_3__* adns_state ;
struct TYPE_7__ {int nsortlist; struct sortlist* sortlist; } ;



__attribute__((used)) static int FUNC_0(adns_state VAR_0, struct in_addr VAR_1) {
  const struct sortlist *VAR_2;
  int VAR_3;

  for (VAR_3=0, VAR_2=VAR_0->sortlist;
       VAR_3<VAR_0->nsortlist && !((VAR_1.s_addr & VAR_2->mask.s_addr) == VAR_2->base.s_addr);
       VAR_3++, VAR_2++);
  return VAR_3;
}
