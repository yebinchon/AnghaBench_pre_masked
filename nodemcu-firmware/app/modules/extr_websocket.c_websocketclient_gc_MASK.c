
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int connectionState; scalar_t__ reservedData; int extraHeaders; } ;
typedef TYPE_1__ ws_info ;
struct TYPE_5__ {scalar_t__ onConnection; scalar_t__ onReceive; scalar_t__ onClose; scalar_t__ self_ref; } ;
typedef TYPE_2__ ws_data ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_5) {
  FUNC_0("websocketclient_gc\n");

  ws_info *VAR_6 = (ws_info *) FUNC_1(VAR_5, 1, VAR_4);

  VAR_6->extraHeaders = FUNC_8(VAR_6->extraHeaders, 0);

  ws_data *VAR_7 = (ws_data *) VAR_6->reservedData;

  FUNC_2(VAR_5, VAR_3, VAR_7->onConnection);
  FUNC_2(VAR_5, VAR_3, VAR_7->onReceive);

  if (VAR_7->onClose != VAR_2) {
    if (VAR_6->connectionState != 4) {
      FUNC_7(VAR_5, VAR_3, VAR_7->onClose);

      FUNC_6(VAR_5, -100);
      FUNC_4(VAR_5, 1, 0);
    }
    FUNC_2(VAR_5, VAR_3, VAR_7->onClose);
  }

  if (VAR_7->self_ref != VAR_2) {
    FUNC_5(VAR_5, VAR_1, 0);
    FUNC_2(VAR_5, VAR_3, VAR_7->self_ref);
    VAR_7->self_ref = VAR_2;
    FUNC_5(VAR_5, VAR_0, 0);
  }

  FUNC_0("freeing lua data\n");
  FUNC_3(VAR_5, VAR_7);
  FUNC_0("done freeing lua data\n");

  return 0;
}
