
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef TYPE_2__* adns_state ;
typedef TYPE_3__* adns_query ;
struct TYPE_9__ {scalar_t__ state; struct TYPE_9__* next; } ;
struct TYPE_7__ {TYPE_3__* head; } ;
struct TYPE_8__ {scalar_t__ tcpstate; TYPE_1__ tcpw; int tcpserver; } ;


 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*,struct timeval) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(adns_state VAR_2, struct timeval VAR_3) {
  adns_query VAR_4, VAR_5;

  FUNC_0(VAR_2,VAR_2->tcpserver,0,"TCP connected");
  VAR_2->tcpstate= VAR_1;
  for (VAR_4= VAR_2->tcpw.head; VAR_4 && VAR_2->tcpstate == VAR_1; VAR_4= VAR_5) {
    VAR_5= VAR_4->next;
    FUNC_2(VAR_4->state == VAR_0);
    FUNC_1(VAR_4,VAR_3);
  }
}
