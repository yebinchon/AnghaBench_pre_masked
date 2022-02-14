
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_11__ ;


typedef int robj ;
typedef int lua_State ;
struct TYPE_26__ {int argc; TYPE_11__** argv; TYPE_1__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {int resp; } ;
struct TYPE_28__ {long long dirty; int lua_repl; char* lua_cur_script; scalar_t__ lua_time_limit; int lua_scripts; scalar_t__ lua_replicate_commands; int execCommand; scalar_t__ lua_multi_emitted; TYPE_2__* lua_caller; scalar_t__ master; scalar_t__ masterhost; scalar_t__ lua_timedout; int * lua; scalar_t__ lua_kill; int lua_time_start; TYPE_7__* lua_client; scalar_t__ lua_always_replicate_commands; scalar_t__ lua_write_dirty; scalar_t__ lua_random_dirty; } ;
struct TYPE_27__ {int noscripterr; } ;
struct TYPE_25__ {int id; } ;
struct TYPE_24__ {scalar_t__ active; } ;
struct TYPE_23__ {char* ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_3 (int ,int ,int **,int,int) ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_11__*,long long*,int *) ;
 TYPE_15__ VAR_7 ;
 int * FUNC_9 (TYPE_2__*,int *,TYPE_11__*) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (int *,char*,TYPE_11__**,int) ;
 int FUNC_12 (int *,int ,long) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ,int,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int *,int,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*) ;
 int * FUNC_25 (int *) ;
 int FUNC_26 (TYPE_2__*,int,int *) ;
 int FUNC_27 (TYPE_2__*,int,int *,int *,int *) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (TYPE_7__*,int ) ;
 TYPE_6__ VAR_10 ;
 int FUNC_30 (int) ;
 int FUNC_31 (TYPE_2__*,int *,int ) ;
 int FUNC_32 (char*,char*,int ) ;
 TYPE_4__ VAR_11 ;
 int FUNC_33 (TYPE_2__*) ;

void FUNC_34(client *VAR_12, int VAR_13) {
    lua_State *VAR_14 = VAR_10.lua;
    char VAR_15[43];
    long long VAR_16;
    long long VAR_17 = VAR_10.dirty;
    int VAR_18 = 0, VAR_19;



    FUNC_22(0);
    VAR_10.lua_random_dirty = 0;
    VAR_10.lua_write_dirty = 0;
    VAR_10.lua_replicate_commands = VAR_10.lua_always_replicate_commands;
    VAR_10.lua_multi_emitted = 0;
    VAR_10.lua_repl = VAR_5|VAR_6;


    if (FUNC_8(VAR_12,VAR_12->argv[2],&VAR_16,((void*)0)) != VAR_0)
        return;
    if (VAR_16 > (VAR_12->argc - 3)) {
        FUNC_1(VAR_12,"Number of keys can't be greater than number of args");
        return;
    } else if (VAR_16 < 0) {
        FUNC_1(VAR_12,"Number of keys can't be negative");
        return;
    }



    VAR_15[0] = 'f';
    VAR_15[1] = '_';
    if (!VAR_13) {

        FUNC_32(VAR_15+2,VAR_12->argv[1]->ptr,FUNC_28(VAR_12->argv[1]->ptr));
    } else {

        int VAR_20;
        char *VAR_21 = VAR_12->argv[1]->ptr;




        for (VAR_20 = 0; VAR_20 < 40; VAR_20++)
            VAR_15[VAR_20+2] = (VAR_21[VAR_20] >= 'A' && VAR_21[VAR_20] <= 'Z') ?
                VAR_21[VAR_20]+('a'-'A') : VAR_21[VAR_20];
        VAR_15[42] = '\0';
    }


    FUNC_13(VAR_14, "__redis__err__handler");


    FUNC_13(VAR_14, VAR_15);
    if (FUNC_14(VAR_14,-1)) {
        FUNC_16(VAR_14,1);



        if (VAR_13) {
            FUNC_16(VAR_14,1);
            FUNC_0(VAR_12, VAR_11.noscripterr);
            return;
        }
        if (FUNC_9(VAR_12,VAR_14,VAR_12->argv[1]) == ((void*)0)) {
            FUNC_16(VAR_14,1);


            return;
        }

        FUNC_13(VAR_14, VAR_15);
        FUNC_30(!FUNC_14(VAR_14,-1));
    }



    FUNC_11(VAR_14,"KEYS",VAR_12->argv+3,VAR_16);
    FUNC_11(VAR_14,"ARGV",VAR_12->argv+3+VAR_16,VAR_12->argc-3-VAR_16);


    FUNC_29(VAR_10.lua_client,VAR_12->db->id);
    VAR_10.lua_client->resp = 2;
    VAR_10.lua_caller = VAR_12;
    VAR_10.lua_cur_script = VAR_15 + 2;
    VAR_10.lua_time_start = FUNC_19();
    VAR_10.lua_kill = 0;
    if (VAR_10.lua_time_limit > 0 && VAR_7.active == 0) {
        FUNC_17(VAR_14,VAR_9,VAR_3,100000);
        VAR_18 = 1;
    } else if (VAR_7.active) {
        FUNC_17(VAR_10.lua,VAR_8,VAR_4|VAR_3,100000);
        VAR_18 = 1;
    }




    VAR_19 = FUNC_15(VAR_14,0,1,-2);


    if (VAR_18) FUNC_17(VAR_14,((void*)0),0,0);
    if (VAR_10.lua_timedout) {
        VAR_10.lua_timedout = 0;


        FUNC_33(VAR_12);
        if (VAR_10.masterhost && VAR_10.master)
            FUNC_21(VAR_10.master);
    }
    VAR_10.lua_caller = ((void*)0);
    VAR_10.lua_cur_script = ((void*)0);
    {
        static long VAR_22 = 0;

        VAR_22++;
        if (VAR_22 == 50) {
            FUNC_12(VAR_14,VAR_1,50);
            VAR_22 = 0;
        }
    }

    if (VAR_19) {
        FUNC_2(VAR_12,"Error running script (call to %s): %s\n",
            VAR_15, FUNC_18(VAR_14,-1));
        FUNC_16(VAR_14,2);
    } else {


        FUNC_10(VAR_12,VAR_14);
        FUNC_16(VAR_14,1);
    }



    if (VAR_10.lua_replicate_commands) {
        FUNC_20(VAR_12);
        if (VAR_10.lua_multi_emitted) {
            robj *VAR_23[1];
            VAR_23[0] = FUNC_4("EXEC",4);
            FUNC_3(VAR_10.execCommand,VAR_12->db->id,VAR_23,1,
                VAR_5|VAR_6);
            FUNC_5(VAR_23[0]);
        }
    }
    if (VAR_13 && !VAR_10.lua_replicate_commands) {
        if (!FUNC_24(VAR_12->argv[1]->ptr)) {



            robj *VAR_24 = FUNC_6(VAR_10.lua_scripts,VAR_12->argv[1]->ptr);

            FUNC_23(VAR_12->argv[1]->ptr);
            FUNC_31(VAR_12,((void*)0),VAR_24 != ((void*)0));





            if (VAR_10.dirty == VAR_17) {
                FUNC_27(VAR_12,3,
                    FUNC_25(FUNC_4("SCRIPT",6)),
                    FUNC_25(FUNC_4("LOAD",4)),
                    VAR_24);
            } else {
                FUNC_26(VAR_12,0,
                    FUNC_25(FUNC_4("EVAL",4)));
                FUNC_26(VAR_12,1,VAR_24);
            }
            FUNC_7(VAR_12,VAR_6|VAR_5);
        }
    }
}
