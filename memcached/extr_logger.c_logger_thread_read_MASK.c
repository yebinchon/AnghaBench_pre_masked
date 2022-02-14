
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct logger_stats {int worker_dropped; int worker_written; } ;
struct TYPE_6__ {int mutex; scalar_t__ dropped; scalar_t__ written; int buf; } ;
typedef TYPE_1__ logger ;
struct TYPE_7__ {scalar_t__ pad; scalar_t__ size; } ;
typedef TYPE_2__ logentry ;
typedef enum logger_parse_entry_ret { ____Placeholder_logger_parse_entry_ret } logger_parse_entry_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (int ,unsigned int*) ;
 unsigned char* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,struct logger_stats*,char*,int*) ;
 int FUNC_6 (TYPE_2__*,struct logger_stats*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_9(logger *VAR_4, struct logger_stats *VAR_5) {
    unsigned int VAR_6;
    unsigned int VAR_7 = 0;
    unsigned char *VAR_8;
    char VAR_9[VAR_1];
    logentry *VAR_10;
    FUNC_7(&VAR_4->mutex);
    VAR_8 = FUNC_2(VAR_4->buf, &VAR_6);
    FUNC_8(&VAR_4->mutex);

    if (VAR_8 == ((void*)0)) {
        return 0;
    }
    FUNC_0("LOGGER: Got %d bytes from bipbuffer\n", VAR_6);


    while (VAR_7 < VAR_6 && VAR_3 > 0) {
        enum logger_parse_entry_ret VAR_11;
        int VAR_12 = 0;
        VAR_10 = (logentry *) (VAR_8 + VAR_7);
        VAR_11 = FUNC_5(VAR_10, VAR_5, VAR_9, &VAR_12);
        if (VAR_11 != VAR_0) {

            FUNC_4(VAR_2, "LOGGER: Failed to parse log entry\n");
        } else {
            FUNC_6(VAR_10, VAR_5, VAR_9, VAR_12);
        }
        VAR_7 += sizeof(logentry) + VAR_10->size + VAR_10->pad;
    }
    FUNC_1(VAR_7 <= VAR_6);

    FUNC_7(&VAR_4->mutex);
    VAR_8 = FUNC_3(VAR_4->buf, VAR_6);
    VAR_5->worker_written += VAR_4->written;
    VAR_5->worker_dropped += VAR_4->dropped;
    VAR_4->written = 0;
    VAR_4->dropped = 0;
    FUNC_8(&VAR_4->mutex);
    if (VAR_8 == ((void*)0)) {
        FUNC_4(VAR_2, "LOGGER: unexpectedly couldn't advance buf pointer\n");
        FUNC_1(0);
    }
    return VAR_6;
}
