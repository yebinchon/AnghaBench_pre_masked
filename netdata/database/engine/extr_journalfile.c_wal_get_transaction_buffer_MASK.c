
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rrdengine_worker_config {struct rrdengine_instance* ctx; } ;
struct TYPE_2__ {void* buf; unsigned int buf_pos; unsigned int buf_size; } ;
struct rrdengine_instance {TYPE_1__ commit_log; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (void*,int ,unsigned int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct rrdengine_worker_config*) ;

void * FUNC_7(struct rrdengine_worker_config* VAR_1, unsigned VAR_2)
{
    struct rrdengine_instance *VAR_3 = VAR_1->ctx;
    int VAR_4;
    unsigned VAR_5, VAR_6;

    FUNC_1(VAR_2);
    if (VAR_3->commit_log.buf) {
        unsigned VAR_7;

        VAR_5 = VAR_3->commit_log.buf_pos;
        VAR_6 = VAR_3->commit_log.buf_size;
        VAR_7 = VAR_6 - VAR_5;
        if (VAR_2 > VAR_7) {

            FUNC_6(VAR_1);
        }
    }
    if (((void*)0) == VAR_3->commit_log.buf) {
        VAR_6 = FUNC_0(VAR_2);
        VAR_4 = FUNC_3((void *)&VAR_3->commit_log.buf, VAR_0, VAR_6);
        if (FUNC_5(VAR_4)) {
            FUNC_2("posix_memalign:%s", FUNC_4(VAR_4));
        }
        VAR_5 = VAR_3->commit_log.buf_pos = 0;
        VAR_3->commit_log.buf_size = VAR_6;
    }
    VAR_3->commit_log.buf_pos += VAR_2;

    return VAR_3->commit_log.buf + VAR_5;
}
