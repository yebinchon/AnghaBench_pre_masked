
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pid; int tid; } ;
struct TYPE_9__ {int is_valid; TYPE_2__ thread; int reason; } ;
struct TYPE_7__ {scalar_t__ multiprocess; } ;
struct TYPE_10__ {int pid; int data_len; TYPE_3__ stop_reason; int * data; TYPE_1__ stub_features; } ;
typedef TYPE_4__ libgdbr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int*,int*) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(libgdbr_t *VAR_1) {
 int VAR_2 = 0, VAR_3 = VAR_1->pid;
 VAR_1->stop_reason.reason = VAR_0;
 if (VAR_1->stub_features.multiprocess && VAR_1->data_len > 3) {
  if (FUNC_3 (VAR_1->data + 1, "%x;process:%x", &VAR_2, &VAR_3) != 2) {
   FUNC_0 ("Message from remote: %s\n", *VAR_1->data);
   return -1;
  }
  FUNC_0 ("Process %d exited with status %d\n", VAR_3, VAR_2);
  VAR_1->stop_reason.thread.pid = VAR_3;
  VAR_1->stop_reason.thread.tid = VAR_3;
  VAR_1->stop_reason.is_valid = 1;
  return 0;
 }
 if (!FUNC_2 (VAR_1->data[1])) {
  FUNC_0 ("Message from remote: %s\n", *VAR_1->data);
  return -1;
 }
 VAR_2 = (int) FUNC_4 (VAR_1->data + 1, ((void*)0), 16);
 FUNC_0 ("Process %d exited with status %d\n", VAR_1->pid, VAR_2);
 VAR_1->stop_reason.thread.pid = VAR_3;
 VAR_1->stop_reason.thread.tid = VAR_3;
 VAR_1->stop_reason.is_valid = 1;

 return FUNC_1 (VAR_1);
}
