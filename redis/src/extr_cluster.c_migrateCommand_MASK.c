
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_14__ ;
typedef struct TYPE_44__ TYPE_12__ ;


typedef char* sds ;
struct TYPE_48__ {char* ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_46__ {char* ptr; } ;
struct TYPE_47__ {TYPE_1__ buffer; } ;
struct TYPE_49__ {TYPE_2__ io; } ;
typedef TYPE_4__ rio ;
struct TYPE_50__ {long last_dbid; int conn; } ;
typedef TYPE_5__ migrateCachedSocket ;
struct TYPE_51__ {int argc; TYPE_3__** argv; int db; } ;
typedef TYPE_6__ client ;
typedef int buf2 ;
typedef int buf1 ;
typedef int buf0 ;
struct TYPE_45__ {int dirty; scalar_t__ cluster_enabled; } ;
struct TYPE_44__ {int ok; int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*,char*,char*) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int,long) ;
 int FUNC_5 (int ,char*,size_t,long) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (char*,int) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 long long FUNC_9 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,TYPE_3__*,long*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*) ;
 TYPE_5__* FUNC_14 (TYPE_6__*,TYPE_3__*,TYPE_3__*,long) ;
 long long FUNC_15 () ;
 int FUNC_16 (TYPE_6__*,int,TYPE_3__**) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (TYPE_4__*,char,int) ;
 int FUNC_19 (TYPE_4__*,long long) ;
 int FUNC_20 (TYPE_4__*,char*,int) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (int ,char*,char*) ;
 int FUNC_23 () ;
 int FUNC_24 (char*) ;
 size_t FUNC_25 (char*) ;
 int FUNC_26 (char*) ;
 TYPE_14__ VAR_3 ;
 int FUNC_27 (TYPE_6__*,int *,int ) ;
 TYPE_12__ VAR_4 ;
 int FUNC_28 (int ,TYPE_3__*) ;
 int FUNC_29 (char*,char*) ;
 int FUNC_30 (TYPE_3__**) ;
 TYPE_3__** FUNC_31 (int) ;
 TYPE_3__** FUNC_32 (TYPE_3__**,int) ;

void FUNC_33(client *VAR_5) {
    migrateCachedSocket *VAR_6;
    int VAR_7 = 0, VAR_8 = 0, VAR_9;
    char *VAR_10 = ((void*)0);
    long VAR_11;
    long VAR_12;
    robj **VAR_13 = ((void*)0);
    robj **VAR_14 = ((void*)0);
    robj **VAR_15 = ((void*)0);
    rio VAR_16, VAR_17;
    int VAR_18 = 1;
    int VAR_19 = 0;
    int VAR_20 = 0;


    int VAR_21 = 3;
    int VAR_22 = 1;


    for (VAR_9 = 6; VAR_9 < VAR_5->argc; VAR_9++) {
        int VAR_23 = VAR_9 < VAR_5->argc-1;
        if (!FUNC_29(VAR_5->argv[VAR_9]->ptr,"copy")) {
            VAR_7 = 1;
        } else if (!FUNC_29(VAR_5->argv[VAR_9]->ptr,"replace")) {
            VAR_8 = 1;
        } else if (!FUNC_29(VAR_5->argv[VAR_9]->ptr,"auth")) {
            if (!VAR_23) {
                FUNC_0(VAR_5,VAR_4.syntaxerr);
                return;
            }
            VAR_9++;
            VAR_10 = VAR_5->argv[VAR_9]->ptr;
        } else if (!FUNC_29(VAR_5->argv[VAR_9]->ptr,"keys")) {
            if (FUNC_25(VAR_5->argv[3]->ptr) != 0) {
                FUNC_1(VAR_5,
                    "When using MIGRATE KEYS option, the key argument"
                    " must be set to the empty string");
                return;
            }
            VAR_21 = VAR_9+1;
            VAR_22 = VAR_5->argc - VAR_9 - 1;
            break;
        } else {
            FUNC_0(VAR_5,VAR_4.syntaxerr);
            return;
        }
    }


    if (FUNC_10(VAR_5,VAR_5->argv[5],&VAR_11,((void*)0)) != VAR_0 ||
        FUNC_10(VAR_5,VAR_5->argv[4],&VAR_12,((void*)0)) != VAR_0)
    {
        return;
    }
    if (VAR_11 <= 0) VAR_11 = 1000;






    VAR_13 = FUNC_32(VAR_13,sizeof(robj*)*VAR_22);
    VAR_14 = FUNC_32(VAR_14,sizeof(robj*)*VAR_22);
    int VAR_24 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_22; VAR_9++) {
        if ((VAR_13[VAR_24] = FUNC_12(VAR_5->db,VAR_5->argv[VAR_21+VAR_9])) != ((void*)0)) {
            VAR_14[VAR_24] = VAR_5->argv[VAR_21+VAR_9];
            VAR_24++;
        }
    }
    VAR_22 = VAR_24;
    if (VAR_22 == 0) {
        FUNC_30(VAR_13); FUNC_30(VAR_14);
        FUNC_3(VAR_5,FUNC_26("+NOKEY\r\n"));
        return;
    }

try_again:
    VAR_19 = 0;


    VAR_6 = FUNC_14(VAR_5,VAR_5->argv[1],VAR_5->argv[2],VAR_11);
    if (VAR_6 == ((void*)0)) {
        FUNC_30(VAR_13); FUNC_30(VAR_14);
        return;
    }

    FUNC_17(&VAR_16,FUNC_23());


    if (VAR_10) {
        FUNC_27(VAR_5,((void*)0),FUNC_18(&VAR_16,'*',2));
        FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,"AUTH",4));
        FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,VAR_10,
            FUNC_25(VAR_10)));
    }


    int VAR_25 = VAR_6->last_dbid != VAR_12;
    if (VAR_25) {
        FUNC_27(VAR_5,((void*)0),FUNC_18(&VAR_16,'*',2));
        FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,"SELECT",6));
        FUNC_27(VAR_5,((void*)0),FUNC_19(&VAR_16,VAR_12));
    }

    int VAR_26 = 0;





    for (VAR_9 = 0; VAR_9 < VAR_22; VAR_9++) {
        long long VAR_27 = 0;
        long long VAR_28 = FUNC_9(VAR_5->db,VAR_14[VAR_9]);

        if (VAR_28 != -1) {
            VAR_27 = VAR_28-FUNC_15();
            if (VAR_27 < 0) {
                continue;
            }
            if (VAR_27 < 1) VAR_27 = 1;
        }




        VAR_14[VAR_26++] = VAR_14[VAR_9];

        FUNC_27(VAR_5,((void*)0),
            FUNC_18(&VAR_16,'*',VAR_8 ? 5 : 4));

        if (VAR_3.cluster_enabled)
            FUNC_27(VAR_5,((void*)0),
                FUNC_20(&VAR_16,"RESTORE-ASKING",14));
        else
            FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,"RESTORE",7));
        FUNC_27(VAR_5,((void*)0),FUNC_21(VAR_14[VAR_9]));
        FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,VAR_14[VAR_9]->ptr,
                FUNC_25(VAR_14[VAR_9]->ptr)));
        FUNC_27(VAR_5,((void*)0),FUNC_19(&VAR_16,VAR_27));



        FUNC_6(&VAR_17,VAR_13[VAR_9],VAR_14[VAR_9]);
        FUNC_27(VAR_5,((void*)0),
            FUNC_20(&VAR_16,VAR_17.io.buffer.ptr,
                               FUNC_25(VAR_17.io.buffer.ptr)));
        FUNC_24(VAR_17.io.buffer.ptr);



        if (VAR_8)
            FUNC_27(VAR_5,((void*)0),FUNC_20(&VAR_16,"REPLACE",7));
    }


    VAR_22 = VAR_26;


    VAR_2 = 0;
    {
        sds VAR_29 = VAR_16.io.buffer.ptr;
        size_t VAR_30 = 0, VAR_31;
        int VAR_32 = 0;

        while ((VAR_31 = FUNC_25(VAR_29)-VAR_30) > 0) {
            VAR_31 = (VAR_31 > (64*1024) ? (64*1024) : VAR_31);
            VAR_32 = FUNC_5(VAR_6->conn,VAR_29+VAR_30,VAR_31,VAR_11);
            if (VAR_32 != (signed)VAR_31) {
                VAR_19 = 1;
                goto socket_err;
            }
            VAR_30 += VAR_32;
        }
    }

    char VAR_33[1024];
    char VAR_34[1024];
    char VAR_35[1024];


    if (VAR_10 && FUNC_4(VAR_6->conn, VAR_33, sizeof(VAR_33), VAR_11) <= 0)
        goto socket_err;


    if (VAR_25 && FUNC_4(VAR_6->conn, VAR_34, sizeof(VAR_34), VAR_11) <= 0)
        goto socket_err;


    int VAR_36 = 0;
    int VAR_37 = 0;
    int VAR_38 = 1;





    if (!VAR_7) VAR_15 = FUNC_31(sizeof(robj*)*(VAR_22+1));

    for (VAR_9 = 0; VAR_9 < VAR_22; VAR_9++) {
        if (FUNC_4(VAR_6->conn, VAR_35, sizeof(VAR_35), VAR_11) <= 0) {
            VAR_37 = 1;
            break;
        }
        if ((VAR_10 && VAR_33[0] == '-') ||
            (VAR_25 && VAR_34[0] == '-') ||
            VAR_35[0] == '-')
        {

            if (!VAR_36) {
                VAR_6->last_dbid = -1;
                char *VAR_39;
                if (VAR_10 && VAR_33[0] == '-') VAR_39 = VAR_33;
                else if (VAR_25 && VAR_34[0] == '-') VAR_39 = VAR_34;
                else VAR_39 = VAR_35;

                VAR_36 = 1;
                FUNC_2(VAR_5,"Target instance replied with error: %s",
                    VAR_39+1);
            }
        } else {
            if (!VAR_7) {

                FUNC_8(VAR_5->db,VAR_14[VAR_9]);
                FUNC_28(VAR_5->db,VAR_14[VAR_9]);
                VAR_3.dirty++;


                VAR_15[VAR_38++] = VAR_14[VAR_9];
                FUNC_11(VAR_14[VAR_9]);
            }
        }
    }




    if (!VAR_36 && VAR_37 && VAR_9 == 0 && VAR_18 &&
        VAR_2 != VAR_1)
    {
        goto socket_err;
    }




    if (VAR_37) FUNC_13(VAR_5->argv[1],VAR_5->argv[2]);

    if (!VAR_7) {



        if (VAR_38 > 1) {
            VAR_15[0] = FUNC_7("DEL",3);

            FUNC_16(VAR_5,VAR_38,VAR_15);
            VAR_20 = 1;
        } else {

            FUNC_30(VAR_15);
        }
        VAR_15 = ((void*)0);
    }




    if (!VAR_36 && VAR_37) {
        VAR_18 = 0;
        goto socket_err;
    }

    if (!VAR_36) {






        VAR_6->last_dbid = VAR_12;
        FUNC_0(VAR_5,VAR_4.ok);
    } else {


    }

    FUNC_24(VAR_16.io.buffer.ptr);
    FUNC_30(VAR_13); FUNC_30(VAR_14); FUNC_30(VAR_15);
    return;




socket_err:


    FUNC_24(VAR_16.io.buffer.ptr);





    if (!VAR_20) FUNC_13(VAR_5->argv[1],VAR_5->argv[2]);
    FUNC_30(VAR_15);
    VAR_15 = ((void*)0);



    if (VAR_2 != VAR_1 && VAR_18) {
        VAR_18 = 0;
        goto try_again;
    }


    FUNC_30(VAR_13); FUNC_30(VAR_14);
    FUNC_3(VAR_5,
        FUNC_22(FUNC_23(),
            "-IOERR error or timeout %s to target instance\r\n",
            VAR_19 ? "writing" : "reading"));
    return;
}
