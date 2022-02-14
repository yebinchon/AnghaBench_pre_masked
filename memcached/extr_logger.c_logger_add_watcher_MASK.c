
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int sfd; int id; int * buf; int eflags; int t; void* c; } ;
typedef TYPE_1__ logger_watcher ;
typedef enum logger_add_watcher_ret { ____Placeholder_logger_add_watcher_ret } logger_add_watcher_ret ;
struct TYPE_7__ {int logger_watcher_buf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__** VAR_9 ;

enum logger_add_watcher_ret FUNC_7(void *VAR_10, const int VAR_11, uint16_t VAR_12) {
    int VAR_13;
    logger_watcher *VAR_14 = ((void*)0);
    FUNC_5(&VAR_6);
    if (VAR_8 >= VAR_5) {
        FUNC_6(&VAR_6);
        return VAR_2;
    }

    for (VAR_13 = 0; VAR_13 < VAR_5-1; VAR_13++) {
        if (VAR_9[VAR_13] == ((void*)0))
            break;
    }

    VAR_14 = FUNC_2(1, sizeof(logger_watcher));
    if (VAR_14 == ((void*)0)) {
        FUNC_6(&VAR_6);
        return VAR_0;
    }
    VAR_14->c = VAR_10;
    VAR_14->sfd = VAR_11;
    if (VAR_11 == 0 && VAR_10 == ((void*)0)) {
        VAR_14->t = VAR_4;
    } else {
        VAR_14->t = VAR_3;
    }
    VAR_14->id = VAR_13;
    VAR_14->eflags = VAR_12;
    VAR_14->buf = FUNC_0(VAR_7.logger_watcher_buf_size);
    if (VAR_14->buf == ((void*)0)) {
        FUNC_3(VAR_14);
        FUNC_6(&VAR_6);
        return VAR_0;
    }
    FUNC_1(VAR_14->buf, (unsigned char *) "OK\r\n", 4);

    VAR_9[VAR_13] = VAR_14;
    VAR_8++;

    FUNC_4();

    FUNC_6(&VAR_6);
    return VAR_1;
}
