
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int type; } ;
struct TYPE_6__ {scalar_t__ tid; TYPE_1__ header; struct TYPE_6__* comm; scalar_t__ pid; } ;
union perf_event {TYPE_2__ comm; } ;
typedef int u64 ;
struct machine {scalar_t__ pid; int id_hdr_size; } ;
typedef scalar_t__ pid_t ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct machine*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_2__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(union perf_event *VAR_1, pid_t VAR_2,
        struct machine *VAR_3,
        pid_t *VAR_4, pid_t *VAR_5)
{
 size_t VAR_6;

 *VAR_5 = -1;

 FUNC_2(&VAR_1->comm, 0, sizeof(VAR_1->comm));

 if (FUNC_1(VAR_3)) {
  if (FUNC_3(VAR_2, VAR_1->comm.comm,
          sizeof(VAR_1->comm.comm),
          VAR_4, VAR_5) != 0) {
   return -1;
  }
 } else {
  *VAR_4 = VAR_3->pid;
 }

 if (*VAR_4 < 0)
  return -1;

 VAR_1->comm.pid = *VAR_4;
 VAR_1->comm.header.type = VAR_0;

 VAR_6 = FUNC_4(VAR_1->comm.comm) + 1;
 VAR_6 = FUNC_0(VAR_6, sizeof(u64));
 FUNC_2(VAR_1->comm.comm + VAR_6, 0, VAR_3->id_hdr_size);
 VAR_1->comm.header.size = (sizeof(VAR_1->comm) -
    (sizeof(VAR_1->comm.comm) - VAR_6) +
    VAR_3->id_hdr_size);
 VAR_1->comm.tid = VAR_2;

 return 0;
}
