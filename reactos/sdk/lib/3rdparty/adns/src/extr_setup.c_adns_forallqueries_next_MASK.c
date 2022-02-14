
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_6__* adns_state ;
typedef TYPE_7__* adns_query ;
struct TYPE_15__ {void* ext; } ;
struct TYPE_17__ {TYPE_5__ ctx; int parent; struct TYPE_17__* next; } ;
struct TYPE_14__ {TYPE_7__* head; } ;
struct TYPE_13__ {TYPE_7__* tail; TYPE_7__* head; } ;
struct TYPE_12__ {TYPE_7__* tail; TYPE_7__* head; } ;
struct TYPE_11__ {TYPE_7__* tail; } ;
struct TYPE_16__ {TYPE_7__* forallnext; TYPE_4__ output; TYPE_3__ childw; TYPE_2__ tcpw; TYPE_1__ udpw; } ;


 int FUNC_0 (TYPE_6__*,int ,int ) ;
 int VAR_0 ;

adns_query FUNC_1(adns_state VAR_1, void **VAR_2) {
  adns_query VAR_3, VAR_4;

  FUNC_0(VAR_1,0,VAR_0);
  VAR_4= VAR_1->forallnext;
  for (;;) {
    VAR_3= VAR_4;
    if (!VAR_3) return 0;
    if (VAR_3->next) {
      VAR_4= VAR_3->next;
    } else if (VAR_3 == VAR_1->udpw.tail) {
      VAR_4=
 VAR_1->tcpw.head ? VAR_1->tcpw.head :
 VAR_1->childw.head ? VAR_1->childw.head :
 VAR_1->output.head;
    } else if (VAR_3 == VAR_1->tcpw.tail) {
      VAR_4=
 VAR_1->childw.head ? VAR_1->childw.head :
 VAR_1->output.head;
    } else if (VAR_3 == VAR_1->childw.tail) {
      VAR_4= VAR_1->output.head;
    } else {
      VAR_4= 0;
    }
    if (!VAR_3->parent) break;
  }
  VAR_1->forallnext= VAR_4;
  if (VAR_2) *VAR_2= VAR_3->ctx.ext;
  return VAR_3;
}
