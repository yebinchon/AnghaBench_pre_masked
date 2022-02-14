
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_sendbuffer {int id; } ;
struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int,struct socket_sendbuffer*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 struct skynet_context* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct skynet_context*,char const*,struct socket_sendbuffer*) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_4(VAR_0, FUNC_5(1));
 int VAR_2 = FUNC_1(VAR_0, 1);
 const char * VAR_3 = FUNC_2(VAR_0, 2);
 struct socket_sendbuffer VAR_4;
 VAR_4.id = VAR_2;
 FUNC_0(VAR_0, 3, &VAR_4);
 int VAR_5 = FUNC_6(VAR_1, VAR_3, &VAR_4);

 FUNC_3(VAR_0, !VAR_5);

 return 1;
}
