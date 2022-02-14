
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; int pid; } ;
typedef TYPE_1__ libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (TYPE_1__*,void*,char*,char*,size_t) ;
typedef int cmd ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;

__attribute__((used)) static int FUNC_8(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1,
      void *VAR_2) {
 char *VAR_3, *VAR_4, VAR_5[64] = { 0 };
 size_t VAR_6 = 512;
 int VAR_7;
 if (FUNC_2 (VAR_0) < 0) {
  return -1;
 }
 VAR_4 = VAR_0->data + FUNC_6 ("qXfer:exec-file:read:");
 if (*VAR_4 != ':') {
  int VAR_8;
  if ((VAR_8 = (int) FUNC_7 (VAR_4, ((void*)0), 16)) <= 0 || VAR_8 != VAR_0->pid) {
   return FUNC_3 (VAR_0, "E00");
  }
 }
 if (!(VAR_4 = FUNC_5 (VAR_4, ':'))) {
  return FUNC_3 (VAR_0, "E00");
 }
 VAR_4++;
 FUNC_4 (VAR_5, sizeof (VAR_5) - 1, "if%s", VAR_4);
 if (!(VAR_3 = FUNC_1 (VAR_6))) {
  FUNC_3 (VAR_0, "E01");
  return -1;
 }
 if (VAR_1 (VAR_0, VAR_2, VAR_5, VAR_3, VAR_6) < 0) {
  FUNC_0 (VAR_3);
  return FUNC_3 (VAR_0, "E01");
 }
 VAR_7 = FUNC_3 (VAR_0, VAR_3);
 FUNC_0 (VAR_3);
 return VAR_7;
}
