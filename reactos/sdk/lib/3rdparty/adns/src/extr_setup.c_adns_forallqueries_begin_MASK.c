
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
struct TYPE_11__ {scalar_t__ head; } ;
struct TYPE_10__ {scalar_t__ head; } ;
struct TYPE_9__ {scalar_t__ head; } ;
struct TYPE_8__ {scalar_t__ head; } ;
struct TYPE_12__ {TYPE_4__ output; TYPE_3__ childw; TYPE_2__ tcpw; TYPE_1__ udpw; scalar_t__ forallnext; } ;


 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int VAR_0 ;

void FUNC_1(adns_state VAR_1) {
  FUNC_0(VAR_1,0,VAR_0);
  VAR_1->forallnext=
    VAR_1->udpw.head ? VAR_1->udpw.head :
    VAR_1->tcpw.head ? VAR_1->tcpw.head :
    VAR_1->childw.head ? VAR_1->childw.head :
    VAR_1->output.head;
}
