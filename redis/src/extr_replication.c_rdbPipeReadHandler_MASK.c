
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void aeEventLoop ;
typedef int connection ;
struct TYPE_5__ {int repldboff; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ rdb_pipe_numconns_writing; int rdb_pipe_bufflen; int rdb_pipe_numconns; int stat_net_output_bytes; int rdb_pipe_read; int el; int ** rdb_pipe_conns; scalar_t__ rdb_pipe_buff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 (int,scalar_t__,int ) ;
 TYPE_2__ VAR_8 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;

void FUNC_15(struct aeEventLoop *VAR_9, int VAR_10, void *VAR_11, int VAR_12) {
    FUNC_1(VAR_12);
    FUNC_1(VAR_11);
    FUNC_1(VAR_9);
    int VAR_13;
    if (!VAR_8.rdb_pipe_buff)
        VAR_8.rdb_pipe_buff = FUNC_14(VAR_5);
    FUNC_11(VAR_8.rdb_pipe_numconns_writing==0);

    while (1) {
        VAR_8.rdb_pipe_bufflen = FUNC_10(VAR_10, VAR_8.rdb_pipe_buff, VAR_5);
        if (VAR_8.rdb_pipe_bufflen < 0) {
            if (VAR_6 == VAR_2 || VAR_6 == VAR_3)
                return;
            FUNC_12(VAR_4,"Diskless rdb transfer, read error sending DB to replicas: %s", FUNC_13(VAR_6));
            for (VAR_13=0; VAR_13 < VAR_8.rdb_pipe_numconns; VAR_13++) {
                connection *VAR_14 = VAR_8.rdb_pipe_conns[VAR_13];
                if (!VAR_14)
                    continue;
                client *VAR_15 = FUNC_4(VAR_14);
                FUNC_8(VAR_15);
                VAR_8.rdb_pipe_conns[VAR_13] = ((void*)0);
            }
            FUNC_9();
            return;
        }

        if (VAR_8.rdb_pipe_bufflen == 0) {

            int VAR_16 = 0;
            FUNC_2(VAR_8.el, VAR_8.rdb_pipe_read, VAR_0);
            for (VAR_13=0; VAR_13 < VAR_8.rdb_pipe_numconns; VAR_13++)
            {
                connection *VAR_17 = VAR_8.rdb_pipe_conns[VAR_13];
                if (!VAR_17)
                    continue;
                VAR_16++;
            }
            FUNC_12(VAR_4,"Diskless rdb transfer, done reading from pipe, %d replicas still up.", VAR_16);
            FUNC_0();
            return;
        }

        int VAR_18 = 0;
        for (VAR_13=0; VAR_13 < VAR_8.rdb_pipe_numconns; VAR_13++)
        {
            int VAR_19;
            connection *VAR_20 = VAR_8.rdb_pipe_conns[VAR_13];
            if (!VAR_20)
                continue;

            client *VAR_21 = FUNC_4(VAR_20);
            if ((VAR_19 = FUNC_7(VAR_20, VAR_8.rdb_pipe_buff, VAR_8.rdb_pipe_bufflen)) == -1) {
                if (FUNC_5(VAR_20) != VAR_1) {
                    FUNC_12(VAR_4,"Diskless rdb transfer, write error sending DB to replica: %s",
                        FUNC_3(VAR_20));
                    FUNC_8(VAR_21);
                    VAR_8.rdb_pipe_conns[VAR_13] = ((void*)0);
                    continue;
                }

                VAR_21->repldboff = 0;
            } else {
                VAR_21->repldboff = VAR_19;
                VAR_8.stat_net_output_bytes += VAR_19;
            }


            if (VAR_19 != VAR_8.rdb_pipe_bufflen) {
                VAR_8.rdb_pipe_numconns_writing++;
                FUNC_6(VAR_20, VAR_7);
            }
            VAR_18++;
        }

        if (VAR_18 == 0) {
            FUNC_12(VAR_4,"Diskless rdb transfer, last replica dropped, killing fork child.");
            FUNC_9();
            FUNC_0();
        }

        if (VAR_8.rdb_pipe_numconns_writing || VAR_18 == 0) {
            FUNC_2(VAR_8.el, VAR_8.rdb_pipe_read, VAR_0);
            break;
        }
    }
}
