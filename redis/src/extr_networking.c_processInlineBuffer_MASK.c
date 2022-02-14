
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char* sds ;
typedef int robj ;
struct TYPE_6__ {char* querybuf; int qb_pos; int flags; char** argv; size_t argc; int repl_ack_time; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int unixtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,size_t) ;
 char** FUNC_5 (char*,int*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_6 (char*,TYPE_1__*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char**) ;
 char** FUNC_9 (int) ;

int FUNC_10(client *VAR_6) {
    char *VAR_7;
    int VAR_8, VAR_9, VAR_10 = 1;
    sds *VAR_11, VAR_12;
    size_t VAR_13;


    VAR_7 = FUNC_7(VAR_6->querybuf+VAR_6->qb_pos,'\n');


    if (VAR_7 == ((void*)0)) {
        if (FUNC_3(VAR_6->querybuf)-VAR_6->qb_pos > VAR_4) {
            FUNC_0(VAR_6,"Protocol error: too big inline request");
            FUNC_6("too big inline request",VAR_6);
        }
        return VAR_1;
    }


    if (VAR_7 && VAR_7 != VAR_6->querybuf+VAR_6->qb_pos && *(VAR_7-1) == '\r')
        VAR_7--, VAR_10++;


    VAR_13 = VAR_7-(VAR_6->querybuf+VAR_6->qb_pos);
    VAR_12 = FUNC_4(VAR_6->querybuf+VAR_6->qb_pos,VAR_13);
    VAR_11 = FUNC_5(VAR_12,&VAR_8);
    FUNC_2(VAR_12);
    if (VAR_11 == ((void*)0)) {
        FUNC_0(VAR_6,"Protocol error: unbalanced quotes in request");
        FUNC_6("unbalanced quotes in inline request",VAR_6);
        return VAR_1;
    }




    if (VAR_13 == 0 && VAR_6->flags & VAR_0)
        VAR_6->repl_ack_time = VAR_5.unixtime;


    VAR_6->qb_pos += VAR_13+VAR_10;


    if (VAR_8) {
        if (VAR_6->argv) FUNC_8(VAR_6->argv);
        VAR_6->argv = FUNC_9(sizeof(robj*)*VAR_8);
    }


    for (VAR_6->argc = 0, VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        if (FUNC_3(VAR_11[VAR_9])) {
            VAR_6->argv[VAR_6->argc] = FUNC_1(VAR_3,VAR_11[VAR_9]);
            VAR_6->argc++;
        } else {
            FUNC_2(VAR_11[VAR_9]);
        }
    }
    FUNC_8(VAR_11);
    return VAR_2;
}
