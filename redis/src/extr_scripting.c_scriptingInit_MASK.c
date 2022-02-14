
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int * lua; TYPE_2__* lua_client; scalar_t__ lua_scripts_mem; int lua_scripts; scalar_t__ lua_timedout; int * lua_cur_script; int * lua_caller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int *) ;
 int VAR_18 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (int *) ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int FUNC_16 (char*) ;

void FUNC_17(int VAR_23) {
    lua_State *VAR_24 = FUNC_8();

    if (VAR_23) {
        VAR_21.lua_client = ((void*)0);
        VAR_21.lua_caller = ((void*)0);
        VAR_21.lua_cur_script = ((void*)0);
        VAR_21.lua_timedout = 0;
        FUNC_2();
    }

    FUNC_4(VAR_24);
    FUNC_5(VAR_24);




    VAR_21.lua_scripts = FUNC_1(&VAR_22,((void*)0));
    VAR_21.lua_scripts_mem = 0;


    FUNC_7(VAR_24);


    FUNC_12(VAR_24,"call");
    FUNC_10(VAR_24,VAR_10);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24,"pcall");
    FUNC_10(VAR_24,VAR_13);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24,"log");
    FUNC_10(VAR_24,VAR_8);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24,"setresp");
    FUNC_10(VAR_24,VAR_18);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"LOG_DEBUG");
    FUNC_11(VAR_24,VAR_1);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"LOG_VERBOSE");
    FUNC_11(VAR_24,VAR_3);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"LOG_NOTICE");
    FUNC_11(VAR_24,VAR_2);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"LOG_WARNING");
    FUNC_11(VAR_24,VAR_4);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24, "sha1hex");
    FUNC_10(VAR_24, VAR_16);
    FUNC_14(VAR_24, -3);


    FUNC_12(VAR_24, "error_reply");
    FUNC_10(VAR_24, VAR_12);
    FUNC_14(VAR_24, -3);
    FUNC_12(VAR_24, "status_reply");
    FUNC_10(VAR_24, VAR_17);
    FUNC_14(VAR_24, -3);


    FUNC_12(VAR_24, "replicate_commands");
    FUNC_10(VAR_24, VAR_14);
    FUNC_14(VAR_24, -3);


    FUNC_12(VAR_24,"set_repl");
    FUNC_10(VAR_24,VAR_15);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"REPL_NONE");
    FUNC_11(VAR_24,VAR_6);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"REPL_AOF");
    FUNC_11(VAR_24,VAR_5);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"REPL_SLAVE");
    FUNC_11(VAR_24,VAR_7);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"REPL_REPLICA");
    FUNC_11(VAR_24,VAR_7);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"REPL_ALL");
    FUNC_11(VAR_24,VAR_5|VAR_7);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24,"breakpoint");
    FUNC_10(VAR_24,VAR_9);
    FUNC_14(VAR_24,-3);


    FUNC_12(VAR_24,"debug");
    FUNC_10(VAR_24,VAR_11);
    FUNC_14(VAR_24,-3);


    FUNC_13(VAR_24,"redis");


    FUNC_6(VAR_24,"math");

    FUNC_12(VAR_24,"random");
    FUNC_10(VAR_24,VAR_19);
    FUNC_14(VAR_24,-3);

    FUNC_12(VAR_24,"randomseed");
    FUNC_10(VAR_24,VAR_20);
    FUNC_14(VAR_24,-3);

    FUNC_13(VAR_24,"math");



    {
        char *VAR_25 = "function __redis__compare_helper(a,b)\n"
                                "  if a == false then a = '' end\n"
                                "  if b == false then b = '' end\n"
                                "  return a<b\n"
                                "end\n";
        FUNC_3(VAR_24,VAR_25,FUNC_16(VAR_25),"@cmp_func_def");
        FUNC_9(VAR_24,0,0,0);
    }





    {
        char *VAR_26 = "local dbg = debug\n"
                                "function __redis__err__handler(err)\n"
                                "  local i = dbg.getinfo(2,'nSl')\n"
                                "  if i and i.what == 'C' then\n"
                                "    i = dbg.getinfo(3,'nSl')\n"
                                "  end\n"
                                "  if i then\n"
                                "    return i.source .. ':' .. i.currentline .. ': ' .. err\n"
                                "  else\n"
                                "    return err\n"
                                "  end\n"
                                "end\n";
        FUNC_3(VAR_24,VAR_26,FUNC_16(VAR_26),"@err_handler_def");
        FUNC_9(VAR_24,0,0,0);
    }





    if (VAR_21.lua_client == ((void*)0)) {
        VAR_21.lua_client = FUNC_0(((void*)0));
        VAR_21.lua_client->flags |= VAR_0;
    }




    FUNC_15(VAR_24);

    VAR_21.lua = VAR_24;
}
