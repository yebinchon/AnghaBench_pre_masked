
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t pkt_sz; } ;
struct TYPE_9__ {TYPE_1__ stub_features; } ;
typedef TYPE_2__ libgdbr_t ;
typedef int (* gdbr_server_cmd_cb ) (TYPE_2__*,void*,char*,char*,size_t) ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_4(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 char *VAR_3;
 int VAR_4;
 size_t VAR_5 = VAR_0->stub_features.pkt_sz;
 if ((VAR_4 = FUNC_2 (VAR_0)) < 0) {
  return -1;
 }
 if (!(VAR_3 = FUNC_1 (VAR_5))) {
  return -1;
 }
 if ((VAR_4 = VAR_1 (VAR_0, VAR_2, "dpt", VAR_3, VAR_5)) < 0) {
  FUNC_0 (VAR_3);
  return -1;
 }
 VAR_4 = FUNC_3 (VAR_0, VAR_3);
 FUNC_0 (VAR_3);
 return VAR_4;
}
