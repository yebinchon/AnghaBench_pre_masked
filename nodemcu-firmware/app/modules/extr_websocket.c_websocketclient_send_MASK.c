
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connectionState; scalar_t__ reservedData; } ;
typedef TYPE_1__ ws_info ;
typedef int ws_data ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,int*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,char const*,unsigned short) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1) {
  FUNC_0("websocketclient_send is called.\n");

  ws_info *VAR_2 = (ws_info *) FUNC_3(VAR_1, 1, VAR_0);

  ws_data *VAR_3 = (ws_data *) VAR_2->reservedData;

  if (VAR_2->connectionState != 3) {

    return FUNC_4(VAR_1, "Websocket isn't connected.\n");
  }

  int VAR_4;
  const char *VAR_5 = FUNC_2(VAR_1, 2, &VAR_4);

  int VAR_6 = 1;
  if (FUNC_5(VAR_1) == 3) {
    VAR_6 = FUNC_1(VAR_1, 3);
  }

  FUNC_6(VAR_2, VAR_6, VAR_5, (unsigned short) VAR_4);
  return 0;
}
