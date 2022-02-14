
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data_len; int * data; } ;
typedef TYPE_1__ libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (TYPE_1__*,void*,char*,int *,int ) ;
typedef int cmd ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int FUNC_6(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {


 char VAR_3[32];
 int VAR_4;
 if (FUNC_1 (VAR_0) < 0) {
  return -1;
 }
 if (VAR_0->data_len <= 2 || FUNC_0 (VAR_0->data[2])) {
  return FUNC_2 (VAR_0, "E01");
 }

 if (VAR_0->data[2] == '0' || !FUNC_5 (VAR_0->data + 2, "-1", 2)) {
  return FUNC_2 (VAR_0, "OK");
 }
 FUNC_4 (VAR_0->data + 2, "%x", &VAR_4);
 FUNC_3 (VAR_3, sizeof (VAR_3) - 1, "dpt=%d", VAR_4);

 if (VAR_1 (VAR_0, VAR_2, VAR_3, ((void*)0), 0) < 0) {
  FUNC_2 (VAR_0, "E01");
  return -1;
 }
 return FUNC_2 (VAR_0, "OK");
}
