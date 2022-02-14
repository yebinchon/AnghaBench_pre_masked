
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int message ;
struct TYPE_9__ {TYPE_1__* registers; int * data; } ;
typedef TYPE_2__ libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (TYPE_2__*,void*,char*,char*,int) ;
typedef int cmd ;
struct TYPE_8__ {char* name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char VAR_3[128] = { 0 }, VAR_4[128] = { 0 };
 int VAR_5, VAR_6;
 if (FUNC_1 (VAR_0) < 0) {
  return -1;
 }
 if (!FUNC_0 (VAR_0->data[1])) {
  return FUNC_2 (VAR_0, "E01");
 }
 VAR_5 = FUNC_4 (VAR_0->data + 1, ((void*)0), 16);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!*VAR_0->registers[VAR_6].name) {
   return FUNC_2 (VAR_0, "E01");
  }
 }
 if (FUNC_3 (VAR_4, sizeof (VAR_4) - 1, "dr %s", VAR_0->registers[VAR_5].name) < 0) {
  FUNC_2 (VAR_0, "E01");
  return -1;
 }
 if (VAR_1 (VAR_0, VAR_2, VAR_4, VAR_3, sizeof (VAR_3)) < 0) {
  FUNC_2 (VAR_0, "E01");
  return -1;
 }
 return FUNC_2 (VAR_0, VAR_3);
}
