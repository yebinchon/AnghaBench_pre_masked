
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
typedef int robj ;
struct TYPE_8__ {long long multibulklen; scalar_t__ argc; char* querybuf; int qb_pos; int bulklen; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {long long proto_max_bulk_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,long long) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,size_t,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_10 (TYPE_1__*,int *,int) ;
 int FUNC_11 (char*,TYPE_1__*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,int,long long*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int) ;

int FUNC_16(client *VAR_7) {
    char *VAR_8 = ((void*)0);
    int VAR_9;
    long long VAR_10;

    if (VAR_7->multibulklen == 0) {

        FUNC_10(VAR_7,((void*)0),VAR_7->argc == 0);


        VAR_8 = FUNC_12(VAR_7->querybuf+VAR_7->qb_pos,'\r');
        if (VAR_8 == ((void*)0)) {
            if (FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos > VAR_3) {
                FUNC_0(VAR_7,"Protocol error: too big mbulk count string");
                FUNC_11("too big mbulk count string",VAR_7);
            }
            return VAR_0;
        }


        if (VAR_8-(VAR_7->querybuf+VAR_7->qb_pos) > (ssize_t)(FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos-2))
            return VAR_0;



        FUNC_10(VAR_7,((void*)0),VAR_7->querybuf[VAR_7->qb_pos] == '*');
        VAR_9 = FUNC_13(VAR_7->querybuf+1+VAR_7->qb_pos,VAR_8-(VAR_7->querybuf+1+VAR_7->qb_pos),&VAR_10);
        if (!VAR_9 || VAR_10 > 1024*1024) {
            FUNC_0(VAR_7,"Protocol error: invalid multibulk length");
            FUNC_11("invalid mbulk count",VAR_7);
            return VAR_0;
        }

        VAR_7->qb_pos = (VAR_8-VAR_7->querybuf)+2;

        if (VAR_10 <= 0) return VAR_1;

        VAR_7->multibulklen = VAR_10;


        if (VAR_7->argv) FUNC_14(VAR_7->argv);
        VAR_7->argv = FUNC_15(sizeof(robj*)*VAR_7->multibulklen);
    }

    FUNC_10(VAR_7,((void*)0),VAR_7->multibulklen > 0);
    while(VAR_7->multibulklen) {

        if (VAR_7->bulklen == -1) {
            VAR_8 = FUNC_12(VAR_7->querybuf+VAR_7->qb_pos,'\r');
            if (VAR_8 == ((void*)0)) {
                if (FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos > VAR_3) {
                    FUNC_0(VAR_7,
                        "Protocol error: too big bulk count string");
                    FUNC_11("too big bulk count string",VAR_7);
                    return VAR_0;
                }
                break;
            }


            if (VAR_8-(VAR_7->querybuf+VAR_7->qb_pos) > (ssize_t)(FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos-2))
                break;

            if (VAR_7->querybuf[VAR_7->qb_pos] != '$') {
                FUNC_1(VAR_7,
                    "Protocol error: expected '$', got '%c'",
                    VAR_7->querybuf[VAR_7->qb_pos]);
                FUNC_11("expected $ but got something else",VAR_7);
                return VAR_0;
            }

            VAR_9 = FUNC_13(VAR_7->querybuf+VAR_7->qb_pos+1,VAR_8-(VAR_7->querybuf+VAR_7->qb_pos+1),&VAR_10);
            if (!VAR_9 || VAR_10 < 0 || VAR_10 > VAR_6.proto_max_bulk_len) {
                FUNC_0(VAR_7,"Protocol error: invalid bulk length");
                FUNC_11("invalid bulk length",VAR_7);
                return VAR_0;
            }

            VAR_7->qb_pos = VAR_8-VAR_7->querybuf+2;
            if (VAR_10 >= VAR_4) {
                if (FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos <= (size_t)VAR_10+2) {
                    FUNC_9(VAR_7->querybuf,VAR_7->qb_pos,-1);
                    VAR_7->qb_pos = 0;


                    VAR_7->querybuf = FUNC_5(VAR_7->querybuf,VAR_10+2);
                }
            }
            VAR_7->bulklen = VAR_10;
        }


        if (FUNC_7(VAR_7->querybuf)-VAR_7->qb_pos < (size_t)(VAR_7->bulklen+2)) {

            break;
        } else {



            if (VAR_7->qb_pos == 0 &&
                VAR_7->bulklen >= VAR_4 &&
                FUNC_7(VAR_7->querybuf) == (size_t)(VAR_7->bulklen+2))
            {
                VAR_7->argv[VAR_7->argc++] = FUNC_2(VAR_2,VAR_7->querybuf);
                FUNC_4(VAR_7->querybuf,-2);


                VAR_7->querybuf = FUNC_8(VAR_5,VAR_7->bulklen+2);
                FUNC_6(VAR_7->querybuf);
            } else {
                VAR_7->argv[VAR_7->argc++] =
                    FUNC_3(VAR_7->querybuf+VAR_7->qb_pos,VAR_7->bulklen);
                VAR_7->qb_pos += VAR_7->bulklen+2;
            }
            VAR_7->bulklen = -1;
            VAR_7->multibulklen--;
        }
    }


    if (VAR_7->multibulklen == 0) return VAR_1;


    return VAR_0;
}
