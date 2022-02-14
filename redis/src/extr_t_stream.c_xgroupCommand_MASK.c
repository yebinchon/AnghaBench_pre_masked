
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_24__ ;
typedef struct TYPE_41__ TYPE_21__ ;
typedef struct TYPE_40__ TYPE_20__ ;
typedef struct TYPE_39__ TYPE_1__ ;


struct TYPE_39__ {scalar_t__ seq; scalar_t__ ms; } ;
typedef TYPE_1__ streamID ;
struct TYPE_43__ {TYPE_1__ last_id; } ;
typedef TYPE_2__ streamCG ;
struct TYPE_44__ {int cgroups; TYPE_1__ last_id; } ;
typedef TYPE_3__ stream ;
typedef char* sds ;
struct TYPE_45__ {TYPE_3__* ptr; } ;
typedef TYPE_4__ robj ;
struct TYPE_46__ {int argc; TYPE_24__* db; TYPE_8__** argv; } ;
typedef TYPE_5__ client ;
struct TYPE_47__ {char* ptr; } ;
struct TYPE_42__ {int id; } ;
struct TYPE_41__ {int dirty; } ;
struct TYPE_40__ {int czero; int cone; int ok; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,char*,char*,char*) ;
 int FUNC_3 (TYPE_5__*,char const**) ;
 int FUNC_4 (TYPE_5__*,long long) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_8 () ;
 int FUNC_9 (TYPE_24__*,TYPE_8__*,TYPE_4__*) ;
 TYPE_4__* FUNC_10 (TYPE_24__*,TYPE_8__*) ;
 int FUNC_11 (int ,char*,TYPE_8__*,int ) ;
 int FUNC_12 (int ,unsigned char*,int ,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 TYPE_21__ VAR_3 ;
 int FUNC_15 (int) ;
 TYPE_20__ VAR_4 ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*) ;
 TYPE_2__* FUNC_18 (TYPE_3__*,char*,int ,TYPE_1__*) ;
 long long FUNC_19 (TYPE_2__*,char*) ;
 int FUNC_20 (TYPE_2__*) ;
 TYPE_2__* FUNC_21 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_22 (TYPE_5__*,TYPE_8__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_23 (TYPE_5__*,TYPE_8__*,TYPE_1__*,int ) ;

void FUNC_24(client *VAR_5) {
    const char *VAR_6[] = {
"CREATE      <key> <groupname> <id or $> [opt] -- Create a new consumer group.",
"            option MKSTREAM: create the empty stream if it does not exist.",
"SETID       <key> <groupname> <id or $>  -- Set the current group ID.",
"DESTROY     <key> <groupname>            -- Remove the specified group.",
"DELCONSUMER <key> <groupname> <consumer> -- Remove the specified consumer.",
"HELP                                     -- Prints this help.",
((void*)0)
    };
    stream *VAR_7 = ((void*)0);
    sds VAR_8 = ((void*)0);
    streamCG *VAR_9 = ((void*)0);
    char *VAR_10 = VAR_5->argv[1]->ptr;
    int VAR_11 = 0;
    robj *VAR_12;



    if (VAR_5->argc == 6 && !FUNC_16(VAR_10,"CREATE")) {
        if (FUNC_16(VAR_5->argv[5]->ptr,"MKSTREAM")) {
            FUNC_6(VAR_5);
            return;
        }
        VAR_11 = 1;
        VAR_8 = VAR_5->argv[3]->ptr;
    }


    if (VAR_5->argc >= 4) {
        VAR_12 = FUNC_10(VAR_5->db,VAR_5->argv[2]);
        if (VAR_12) {
            if (FUNC_7(VAR_5,VAR_12,VAR_2)) return;
            VAR_7 = VAR_12->ptr;
        }
        VAR_8 = VAR_5->argv[3]->ptr;
    }


    if (VAR_5->argc >= 4 && !VAR_11) {

        if (VAR_7 == ((void*)0)) {
            FUNC_1(VAR_5,
                "The XGROUP subcommand requires the key to exist. "
                "Note that for CREATE you may want to use the MKSTREAM "
                "option to create an empty stream automatically.");
            return;
        }


        if ((VAR_9 = FUNC_21(VAR_7,VAR_8)) == ((void*)0) &&
            (!FUNC_16(VAR_10,"SETID") ||
             !FUNC_16(VAR_10,"DELCONSUMER")))
        {
            FUNC_2(VAR_5, "-NOGROUP No such consumer group '%s' "
                                   "for key name '%s'",
                                   (char*)VAR_8, (char*)VAR_5->argv[2]->ptr);
            return;
        }
    }


    if (!FUNC_16(VAR_10,"CREATE") && (VAR_5->argc == 5 || VAR_5->argc == 6)) {
        streamID VAR_13;
        if (!FUNC_17(VAR_5->argv[4]->ptr,"$")) {
            if (VAR_7) {
                VAR_13 = VAR_7->last_id;
            } else {
                VAR_13.ms = 0;
                VAR_13.seq = 0;
            }
        } else if (FUNC_23(VAR_5,VAR_5->argv[4],&VAR_13,0) != VAR_0) {
            return;
        }


        if (VAR_7 == ((void*)0)) {
            FUNC_15(VAR_11);
            VAR_12 = FUNC_8();
            FUNC_9(VAR_5->db,VAR_5->argv[2],VAR_12);
            VAR_7 = VAR_12->ptr;
        }

        streamCG *VAR_14 = FUNC_18(VAR_7,VAR_8,FUNC_13(VAR_8),&VAR_13);
        if (VAR_14) {
            FUNC_0(VAR_5,VAR_4.ok);
            VAR_3.dirty++;
            FUNC_11(VAR_1,"xgroup-create",
                                VAR_5->argv[2],VAR_5->db->id);
        } else {
            FUNC_5(VAR_5,
                FUNC_14("-BUSYGROUP Consumer Group name already exists\r\n"));
        }
    } else if (!FUNC_16(VAR_10,"SETID") && VAR_5->argc == 5) {
        streamID VAR_15;
        if (!FUNC_17(VAR_5->argv[4]->ptr,"$")) {
            VAR_15 = VAR_7->last_id;
        } else if (FUNC_22(VAR_5,VAR_5->argv[4],&VAR_15,0) != VAR_0) {
            return;
        }
        VAR_9->last_id = VAR_15;
        FUNC_0(VAR_5,VAR_4.ok);
        VAR_3.dirty++;
        FUNC_11(VAR_1,"xgroup-setid",VAR_5->argv[2],VAR_5->db->id);
    } else if (!FUNC_16(VAR_10,"DESTROY") && VAR_5->argc == 4) {
        if (VAR_9) {
            FUNC_12(VAR_7->cgroups,(unsigned char*)VAR_8,FUNC_13(VAR_8),((void*)0));
            FUNC_20(VAR_9);
            FUNC_0(VAR_5,VAR_4.cone);
            VAR_3.dirty++;
            FUNC_11(VAR_1,"xgroup-destroy",
                                VAR_5->argv[2],VAR_5->db->id);
        } else {
            FUNC_0(VAR_5,VAR_4.czero);
        }
    } else if (!FUNC_16(VAR_10,"DELCONSUMER") && VAR_5->argc == 5) {


        long long VAR_16 = FUNC_19(VAR_9,VAR_5->argv[4]->ptr);
        FUNC_4(VAR_5,VAR_16);
        VAR_3.dirty++;
        FUNC_11(VAR_1,"xgroup-delconsumer",
                            VAR_5->argv[2],VAR_5->db->id);
    } else if (!FUNC_16(VAR_10,"HELP")) {
        FUNC_3(VAR_5, VAR_6);
    } else {
        FUNC_6(VAR_5);
    }
}
