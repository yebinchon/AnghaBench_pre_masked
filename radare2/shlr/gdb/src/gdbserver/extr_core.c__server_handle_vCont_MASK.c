
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; size_t data_len; } ;
typedef TYPE_1__ libgdbr_t ;
typedef int (* gdbr_server_cmd_cb ) (TYPE_1__*,void*,char*,int *,int ) ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char *VAR_3 = ((void*)0);
 if (FUNC_1 (VAR_0) < 0) {
  return -1;
 }
 VAR_0->data[VAR_0->data_len] = '\0';
 if (VAR_0->data[5] == '?') {

  return FUNC_2 (VAR_0, "vCont;c;s");
 }
 if (!(VAR_3 = FUNC_3 (VAR_0->data, ";"))) {
  return FUNC_2 (VAR_0, "E01");
 }
 while ((VAR_3 = FUNC_3 (((void*)0), ";"))) {
  FUNC_0 ("action: %s\n", VAR_3);
  switch (VAR_3[0]) {
  case 's':

   if (VAR_1 (VAR_0, VAR_2, "ds", ((void*)0), 0) < 0) {
    FUNC_2 (VAR_0, "E01");
    return -1;
   }
   return FUNC_2 (VAR_0, "OK");
  case 'c':

   if (VAR_1 (VAR_0, VAR_2, "dc", ((void*)0), 0) < 0) {
    FUNC_2 (VAR_0, "E01");
    return -1;
   }
   return FUNC_2 (VAR_0, "OK");
  default:

   return FUNC_2 (VAR_0, "E01");
  }
 }
 return -1;
}
