
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ result; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int uv_file ;
typedef int uv_buf_t ;
typedef unsigned int uint64_t ;
struct rrdengine_journalfile {unsigned int pos; int file; } ;
struct TYPE_5__ {unsigned int io_read_bytes; int io_read_requests; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdeng_jf_sb {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 int FUNC_7 (struct rrdengine_instance*,struct rrdengine_journalfile*,void*,unsigned int*,unsigned int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (void*,unsigned int) ;
 int FUNC_11 (int *,TYPE_2__*,int ,int *,int,unsigned int,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static uint64_t FUNC_14(struct rrdengine_instance *VAR_3, struct rrdengine_journalfile *VAR_4)
{
    uv_file VAR_5;
    uint64_t VAR_6;
    int VAR_7;
    uint64_t VAR_8, VAR_9, VAR_10, VAR_11;
    unsigned VAR_12;
    void *VAR_13;
    uv_buf_t VAR_14;
    uv_fs_t VAR_15;

    VAR_5 = VAR_4->file;
    VAR_6 = VAR_4->pos;


    VAR_10 = 1;
    VAR_7 = FUNC_6((void *)&VAR_13, VAR_2, VAR_0);
    if (FUNC_9(VAR_7)) {
        FUNC_4("posix_memalign:%s", FUNC_8(VAR_7));
    }

    for (VAR_8 = sizeof(struct rrdeng_jf_sb) ; VAR_8 < VAR_6 ; VAR_8 += VAR_0) {
        VAR_12 = FUNC_2(VAR_0, VAR_6 - VAR_8);
        VAR_14 = FUNC_10(VAR_13, VAR_12);
        VAR_7 = FUNC_11(((void*)0), &VAR_15, VAR_5, &VAR_14, 1, VAR_8, ((void*)0));
        if (VAR_7 < 0) {
            FUNC_4("uv_fs_read: %s", FUNC_13(VAR_7));

        }
        FUNC_3(VAR_15.result >= 0);
        FUNC_12(&VAR_15);
        VAR_3->stats.io_read_bytes += VAR_12;
        ++VAR_3->stats.io_read_requests;



        for (VAR_9 = 0 ; VAR_9 < VAR_12 ; ) {
            unsigned VAR_16;

            VAR_16 = VAR_8 + VAR_12 - VAR_9;
            VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_13 + VAR_9, &VAR_11, VAR_16);
            if (!VAR_7)

                VAR_9 = FUNC_0(VAR_9 + VAR_1);
            else
                VAR_9 += VAR_7;
            VAR_10 = FUNC_1(VAR_10, VAR_11);
        }
    }

    FUNC_5(VAR_13);
    return VAR_10;
}
