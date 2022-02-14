
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int misc; } ;
struct TYPE_4__ {int next_prev_tid; int next_prev_pid; } ;
struct TYPE_6__ {TYPE_2__ header; TYPE_1__ context_switch; } ;
struct pyrf_event {TYPE_3__ event; } ;
typedef int PyObject ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char**,char*,int ,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_event *VAR_1)
{
 PyObject *VAR_2;
 char *VAR_3;

 if (FUNC_2(&VAR_3, "{ type: context_switch, next_prev_pid: %u, next_prev_tid: %u, switch_out: %u }",
       VAR_1->event.context_switch.next_prev_pid,
       VAR_1->event.context_switch.next_prev_tid,
       !!(VAR_1->event.header.misc & VAR_0)) < 0) {
  VAR_2 = FUNC_0();
 } else {
  VAR_2 = FUNC_1(VAR_3);
  FUNC_3(VAR_3);
 }
 return VAR_2;
}
