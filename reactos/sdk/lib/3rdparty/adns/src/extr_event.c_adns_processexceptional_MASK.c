
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_1__* adns_state ;
struct TYPE_5__ {int tcpstate; int tcpsocket; } ;
typedef int ADNS_SOCKET ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int VAR_0 ;





int FUNC_3(adns_state VAR_1, ADNS_SOCKET VAR_2, const struct timeval *VAR_3) {
  FUNC_1(VAR_1,0,VAR_0);
  switch (VAR_1->tcpstate) {
  case 129:
  case 131:
    break;
  case 130:
  case 128:
    if (VAR_2 != VAR_1->tcpsocket) break;
    FUNC_2(VAR_1,"poll/select","exceptional condition detected");
    break;
  default:
    FUNC_0();
  }
  FUNC_1(VAR_1,0,VAR_0);
  return 0;
}
