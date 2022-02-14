
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* adns_state ;
struct TYPE_6__ {scalar_t__ used; } ;
struct TYPE_5__ {scalar_t__ used; } ;
struct TYPE_7__ {int tcpserver; int tcpsocket; TYPE_2__ tcpsend; scalar_t__ tcprecv_skip; TYPE_1__ tcprecv; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(adns_state VAR_0) {
  int VAR_1;

  VAR_1= VAR_0->tcpserver;
  FUNC_0(VAR_0->tcpsocket);
  VAR_0->tcpsocket= -1;
  VAR_0->tcprecv.used= VAR_0->tcprecv_skip= VAR_0->tcpsend.used= 0;
}
