
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* data; TYPE_1__* registers; } ;
typedef TYPE_2__ libgdbr_t ;
typedef scalar_t__ (* gdbr_server_cmd_cb ) (TYPE_2__*,void*,char*,int *,int ) ;
struct TYPE_8__ {char* name; } ;


 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int *,int) ;

__attribute__((used)) static int FUNC_9(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 if (FUNC_3 (VAR_0) < 0) {
  return -1;
 }
 if (!FUNC_2 (VAR_0->data[1]) || !(VAR_3 = FUNC_6 (VAR_0->data, '='))) {
  return FUNC_4 (VAR_0, "E01");
 }
 VAR_3++;
 if (!FUNC_2 (*VAR_3)) {
  return FUNC_4 (VAR_0, "E01");
 }
 VAR_5 = FUNC_8 (VAR_0->data + 1, ((void*)0), 16);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (!*VAR_0->registers[VAR_7].name) {
   return FUNC_4 (VAR_0, "E01");
  }
 }
 VAR_6 = FUNC_7 (VAR_0->registers[VAR_5].name) + FUNC_7 (VAR_3) + 10;
 if (!(VAR_4 = FUNC_0 (VAR_6, sizeof (char)))) {
  return FUNC_4 (VAR_0, "E01");
 }
 FUNC_5 (VAR_4, VAR_6 - 1, "dr %s=0x%s", VAR_0->registers[VAR_5].name, VAR_3);
 if (VAR_1 (VAR_0, VAR_2, VAR_4, ((void*)0), 0) < 0) {
  FUNC_1 (VAR_4);
  FUNC_4 (VAR_0, "E01");
  return -1;
 }
 FUNC_1 (VAR_4);
 return FUNC_4 (VAR_0, "OK");
}
