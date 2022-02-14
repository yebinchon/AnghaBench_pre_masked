
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comm; int tid; int pid; } ;
struct TYPE_4__ {TYPE_1__ comm; } ;
struct pyrf_event {TYPE_2__ event; } ;
typedef int PyObject ;


 int * FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static PyObject *FUNC_1(struct pyrf_event *VAR_0)
{
 return FUNC_0("{ type: comm, pid: %u, tid: %u, comm: %s }",
       VAR_0->event.comm.pid,
       VAR_0->event.comm.tid,
       VAR_0->event.comm.comm);
}
