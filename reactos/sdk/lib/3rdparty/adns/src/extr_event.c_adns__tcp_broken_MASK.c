
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* adns_state ;
typedef TYPE_3__* adns_query ;
struct TYPE_9__ {int retries; struct TYPE_9__* next; } ;
struct TYPE_7__ {TYPE_3__* head; } ;
struct TYPE_8__ {scalar_t__ tcpstate; int tcpserver; int nservers; TYPE_1__ tcpw; } ;


 int FUNC_0 (TYPE_2__*,int,int ,char*,char const*,char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(adns_state VAR_3, const char *VAR_4, const char *VAR_5) {
  int VAR_6;
  adns_query VAR_7;

  FUNC_1(VAR_3->tcpstate == VAR_1 || VAR_3->tcpstate == VAR_2);
  VAR_6= VAR_3->tcpserver;
  if (VAR_4) FUNC_0(VAR_3,VAR_6,0,"TCP connection failed: %s: %s",VAR_4,VAR_5);

  if (VAR_3->tcpstate == VAR_1) {

    for (VAR_7= VAR_3->tcpw.head; VAR_7; VAR_7= VAR_7->next)
      VAR_7->retries++;
  }

  FUNC_2(VAR_3);
  VAR_3->tcpstate= VAR_0;
  VAR_3->tcpserver= (VAR_6+1)%VAR_3->nservers;
}
