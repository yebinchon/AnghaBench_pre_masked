
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connectionState; scalar_t__ reservedData; } ;
typedef TYPE_1__ ws_info ;
struct TYPE_5__ {int self_ref; } ;
typedef TYPE_2__ ws_data ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_2) {
  FUNC_0("websocketclient_connect is called.\n");

  ws_info *VAR_3 = (ws_info *) FUNC_2(VAR_2, 1, VAR_1);

  ws_data *VAR_4 = (ws_data *) VAR_3->reservedData;

  if (VAR_3->connectionState != 0 && VAR_3->connectionState != 4) {
    return FUNC_3(VAR_2, "Websocket already connecting or connected.\n");
  }
  VAR_3->connectionState = 0;

  FUNC_5(VAR_2, 1);
  VAR_4->self_ref = FUNC_4(VAR_2, VAR_0);

  const char *VAR_5 = FUNC_1(VAR_2, 2);
  FUNC_6(VAR_3, VAR_5);

  return 0;
}
