
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* member_0; int (* member_1 ) (int *) ;} ;
typedef TYPE_1__ luaL_Reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int,char*) ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_2)
{
    luaL_Reg VAR_3[] = {
        { "encode", FUNC_10 },
        { "decode", FUNC_9 },
        { "encode_sparse_array", FUNC_7 },
        { "encode_max_depth", FUNC_5 },
        { "decode_max_depth", FUNC_2 },
        { "encode_number_precision", FUNC_6 },
        { "encode_keep_buffer", FUNC_4 },
        { "encode_invalid_numbers", FUNC_3 },
        { "decode_invalid_numbers", FUNC_1 },
        { "new", FUNC_16 },
        { ((void*)0), ((void*)0) }
    };


    FUNC_0();


    FUNC_12(VAR_2);


    FUNC_8(VAR_2);
    FUNC_11(VAR_2, VAR_3, 1);


    FUNC_13(VAR_2, ((void*)0));
    FUNC_15(VAR_2, -2, "null");


    FUNC_14(VAR_2, VAR_0);
    FUNC_15(VAR_2, -2, "_NAME");
    FUNC_14(VAR_2, VAR_1);
    FUNC_15(VAR_2, -2, "_VERSION");

    return 1;
}
