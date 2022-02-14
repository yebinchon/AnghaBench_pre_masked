
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_5__* adns_state ;
struct TYPE_13__ {scalar_t__ head; } ;
struct TYPE_12__ {scalar_t__ head; } ;
struct TYPE_11__ {scalar_t__ head; } ;
struct TYPE_10__ {scalar_t__ head; } ;
struct TYPE_14__ {int udpsocket; int tcpsocket; int tcprecv; int tcpsend; TYPE_4__ output; TYPE_3__ childw; TYPE_2__ tcpw; TYPE_1__ udpw; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;

void FUNC_7(adns_state VAR_1) {
  FUNC_1(VAR_1,0,VAR_0);
  for (;;) {
    if (VAR_1->udpw.head) FUNC_3(VAR_1->udpw.head);
    else if (VAR_1->tcpw.head) FUNC_3(VAR_1->tcpw.head);
    else if (VAR_1->childw.head) FUNC_3(VAR_1->childw.head);
    else if (VAR_1->output.head) FUNC_3(VAR_1->output.head);
    else break;
  }
  FUNC_4(VAR_1->udpsocket);
  if (VAR_1->tcpsocket != -1) FUNC_4(VAR_1->tcpsocket);
  FUNC_2(&VAR_1->tcpsend);
  FUNC_2(&VAR_1->tcprecv);
  FUNC_6(VAR_1);
  FUNC_5(VAR_1);




}
