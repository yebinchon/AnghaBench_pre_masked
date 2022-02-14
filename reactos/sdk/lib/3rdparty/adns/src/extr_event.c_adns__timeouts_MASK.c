
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_1__* adns_state ;
struct TYPE_5__ {int tcpw; int udpw; } ;


 int FUNC_0 (TYPE_1__*,int,struct timeval**,struct timeval*,struct timeval) ;
 int FUNC_1 (TYPE_1__*,int,struct timeval**,struct timeval*,struct timeval,int *) ;

void FUNC_2(adns_state VAR_0, int VAR_1,
      struct timeval **VAR_2, struct timeval *VAR_3,
      struct timeval VAR_4) {
  FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4, &VAR_0->udpw);
  FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4, &VAR_0->tcpw);
  FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4);
}
