
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* extraHeaders; scalar_t__ reservedData; } ;
typedef TYPE_1__ ws_info ;
typedef int ws_data ;
typedef int lua_State ;
struct TYPE_6__ {int * value; void* key; } ;
typedef TYPE_2__ header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_2) {
  FUNC_0("websocketclient_config is called.\n");

  ws_info *VAR_3 = (ws_info *) FUNC_2(VAR_2, 1, VAR_1);

  ws_data *VAR_4 = (ws_data *) VAR_3->reservedData;

  FUNC_1(VAR_2, 2, VAR_0);
  FUNC_3(VAR_2, 2, "headers");
  if(FUNC_4(VAR_2, -1)) {

    FUNC_7(VAR_2);
    int VAR_5 = 0;
    while(FUNC_5(VAR_2, -2)) {
      VAR_5++;
      FUNC_6(VAR_2, 1);
    }

    VAR_3->extraHeaders = FUNC_9(VAR_3->extraHeaders, VAR_5);
    if(VAR_3->extraHeaders) {
      header_t *VAR_6 = VAR_3->extraHeaders;

      FUNC_7(VAR_2);
      while(FUNC_5(VAR_2, -2)) {
        VAR_6->key = FUNC_10(FUNC_8(VAR_2, -2));
        VAR_6->value = FUNC_10(FUNC_8(VAR_2, -1));
        VAR_6++;
        FUNC_6(VAR_2, 1);
      }

      VAR_6->key = VAR_6->value = ((void*)0);
    }
  }
  FUNC_6(VAR_2, 1);

  return 0;
}
