
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int type; char* name; int wtime; int rtime; int wbuffer; int write; int read; int opaque; int id; } ;
typedef int lua_State ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,char*) ;

__attribute__((used)) static void
FUNC_4(lua_State *VAR_0, struct socket_info *VAR_1) {
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1->id);
 FUNC_3(VAR_0, -2, "id");
 FUNC_1(VAR_0, VAR_1->opaque);
 FUNC_3(VAR_0, -2, "address");
 switch(VAR_1->type) {
 case 130:
  FUNC_2(VAR_0, "LISTEN");
  FUNC_3(VAR_0, -2, "type");
  FUNC_1(VAR_0, VAR_1->read);
  FUNC_3(VAR_0, -2, "accept");
  FUNC_1(VAR_0, VAR_1->rtime);
  FUNC_3(VAR_0, -2, "rtime");
  if (VAR_1->name[0]) {
   FUNC_2(VAR_0, VAR_1->name);
   FUNC_3(VAR_0, -2, "sock");
  }
  return;
 case 129:
  FUNC_2(VAR_0, "TCP");
  break;
 case 128:
  FUNC_2(VAR_0, "UDP");
  break;
 case 131:
  FUNC_2(VAR_0, "BIND");
  break;
 default:
  FUNC_2(VAR_0, "UNKNOWN");
  FUNC_3(VAR_0, -2, "type");
  return;
 }
 FUNC_3(VAR_0, -2, "type");
 FUNC_1(VAR_0, VAR_1->read);
 FUNC_3(VAR_0, -2, "read");
 FUNC_1(VAR_0, VAR_1->write);
 FUNC_3(VAR_0, -2, "write");
 FUNC_1(VAR_0, VAR_1->wbuffer);
 FUNC_3(VAR_0, -2, "wbuffer");
 FUNC_1(VAR_0, VAR_1->rtime);
 FUNC_3(VAR_0, -2, "rtime");
 FUNC_1(VAR_0, VAR_1->wtime);
 FUNC_3(VAR_0, -2, "wtime");
 if (VAR_1->name[0]) {
  FUNC_2(VAR_0, VAR_1->name);
  FUNC_3(VAR_0, -2, "peer");
 }
}
