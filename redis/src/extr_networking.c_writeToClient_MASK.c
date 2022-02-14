
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_8__ {size_t used; scalar_t__ size; scalar_t__ buf; } ;
typedef TYPE_1__ clientReplyBlock ;
struct TYPE_9__ {size_t bufpos; size_t sentlen; scalar_t__ reply_bytes; int flags; int conn; int lastinteraction; int reply; scalar_t__ buf; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {scalar_t__ maxmemory; int unixtime; int stat_net_output_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 TYPE_4__ VAR_8 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int ) ;
 scalar_t__ FUNC_12 () ;

int FUNC_13(client *VAR_9, int VAR_10) {
    ssize_t VAR_11 = 0, VAR_12 = 0;
    size_t VAR_13;
    clientReplyBlock *VAR_14;

    while(FUNC_0(VAR_9)) {
        if (VAR_9->bufpos > 0) {
            VAR_11 = FUNC_4(VAR_9->conn,VAR_9->buf+VAR_9->sentlen,VAR_9->bufpos-VAR_9->sentlen);
            if (VAR_11 <= 0) break;
            VAR_9->sentlen += VAR_11;
            VAR_12 += VAR_11;



            if ((int)VAR_9->sentlen == VAR_9->bufpos) {
                VAR_9->bufpos = 0;
                VAR_9->sentlen = 0;
            }
        } else {
            VAR_14 = FUNC_9(FUNC_7(VAR_9->reply));
            VAR_13 = VAR_14->used;

            if (VAR_13 == 0) {
                VAR_9->reply_bytes -= VAR_14->size;
                FUNC_6(VAR_9->reply,FUNC_7(VAR_9->reply));
                continue;
            }

            VAR_11 = FUNC_4(VAR_9->conn, VAR_14->buf + VAR_9->sentlen, VAR_13 - VAR_9->sentlen);
            if (VAR_11 <= 0) break;
            VAR_9->sentlen += VAR_11;
            VAR_12 += VAR_11;


            if (VAR_9->sentlen == VAR_13) {
                VAR_9->reply_bytes -= VAR_14->size;
                FUNC_6(VAR_9->reply,FUNC_7(VAR_9->reply));
                VAR_9->sentlen = 0;


                if (FUNC_8(VAR_9->reply) == 0)
                    FUNC_10(VAR_9->reply_bytes == 0);
            }
        }
        if (VAR_12 > VAR_7 &&
            (VAR_8.maxmemory == 0 ||
             FUNC_12() < VAR_8.maxmemory) &&
            !(VAR_9->flags & VAR_2)) break;
    }
    VAR_8.stat_net_output_bytes += VAR_12;
    if (VAR_11 == -1) {
        if (FUNC_2(VAR_9->conn) == VAR_3) {
            VAR_11 = 0;
        } else {
            FUNC_11(VAR_6,
                "Error writing to client: %s", FUNC_1(VAR_9->conn));
            FUNC_5(VAR_9);
            return VAR_4;
        }
    }
    if (VAR_12 > 0) {




        if (!(VAR_9->flags & VAR_1)) VAR_9->lastinteraction = VAR_8.unixtime;
    }
    if (!FUNC_0(VAR_9)) {
        VAR_9->sentlen = 0;




        if (VAR_10) FUNC_3(VAR_9->conn, ((void*)0));


        if (VAR_9->flags & VAR_0) {
            FUNC_5(VAR_9);
            return VAR_4;
        }
    }
    return VAR_5;
}
