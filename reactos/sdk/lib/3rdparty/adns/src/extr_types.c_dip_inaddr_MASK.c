
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef TYPE_1__* adns_state ;
struct TYPE_4__ {int nsortlist; } ;


 int FUNC_0 (TYPE_1__*,struct in_addr) ;

__attribute__((used)) static int FUNC_1(adns_state VAR_0, struct in_addr VAR_1, struct in_addr VAR_2) {
  int VAR_3, VAR_4;

  if (!VAR_0->nsortlist) return 0;

  VAR_3= FUNC_0(VAR_0,VAR_1);
  VAR_4= FUNC_0(VAR_0,VAR_2);
  return VAR_4<VAR_3;
}
