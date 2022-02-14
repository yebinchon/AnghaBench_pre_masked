
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf_t ;
typedef int lua_State ;
typedef int json_config_t ;
 int FUNC_0 (int *,int *,int,int *,int) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int,int *) ;
 int FUNC_5 (int *,int *,int *,int,char*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*,int) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_0, json_config_t *VAR_1,
                             int VAR_2, strbuf_t *VAR_3)
{
    int VAR_4;

    switch (FUNC_9(VAR_0, -1)) {
    case 129:
        FUNC_3(VAR_0, VAR_3, -1);
        break;
    case 130:
        FUNC_1(VAR_0, VAR_1, VAR_3, -1);
        break;
    case 133:
        if (FUNC_7(VAR_0, -1))
            FUNC_10(VAR_3, "true", 4);
        else
            FUNC_10(VAR_3, "false", 5);
        break;
    case 128:
        VAR_2++;
        FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
        VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_3);
        if (VAR_4 > 0)
            FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        else
            FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
        break;
    case 131:
        FUNC_10(VAR_3, "null", 4);
        break;
    case 132:
        if (FUNC_8(VAR_0, -1) == ((void*)0)) {
            FUNC_10(VAR_3, "null", 4);
            break;
        }
    default:


        FUNC_5(VAR_0, VAR_1, VAR_3, -1, "type not supported");

    }
}
