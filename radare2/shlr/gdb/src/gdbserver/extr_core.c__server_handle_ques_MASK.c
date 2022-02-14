
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int message ;
typedef int libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (int *,void*,char*,char*,int) ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char VAR_3[64] = { 0 };
 if (FUNC_0 (VAR_0) < 0) {
  return -1;
 }
 if (VAR_1 (VAR_0, VAR_2, "?", VAR_3, sizeof (VAR_3)) < 0) {
  FUNC_1 (VAR_0, "");
  return -1;
 }
 return FUNC_1 (VAR_0, VAR_3);
}
