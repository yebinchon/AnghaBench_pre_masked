
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* adns_state ;
typedef TYPE_5__* adns_query ;
typedef int adns_answer ;
struct TYPE_16__ {TYPE_5__* head; } ;
struct TYPE_13__ {void* ext; } ;
struct TYPE_15__ {scalar_t__ id; TYPE_3__ ctx; int * answer; } ;
struct TYPE_12__ {scalar_t__ head; } ;
struct TYPE_11__ {scalar_t__ head; } ;
struct TYPE_14__ {TYPE_9__ output; TYPE_2__ tcpw; TYPE_1__ udpw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;

int FUNC_2(adns_state VAR_2,
    adns_query *VAR_3,
    adns_answer **VAR_4,
    void **VAR_5) {
  adns_query VAR_6;

  VAR_6= *VAR_3;
  if (!VAR_6) {
    if (VAR_2->output.head) {
      VAR_6= VAR_2->output.head;
    } else if (VAR_2->udpw.head || VAR_2->tcpw.head) {
      return VAR_0;
    } else {
      return VAR_1;
    }
  } else {
    if (VAR_6->id>=0) return VAR_0;
  }
  FUNC_0(VAR_2->output,VAR_6);
  *VAR_4= VAR_6->answer;
  if (VAR_5) *VAR_5= VAR_6->ctx.ext;
  *VAR_3= VAR_6;
  FUNC_1(VAR_6);
  return 0;
}
