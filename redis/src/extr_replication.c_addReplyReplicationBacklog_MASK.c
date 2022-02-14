
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
struct TYPE_2__ {long long repl_backlog_histlen; long long repl_backlog_size; long long repl_backlog_off; long long repl_backlog_idx; scalar_t__ repl_backlog; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,long long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,char*,...) ;

long long FUNC_3(client *VAR_2, long long VAR_3) {
    long long VAR_4, VAR_5, VAR_6;

    FUNC_2(VAR_0, "[PSYNC] Replica request offset: %lld", VAR_3);

    if (VAR_1.repl_backlog_histlen == 0) {
        FUNC_2(VAR_0, "[PSYNC] Backlog history len is zero");
        return 0;
    }

    FUNC_2(VAR_0, "[PSYNC] Backlog size: %lld",
             VAR_1.repl_backlog_size);
    FUNC_2(VAR_0, "[PSYNC] First byte: %lld",
             VAR_1.repl_backlog_off);
    FUNC_2(VAR_0, "[PSYNC] History len: %lld",
             VAR_1.repl_backlog_histlen);
    FUNC_2(VAR_0, "[PSYNC] Current index: %lld",
             VAR_1.repl_backlog_idx);


    VAR_5 = VAR_3 - VAR_1.repl_backlog_off;
    FUNC_2(VAR_0, "[PSYNC] Skipping: %lld", VAR_5);



    VAR_4 = (VAR_1.repl_backlog_idx +
        (VAR_1.repl_backlog_size-VAR_1.repl_backlog_histlen)) %
        VAR_1.repl_backlog_size;
    FUNC_2(VAR_0, "[PSYNC] Index of first byte: %lld", VAR_4);


    VAR_4 = (VAR_4 + VAR_5) % VAR_1.repl_backlog_size;



    VAR_6 = VAR_1.repl_backlog_histlen - VAR_5;
    FUNC_2(VAR_0, "[PSYNC] Reply total length: %lld", VAR_6);
    while(VAR_6) {
        long long VAR_7 =
            ((VAR_1.repl_backlog_size - VAR_4) < VAR_6) ?
            (VAR_1.repl_backlog_size - VAR_4) : VAR_6;

        FUNC_2(VAR_0, "[PSYNC] addReply() length: %lld", VAR_7);
        FUNC_0(VAR_2,FUNC_1(VAR_1.repl_backlog + VAR_4, VAR_7));
        VAR_6 -= VAR_7;
        VAR_4 = 0;
    }
    return VAR_1.repl_backlog_histlen - VAR_5;
}
