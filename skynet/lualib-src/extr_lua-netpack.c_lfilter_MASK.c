
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct skynet_socket_message {char* buffer; int type; int ud; int id; } ;
typedef int lua_State ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 struct skynet_socket_message* FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_4) {
 struct skynet_socket_message *VAR_5 = FUNC_7(VAR_4,2);
 int VAR_6 = FUNC_3(VAR_4,3);
 char * VAR_7 = VAR_5->buffer;
 if (VAR_7 == ((void*)0)) {
  VAR_7 = (char *)(VAR_5+1);
  VAR_6 -= sizeof(*VAR_5);
 } else {
  VAR_6 = -1;
 }

 FUNC_6(VAR_4, 1);

 switch(VAR_5->type) {
 case 130:

  FUNC_0(VAR_6 == -1);
  return FUNC_2(VAR_4, VAR_5->id, (uint8_t *)VAR_7, VAR_5->ud);
 case 131:

  return 1;
 case 132:

  FUNC_1(VAR_4, VAR_5->id);
  FUNC_5(VAR_4, FUNC_8(VAR_0));
  FUNC_4(VAR_4, VAR_5->id);
  return 3;
 case 133:
  FUNC_5(VAR_4, FUNC_8(VAR_2));

  FUNC_4(VAR_4, VAR_5->ud);
  FUNC_9(VAR_4, VAR_7, VAR_6);
  return 4;
 case 129:

  FUNC_1(VAR_4, VAR_5->id);
  FUNC_5(VAR_4, FUNC_8(VAR_1));
  FUNC_4(VAR_4, VAR_5->id);
  FUNC_9(VAR_4, VAR_7, VAR_6);
  return 4;
 case 128:
  FUNC_5(VAR_4, FUNC_8(VAR_3));
  FUNC_4(VAR_4, VAR_5->id);
  FUNC_4(VAR_4, VAR_5->ud);
  return 4;
 default:

  return 1;
 }
}
