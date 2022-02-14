
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int free; scalar_t__ b; } ;
typedef TYPE_1__ mp_buf ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int ) ;

int FUNC_10(lua_State *VAR_0) {
    int VAR_1 = FUNC_4(VAR_0);
    int VAR_2;
    mp_buf *VAR_3;

    if (VAR_1 == 0)
        return FUNC_0(VAR_0, 0, "MessagePack pack needs input.");

    if (!FUNC_2(VAR_0, VAR_1))
        return FUNC_0(VAR_0, 0, "Too many arguments for MessagePack pack.");

    VAR_3 = FUNC_8(VAR_0);
    for(VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++) {


        FUNC_1(VAR_0, 1, "in function mp_check");
        FUNC_6(VAR_0, VAR_2);

        FUNC_9(VAR_0,VAR_3,0);

        FUNC_5(VAR_0,(char*)VAR_3->b,VAR_3->len);




        VAR_3->free += VAR_3->len;
        VAR_3->len = 0;
    }
    FUNC_7(VAR_0, VAR_3);


    FUNC_3(VAR_0, VAR_1);
    return 1;
}
