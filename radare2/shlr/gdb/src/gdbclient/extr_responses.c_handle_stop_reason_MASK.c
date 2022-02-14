
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_19__ {int present; int tid; int pid; } ;
struct TYPE_18__ {int present; int tid; int pid; } ;
struct TYPE_16__ {char* path; int present; } ;
struct TYPE_15__ {int present; int addr; } ;
struct TYPE_14__ {int present; int tid; int pid; } ;
struct TYPE_13__ {int signum; int core; int is_valid; int vforkdone; int library; int swbreak; int hwbreak; int create; int reason; TYPE_6__ vfork; TYPE_5__ fork; TYPE_3__ exec; TYPE_2__ watchpoint; TYPE_1__ thread; } ;
struct TYPE_17__ {int multiprocess; } ;
struct TYPE_20__ {int data_len; int* data; TYPE_11__ stop_reason; TYPE_4__ stub_features; } ;
typedef TYPE_7__ libgdbr_t ;
typedef int libgdbr_stop_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (TYPE_11__*,int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,int *,int *,int ) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (char*,char*,int*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,int *,int) ;
 int FUNC_15 (char*,int *,int) ;
 int FUNC_16 (char*,int,char*) ;

int FUNC_17(libgdbr_t *VAR_3) {
 FUNC_7 (VAR_3);
 if (VAR_3->data_len < 3) {
  return -1;
 }
 switch (VAR_3->data[0]) {
 case 'O':
  FUNC_16 (VAR_3->data + 1, VAR_3->data_len - 1, VAR_3->data + 1);

  FUNC_1 ("%s", VAR_3->data + 1);
  if (FUNC_7 (VAR_3) < 0) {
   return -1;
  }
  FUNC_4 (&VAR_3->stop_reason, 0, sizeof (libgdbr_stop_reason_t));
  VAR_3->stop_reason.signum = -1;
  VAR_3->stop_reason.reason = VAR_1;
  return 0;
 case 'W':
  return FUNC_9 (VAR_3);
 case 'X':
  return FUNC_10 (VAR_3);
 }
 if (VAR_3->data[0] != 'T') {
  return -1;
 }
 char *VAR_4, *VAR_5;
 VAR_3->data[VAR_3->data_len] = '\0';
 FUNC_2 (VAR_3->stop_reason.exec.path);
 FUNC_4 (&VAR_3->stop_reason, 0, sizeof (libgdbr_stop_reason_t));
 VAR_3->stop_reason.core = -1;
 if (FUNC_8 (VAR_3->data + 1, "%02x", &VAR_3->stop_reason.signum) != 1) {
  return -1;
 }
 VAR_3->stop_reason.is_valid = 1;
 VAR_3->stop_reason.reason = VAR_2;
 for (VAR_4 = FUNC_13 (VAR_3->data + 3, ";"); VAR_4; VAR_4 = FUNC_13 (((void*)0), ";")) {
  if (FUNC_5 (VAR_4, "thread") && !VAR_3->stop_reason.thread.present) {
   if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
    continue;
   }
   VAR_5++;
   if (FUNC_6 (VAR_5, &VAR_3->stop_reason.thread.pid,
         &VAR_3->stop_reason.thread.tid,
         VAR_3->stub_features.multiprocess) < 0) {
    continue;
   }
   VAR_3->stop_reason.thread.present = 1;
   continue;
  }
  if (FUNC_5 (VAR_4, "core")) {
   if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
    continue;
   }
   VAR_5++;
   if (!FUNC_3 (*VAR_5)) {
    continue;
   }
   VAR_3->stop_reason.core = (int) FUNC_14 (VAR_5, ((void*)0), 16);
   continue;
  }
  if (VAR_3->stop_reason.signum == 5) {
   if (FUNC_5 (VAR_4, "watch")
       || FUNC_5 (VAR_4, "rwatch")
       || FUNC_5 (VAR_4, "awatch")) {
    if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
     continue;
    }
    VAR_5++;
    if (!FUNC_3 (*VAR_5)) {
     continue;
    }
    VAR_3->stop_reason.watchpoint.addr = FUNC_15 (VAR_5, ((void*)0), 16);
    VAR_3->stop_reason.watchpoint.present = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "exec") && !VAR_3->stop_reason.exec.present) {
    if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
     continue;
    }
    VAR_5++;
    if (!(VAR_3->stop_reason.exec.path = FUNC_0 (FUNC_12 (VAR_4) / 2, 1))) {
     continue;
    }
    FUNC_16 (VAR_5, FUNC_12 (VAR_5), VAR_3->stop_reason.exec.path);
    VAR_3->stop_reason.exec.present = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "fork") && !VAR_3->stop_reason.fork.present) {
    if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
     continue;
    }
    VAR_5++;
    if (FUNC_6 (VAR_5, &VAR_3->stop_reason.fork.pid,
          &VAR_3->stop_reason.fork.tid,
          VAR_3->stub_features.multiprocess) < 0) {
     continue;
    }
    VAR_3->stop_reason.fork.present = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "vfork") && !VAR_3->stop_reason.vfork.present) {
    if (!(VAR_5 = FUNC_11 (VAR_4, ':'))) {
     continue;
    }
    VAR_5++;
    if (FUNC_6 (VAR_5, &VAR_3->stop_reason.vfork.pid,
          &VAR_3->stop_reason.vfork.tid,
          VAR_3->stub_features.multiprocess) < 0) {
     continue;
    }
    VAR_3->stop_reason.vfork.present = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "vforkdone")) {
    VAR_3->stop_reason.vforkdone = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "library")) {
    VAR_3->stop_reason.library = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "swbreak")) {
    VAR_3->stop_reason.swbreak = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "hwbreak")) {
    VAR_3->stop_reason.hwbreak = 1;
    continue;
   }
   if (FUNC_5 (VAR_4, "create")) {
    VAR_3->stop_reason.create = 1;
    continue;
   }
  }
 }
 if (VAR_3->stop_reason.signum == 5) {
  VAR_3->stop_reason.reason = VAR_0;
 }
 return 0;
}
