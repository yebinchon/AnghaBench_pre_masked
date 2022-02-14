
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* reservedData; int * onFailure; int * onReceive; int * onConnection; int * extraHeaders; scalar_t__ connectionState; } ;
typedef TYPE_1__ ws_info ;
struct TYPE_4__ {void* self_ref; void* onClose; void* onReceive; void* onConnection; } ;
typedef TYPE_2__ ws_data ;
typedef int lua_State ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_5) {
  FUNC_0("websocket_createClient\n");


  ws_data *VAR_6 = (ws_data *) FUNC_2(VAR_5, sizeof(ws_data));
  VAR_6->onConnection = VAR_0;
  VAR_6->onReceive = VAR_0;
  VAR_6->onClose = VAR_0;
  VAR_6->self_ref = VAR_0;

  ws_info *VAR_7 = (ws_info *) FUNC_3(VAR_5, sizeof(ws_info));
  VAR_7->connectionState = 0;
  VAR_7->extraHeaders = ((void*)0);
  VAR_7->onConnection = &VAR_3;
  VAR_7->onReceive = &VAR_4;
  VAR_7->onFailure = &VAR_2;
  VAR_7->reservedData = VAR_6;


  FUNC_1(VAR_5, VAR_1);
  FUNC_4(VAR_5, -2);

  return 1;
}
