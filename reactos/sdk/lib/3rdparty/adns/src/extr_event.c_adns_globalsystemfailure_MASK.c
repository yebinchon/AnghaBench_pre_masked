
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* adns_state ;
struct TYPE_8__ {scalar_t__ head; } ;
struct TYPE_7__ {scalar_t__ head; } ;
struct TYPE_9__ {int tcpstate; TYPE_2__ tcpw; TYPE_1__ udpw; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;





void FUNC_4(adns_state VAR_2) {
  FUNC_1(VAR_2,0,VAR_1);

  while (VAR_2->udpw.head) FUNC_2(VAR_2->udpw.head, VAR_0);
  while (VAR_2->tcpw.head) FUNC_2(VAR_2->tcpw.head, VAR_0);

  switch (VAR_2->tcpstate) {
  case 130:
  case 128:
    FUNC_3(VAR_2,0,0);
    break;
  case 129:
  case 131:
    break;
  default:
    FUNC_0();
  }
  FUNC_1(VAR_2,0,VAR_1);
}
