
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int message ;
struct TYPE_7__ {int data_len; } ;
typedef TYPE_1__ libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (TYPE_1__*,void*,char*,char*,int) ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_2(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char VAR_3[64];
 if (FUNC_0 (VAR_0) < 0) {
  return -1;
 }
 if (VAR_0->data_len > 1) {

  return FUNC_1 (VAR_0, "E01");
 }
 if (VAR_1 (VAR_0, VAR_2, "dc", ((void*)0), 0) < 0) {
  FUNC_1 (VAR_0, "E01");
  return -1;
 }
 if (VAR_1 (VAR_0, VAR_2, "?", VAR_3, sizeof (VAR_3)) < 0) {
  FUNC_1 (VAR_0, "");
  return -1;
 }
 return FUNC_1 (VAR_0, VAR_3);
}
