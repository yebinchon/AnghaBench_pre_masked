
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libgdbr_t ;
typedef int (* gdbr_server_cmd_cb ) (int *,void*,char*,char*,int) ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char *VAR_3;

 int VAR_4 = 4096;
 int VAR_5;
 if (FUNC_3 (VAR_0) < 0) {
  return -1;
 }
 if (!(VAR_3 = FUNC_1 (VAR_4))) {
  FUNC_4 (VAR_0, "E01");
  return -1;
 }
 FUNC_2 (VAR_3, 0, VAR_4);
 if ((VAR_4 = VAR_1 (VAR_0, VAR_2, "dr", VAR_3, VAR_4)) < 0) {
  FUNC_0 (VAR_3);
  FUNC_4 (VAR_0, "E01");
  return -1;
 }
 VAR_5 = FUNC_4 (VAR_0, VAR_3);
 FUNC_0 (VAR_3);
 return VAR_5;
}
