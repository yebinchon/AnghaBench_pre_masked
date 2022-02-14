
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_socket_message {scalar_t__ type; scalar_t__ id; scalar_t__ ud; int * buffer; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int) ;
 struct skynet_socket_message* FUNC_4 (int *,int) ;
 char* FUNC_5 (struct skynet_socket_message*,int*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_1) {
 struct skynet_socket_message *VAR_2 = FUNC_4(VAR_1,1);
 int VAR_3 = FUNC_0(VAR_1,2);

 FUNC_1(VAR_1, VAR_2->type);
 FUNC_1(VAR_1, VAR_2->id);
 FUNC_1(VAR_1, VAR_2->ud);
 if (VAR_2->buffer == ((void*)0)) {
  FUNC_3(VAR_1, (char *)(VAR_2+1),VAR_3 - sizeof(*VAR_2));
 } else {
  FUNC_2(VAR_1, VAR_2->buffer);
 }
 if (VAR_2->type == VAR_0) {
  int VAR_4 = 0;
  const char * VAR_5 = FUNC_5(VAR_2, &VAR_4);
  if (VAR_5) {
   FUNC_3(VAR_1, VAR_5, VAR_4);
   return 5;
  }
 }
 return 4;
}
