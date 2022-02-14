
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_5__* adns_state ;
struct TYPE_11__ {int used; } ;
struct TYPE_12__ {scalar_t__ udpsocket; int nsortlist; scalar_t__ tcpserver; scalar_t__ nservers; int tcpstate; int tcpsocket; int nsearchlist; scalar_t__ searchlist; TYPE_4__ tcprecv; int tcprecv_skip; TYPE_3__* sortlist; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_10__ {TYPE_2__ mask; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;





__attribute__((used)) static void FUNC_2(adns_state VAR_0) {
  int VAR_1;

  FUNC_0(VAR_0->udpsocket >= 0);

  for (VAR_1=0; VAR_1<VAR_0->nsortlist; VAR_1++)
    FUNC_0(!(VAR_0->sortlist[VAR_1].base.s_addr & ~VAR_0->sortlist[VAR_1].mask.s_addr));

  FUNC_0(VAR_0->tcpserver >= 0 && VAR_0->tcpserver < VAR_0->nservers);

  switch (VAR_0->tcpstate) {
  case 130:
    FUNC_0(VAR_0->tcpsocket >= 0);
    FUNC_1(VAR_0);
    break;
  case 129:
  case 131:
    FUNC_0(VAR_0->tcpsocket == -1);
    FUNC_1(VAR_0);
    break;
  case 128:
    FUNC_0(VAR_0->tcpsocket >= 0);
    FUNC_0(VAR_0->tcprecv_skip <= VAR_0->tcprecv.used);
    break;
  default:
    FUNC_0(!"ads->tcpstate value");
  }

  FUNC_0(VAR_0->searchlist || !VAR_0->nsearchlist);
}
