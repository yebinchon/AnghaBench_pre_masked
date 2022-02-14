
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * reservedData; } ;
typedef TYPE_1__ ws_info ;
struct TYPE_5__ {scalar_t__ onConnection; scalar_t__ self_ref; } ;
typedef TYPE_2__ ws_data ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(ws_info *VAR_2) {
  FUNC_0("websocketclient_onConnectionCallback\n");

  lua_State *VAR_3 = FUNC_3();

  if (VAR_2 == ((void*)0) || VAR_2->reservedData == ((void*)0)) {
    FUNC_1(VAR_3, "Client websocket is nil.\n");
    return;
  }
  ws_data *VAR_4 = (ws_data *) VAR_2->reservedData;

  if (VAR_4->onConnection != VAR_0) {
    FUNC_4(VAR_3, VAR_1, VAR_4->onConnection);
    FUNC_4(VAR_3, VAR_1, VAR_4->self_ref);
    FUNC_2(VAR_3, 1, 0);
  }
}
