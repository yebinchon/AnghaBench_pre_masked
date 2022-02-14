
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int QThreadSuffixSupported; int QListThreadsInStopReply; int qEcho; } ;
struct TYPE_7__ {int qXfer_btrace_read; int qXfer_btrace_conf_read; int qXfer_spu_read; int qXfer_spu_write; int qXfer_libraries_read; int qXfer_libraries_svr4_read; int qXfer_memory_map_read; int qXfer_auxv_read; int qXfer_exec_file_read; int qXfer_features_read; int qXfer_sdata_read; int qXfer_siginfo_read; int qXfer_siginfo_write; int qXfer_threads_read; int qXfer_traceframe_info_read; int qXfer_uib_read; int qXfer_fdpic_read; int qXfer_osdata_read; int Qbtrace_off; int Qbtrace_bts; int Qbtrace_pt; int Qbtrace_conf_bts_size; int Qbtrace_conf_pt_size; int QNonStop; int QCatchSyscalls; int QPassSignals; int QStartNoAckMode; int QAgent; int QAllow; int QDisableRandomization; int QTBuffer_size; int QThreadEvents; int multiprocess; TYPE_1__ lldb; int pkt_sz; } ;
struct TYPE_8__ {TYPE_2__ stub_features; void* remote_type; int * data; } ;
typedef TYPE_3__ libgdbr_t ;


 void* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int *,int) ;

int FUNC_7(libgdbr_t *VAR_1) {
 char *VAR_2 = ((void*)0);

 if (!*VAR_1->data) {
  return -1;
 }

 VAR_2 = FUNC_5 (VAR_1->data, ";");
 while (VAR_2) {
  if (FUNC_2 (VAR_2, "PacketSize=")) {

   VAR_1->stub_features.pkt_sz = FUNC_1 (FUNC_6 (VAR_2 + FUNC_4 ("PacketSize="), ((void*)0), 16), 2048);

   VAR_1->stub_features.pkt_sz = FUNC_0 (VAR_1->stub_features.pkt_sz, 64);
  } else if (FUNC_2 (VAR_2, "qXfer:")) {
   if (!VAR_2[6]) {
    VAR_2 = FUNC_5 (((void*)0), ";");
    continue;
   }
   char *VAR_3 = VAR_2 + 6;
   if (FUNC_2 (VAR_3, "btrace:read")) {
    VAR_1->stub_features.qXfer_btrace_read = (VAR_3[FUNC_4 ("btrace:read")] == '+');
   } else if (FUNC_2 (VAR_3, "btrace-conf:read")) {
    VAR_1->stub_features.qXfer_btrace_conf_read = (VAR_3[FUNC_4 ("btrace-conf:read")] == '+');
   } else if (FUNC_2 (VAR_3, "spu:read")) {
    VAR_1->stub_features.qXfer_spu_read = (VAR_3[FUNC_4 ("spu:read")] == '+');
   } else if (FUNC_2 (VAR_3, "spu:write")) {
    VAR_1->stub_features.qXfer_spu_write = (VAR_3[FUNC_4 ("spu:write")] == '+');
   } else if (FUNC_2 (VAR_3, "libraries:read")) {
    VAR_1->stub_features.qXfer_libraries_read = (VAR_3[FUNC_4 ("libraries:read")] == '+');
   } else if (FUNC_2 (VAR_3, "libraries-svr4:read")) {
    VAR_1->stub_features.qXfer_libraries_svr4_read = (VAR_3[FUNC_4 ("libraries-svr4:read")] == '+');
   } else if (FUNC_2 (VAR_3, "memory-map:read")) {
    VAR_1->stub_features.qXfer_memory_map_read = (VAR_3[FUNC_4 ("memory-map:read")] == '+');
   } else if (FUNC_2 (VAR_3, "auxv:read")) {
    VAR_1->stub_features.qXfer_auxv_read = (VAR_3[FUNC_4 ("auxv:read")] == '+');
   } else if (FUNC_2 (VAR_3, "exec-file:read")) {
    VAR_1->stub_features.qXfer_exec_file_read = (VAR_3[FUNC_4 ("exec-file:read")] == '+');
   } else if (FUNC_2 (VAR_3, "features:read")) {
    VAR_1->stub_features.qXfer_features_read = (VAR_3[FUNC_4 ("features:read")] == '+');
   } else if (FUNC_2 (VAR_3, "sdata:read")) {
    VAR_1->stub_features.qXfer_sdata_read = (VAR_3[FUNC_4 ("sdata:read")] == '+');
   } else if (FUNC_2 (VAR_3, "siginfo:read")) {
    VAR_1->stub_features.qXfer_siginfo_read = (VAR_3[FUNC_4 ("siginfo:read")] == '+');
   } else if (FUNC_2 (VAR_3, "siginfo:write")) {
    VAR_1->stub_features.qXfer_siginfo_write = (VAR_3[FUNC_4 ("siginfo:write")] == '+');
   } else if (FUNC_2 (VAR_3, "threads:read")) {
    VAR_1->stub_features.qXfer_threads_read = (VAR_3[FUNC_4 ("threads:read")] == '+');
   } else if (FUNC_2 (VAR_3, "traceframe-info:read")) {
    VAR_1->stub_features.qXfer_traceframe_info_read = (VAR_3[FUNC_4 ("traceframe-info:read")] == '+');
   } else if (FUNC_2 (VAR_3, "uib:read")) {
    VAR_1->stub_features.qXfer_uib_read = (VAR_3[FUNC_4 ("uib:read")] == '+');
   } else if (FUNC_2 (VAR_3, "fdpic:read")) {
    VAR_1->stub_features.qXfer_fdpic_read = (VAR_3[FUNC_4 ("fdpic:read")] == '+');
   } else if (FUNC_2 (VAR_3, "osdata:read")) {
    VAR_1->stub_features.qXfer_osdata_read = (VAR_3[FUNC_4 ("osdata:read")] == '+');
   }
  } else if (VAR_2[0] == 'Q') {
   if (FUNC_2 (VAR_2, "Qbtrace")) {
    if (!VAR_2[FUNC_4 ("Qbtrace")]) {
     VAR_2 = FUNC_5 (((void*)0), ";");
     continue;
    }
    char *VAR_4 = VAR_2 + 7;
    if (FUNC_2 (VAR_4, ":off")) {
     VAR_1->stub_features.Qbtrace_off = (VAR_4[4] == '+');
    } else if (FUNC_2 (VAR_4, ":bts")) {
     VAR_1->stub_features.Qbtrace_bts = (VAR_4[4] == '+');
    } else if (FUNC_2 (VAR_4, ":pt")) {
     VAR_1->stub_features.Qbtrace_pt = (VAR_4[3] == '+');
    } else if (FUNC_2 (VAR_4, "-conf:bts:size")) {
     VAR_1->stub_features.Qbtrace_conf_bts_size = (VAR_4[FUNC_4 ("-conf:bts:size")] == '+');
    } else if (FUNC_2 (VAR_4, ":-conf:pt:size")) {
     VAR_1->stub_features.Qbtrace_conf_pt_size = (VAR_4[FUNC_4 ("-conf:pt:size")] == '+');
    }
   } else if (FUNC_2 (VAR_2, "QNonStop")) {
    VAR_1->stub_features.QNonStop = (VAR_2[FUNC_4 ("QNonStop")] == '+');
   } else if (FUNC_2 (VAR_2, "QCatchSyscalls")) {
    VAR_1->stub_features.QCatchSyscalls = (VAR_2[FUNC_4 ("QCatchSyscalls")] == '+');
   } else if (FUNC_2 (VAR_2, "QPassSignals")) {
    VAR_1->stub_features.QPassSignals = (VAR_2[FUNC_4 ("QPassSignals")] == '+');
   } else if (FUNC_2 (VAR_2, "QStartNoAckMode")) {
    VAR_1->stub_features.QStartNoAckMode = (VAR_2[FUNC_4 ("QStartNoAckMode")] == '+');
   } else if (FUNC_2 (VAR_2, "QAgent")) {
    VAR_1->stub_features.QAgent = (VAR_2[FUNC_4 ("QAgent")] == '+');
   } else if (FUNC_2 (VAR_2, "QAllow")) {
    VAR_1->stub_features.QAllow = (VAR_2[FUNC_4 ("QAllow")] == '+');
   } else if (FUNC_2 (VAR_2, "QDisableRandomization")) {
    VAR_1->stub_features.QDisableRandomization = (VAR_2[FUNC_4 ("QDisableRandomization")] == '+');
   } else if (FUNC_2 (VAR_2, "QTBuffer:size")) {
    VAR_1->stub_features.QTBuffer_size = (VAR_2[FUNC_4 ("QTBuffer:size")] == '+');
   } else if (FUNC_2 (VAR_2, "QThreadEvents")) {
    VAR_1->stub_features.QThreadEvents = (VAR_2[FUNC_4 ("QThreadEvents")] == '+');
   } else if (FUNC_2 (VAR_2, "QThreadSuffixSupported")) {
    VAR_1->remote_type = VAR_0;
    VAR_1->stub_features.lldb.QThreadSuffixSupported
     = (VAR_2[FUNC_4 ("QThreadSuffixSupported")] == '+');
   } else if (FUNC_2 (VAR_2, "QListThreadsInStopReply")) {
    VAR_1->remote_type = VAR_0;
    VAR_1->stub_features.lldb.QListThreadsInStopReply
     = (VAR_2[FUNC_4 ("QListThreadsInStopReply")] == '+');
   }
  } else if (FUNC_2 (VAR_2, "multiprocess")) {
   VAR_1->stub_features.multiprocess = (VAR_2[FUNC_4 ("multiprocess")] == '+');
  } else if (FUNC_2 (VAR_2, "qEcho")) {
   VAR_1->remote_type = VAR_0;
   VAR_1->stub_features.lldb.qEcho = (VAR_2[FUNC_4 ("qEcho")] == '+');
  }

  VAR_2 = FUNC_5 (((void*)0), ";");
 }
 return FUNC_3 (VAR_1);
}
