
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comm; int tid; int pid; } ;
struct TYPE_4__ {int misc; } ;
union perf_event {TYPE_1__ comm; TYPE_2__ header; } ;
struct thread {int dummy; } ;
struct perf_sample {int time; } ;
struct machine {int comm_exec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct thread*,int ,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 struct thread* FUNC_2 (struct machine*,int ,int ) ;
 int FUNC_3 (union perf_event*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct thread*) ;

int FUNC_5(struct machine *VAR_3, union perf_event *VAR_4,
    struct perf_sample *VAR_5)
{
 struct thread *VAR_6 = FUNC_2(VAR_3,
       VAR_4->comm.pid,
       VAR_4->comm.tid);
 bool VAR_7 = VAR_4->header.misc & VAR_0;
 int VAR_8 = 0;

 if (VAR_7)
  VAR_3->comm_exec = 1;

 if (VAR_1)
  FUNC_3(VAR_4, VAR_2);

 if (VAR_6 == ((void*)0) ||
     FUNC_0(VAR_6, VAR_4->comm.comm, VAR_5->time, VAR_7)) {
  FUNC_1("problem processing PERF_RECORD_COMM, skipping event.\n");
  VAR_8 = -1;
 }

 FUNC_4(VAR_6);

 return VAR_8;
}
