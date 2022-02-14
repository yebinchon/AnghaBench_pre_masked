
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char* sds ;
struct TYPE_7__ {char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int lua_State ;
typedef int dictEntry ;
typedef int client ;
struct TYPE_8__ {int lua_scripts_mem; int * lua_client; int lua_scripts; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int * FUNC_2 (int ,char*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,char*,int,char*) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,char*,int) ;
 char* FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (char*,char*,int) ;

sds FUNC_19(client *VAR_2, lua_State *VAR_3, robj *VAR_4) {
    char VAR_5[43];
    dictEntry *VAR_6;

    VAR_5[0] = 'f';
    VAR_5[1] = '_';
    FUNC_18(VAR_5+2,VAR_4->ptr,FUNC_15(VAR_4->ptr));

    sds VAR_7 = FUNC_16(VAR_5+2,40);
    if ((VAR_6 = FUNC_2(VAR_1.lua_scripts,VAR_7)) != ((void*)0)) {
        FUNC_14(VAR_7);
        return FUNC_3(VAR_6);
    }

    sds VAR_8 = FUNC_13();
    VAR_8 = FUNC_11(VAR_8,"function ");
    VAR_8 = FUNC_12(VAR_8,VAR_5,42);
    VAR_8 = FUNC_12(VAR_8,"() ",3);
    VAR_8 = FUNC_12(VAR_8,VAR_4->ptr,FUNC_15(VAR_4->ptr));
    VAR_8 = FUNC_12(VAR_8,"\nend",4);

    if (FUNC_6(VAR_3,VAR_8,FUNC_15(VAR_8),"@user_script")) {
        if (VAR_2 != ((void*)0)) {
            FUNC_0(VAR_2,
                "Error compiling script (new function): %s\n",
                FUNC_9(VAR_3,-1));
        }
        FUNC_8(VAR_3,1);
        FUNC_14(VAR_7);
        FUNC_14(VAR_8);
        return ((void*)0);
    }
    FUNC_14(VAR_8);

    if (FUNC_7(VAR_3,0,0,0)) {
        if (VAR_2 != ((void*)0)) {
            FUNC_0(VAR_2,"Error running script (new function): %s\n",
                FUNC_9(VAR_3,-1));
        }
        FUNC_8(VAR_3,1);
        FUNC_14(VAR_7);
        return ((void*)0);
    }




    int VAR_9 = FUNC_1(VAR_1.lua_scripts,VAR_7,VAR_4);
    FUNC_17(VAR_2 ? VAR_2 : VAR_1.lua_client,((void*)0),VAR_9 == VAR_0);
    VAR_1.lua_scripts_mem += FUNC_10(VAR_7) + FUNC_4(VAR_4);
    FUNC_5(VAR_4);
    return VAR_7;
}
