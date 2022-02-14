
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* adns_state ;
typedef int adns_initflags ;
struct TYPE_7__ {int wVersion; } ;
typedef TYPE_2__ WSADATA ;
typedef int WORD ;
struct TYPE_6__ {int iflags; int nextid; int udpsocket; int tcpsocket; int searchndots; int * diagfile; scalar_t__ searchlist; int tcptimeout; int tcpstate; scalar_t__ tcpserver; scalar_t__ nsearchlist; scalar_t__ nsortlist; scalar_t__ nservers; scalar_t__ tcprecv_skip; int tcprecv; int tcpsend; scalar_t__ forallnext; int output; int childw; int tcpw; int udpw; scalar_t__ configerrno; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,char*) ;
 TYPE_1__* FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(adns_state *VAR_3, adns_initflags VAR_4, FILE *VAR_5) {
  adns_state VAR_6;







  VAR_6= FUNC_8(sizeof(*VAR_6)); if (!VAR_6) return VAR_1;

  VAR_6->iflags= VAR_4;
  VAR_6->diagfile= VAR_5;
  VAR_6->configerrno= 0;
  FUNC_1(VAR_6->udpw);
  FUNC_1(VAR_6->tcpw);
  FUNC_1(VAR_6->childw);
  FUNC_1(VAR_6->output);
  VAR_6->forallnext= 0;
  VAR_6->nextid= 0x311f;
  VAR_6->udpsocket= VAR_6->tcpsocket= -1;
  FUNC_6(&VAR_6->tcpsend);
  FUNC_6(&VAR_6->tcprecv);
  VAR_6->tcprecv_skip= 0;
  VAR_6->nservers= VAR_6->nsortlist= VAR_6->nsearchlist= VAR_6->tcpserver= 0;
  VAR_6->searchndots= 1;
  VAR_6->tcpstate= VAR_2;
  FUNC_9(&VAR_6->tcptimeout);
  VAR_6->searchlist= 0;
  *VAR_3= VAR_6;

  return 0;
}
