
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * reservedData; } ;
typedef TYPE_1__ ws_info ;
struct TYPE_5__ {scalar_t__ onClose; scalar_t__ self_ref; } ;
typedef TYPE_2__ ws_data ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(ws_info *VAR_4, int VAR_5) {
  FUNC_0("websocketclient_onCloseCallback\n");

  lua_State *VAR_6 = FUNC_5();

  if (VAR_4 == ((void*)0) || VAR_4->reservedData == ((void*)0)) {
    FUNC_1(VAR_6, "Client websocket is nil.\n");
    return;
  }
  ws_data *VAR_7 = (ws_data *) VAR_4->reservedData;

  if (VAR_7->onClose != VAR_2) {
    FUNC_7(VAR_6, VAR_3, VAR_7->onClose);
    FUNC_7(VAR_6, VAR_3, VAR_7->self_ref);
    FUNC_6(VAR_6, VAR_5);
    FUNC_3(VAR_6, 2, 0);
  }


  FUNC_4(VAR_6, VAR_1, 0);
  FUNC_2(VAR_6, VAR_3, VAR_7->self_ref);
  VAR_7->self_ref = VAR_2;
  FUNC_4(VAR_6, VAR_0, 0);
}
