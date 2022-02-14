
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_6__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_7__ {scalar_t__ used; scalar_t__ buf; int free; } ;
typedef TYPE_2__ aofrwblock ;
typedef int aeEventLoop ;
struct TYPE_8__ {int aof_rewrite_buf_blocks; int aof_pipe_write_data_to_child; int el; scalar_t__ aof_stop_sending_diff; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;

void FUNC_6(aeEventLoop *VAR_2, int VAR_3, void *VAR_4, int VAR_5) {
    listNode *VAR_6;
    aofrwblock *VAR_7;
    ssize_t VAR_8;
    FUNC_0(*VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    while(1) {
        VAR_6 = FUNC_3(VAR_1.aof_rewrite_buf_blocks);
        VAR_7 = VAR_6 ? VAR_6->value : ((void*)0);
        if (VAR_1.aof_stop_sending_diff || !VAR_7) {
            FUNC_1(VAR_1.el,VAR_1.aof_pipe_write_data_to_child,
                              VAR_0);
            return;
        }
        if (VAR_7->used > 0) {
            VAR_8 = FUNC_5(VAR_1.aof_pipe_write_data_to_child,
                             VAR_7->buf,VAR_7->used);
            if (VAR_8 <= 0) return;
            FUNC_4(VAR_7->buf,VAR_7->buf+VAR_8,VAR_7->used-VAR_8);
            VAR_7->used -= VAR_8;
            VAR_7->free += VAR_8;
        }
        if (VAR_7->used == 0) FUNC_2(VAR_1.aof_rewrite_buf_blocks,VAR_6);
    }
}
