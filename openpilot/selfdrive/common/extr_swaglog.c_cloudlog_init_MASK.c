
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inited; int ctx_j; void* print_level; int sock; int zctx; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9() {
  if (VAR_5.inited) return;
  VAR_5.ctx_j = FUNC_4();
  VAR_5.zctx = FUNC_7();
  VAR_5.sock = FUNC_8(VAR_5.zctx, VAR_4);
  FUNC_6(VAR_5.sock, "ipc:///tmp/logmessage");

  VAR_5.print_level = VAR_2;
  const char* VAR_6 = FUNC_1("LOGPRINT");
  if (VAR_6) {
    if (FUNC_5(VAR_6, "debug") == 0) {
      VAR_5.print_level = VAR_0;
    } else if (FUNC_5(VAR_6, "info") == 0) {
      VAR_5.print_level = VAR_1;
    } else if (FUNC_5(VAR_6, "warning") == 0) {
      VAR_5.print_level = VAR_2;
    }
  }


  char* VAR_7 = FUNC_1("DONGLE_ID");
  if (VAR_7) {
    FUNC_0("dongle_id", VAR_7);
  }
  FUNC_0("version", VAR_3);
  bool VAR_8 = !FUNC_1("CLEAN");
  FUNC_2(VAR_5.ctx_j, "dirty", FUNC_3(VAR_8));

  VAR_5.inited = 1;
}
