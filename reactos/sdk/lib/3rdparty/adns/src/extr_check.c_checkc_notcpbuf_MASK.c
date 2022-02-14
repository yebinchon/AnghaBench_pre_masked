
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* adns_state ;
struct TYPE_6__ {int used; } ;
struct TYPE_5__ {int used; } ;
struct TYPE_7__ {int tcprecv_skip; TYPE_2__ tcprecv; TYPE_1__ tcpsend; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(adns_state VAR_0) {
  FUNC_0(!VAR_0->tcpsend.used);
  FUNC_0(!VAR_0->tcprecv.used);
  FUNC_0(!VAR_0->tcprecv_skip);
}
