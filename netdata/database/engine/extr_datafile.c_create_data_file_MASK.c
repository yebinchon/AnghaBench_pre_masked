
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
struct TYPE_5__ {int io_write_bytes; int io_write_requests; int io_errors; int datafile_creations; int fs_errors; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdengine_datafile {int pos; int file; struct rrdengine_instance* ctx; } ;
struct rrdeng_df_sb {int tier; int version; int magic_number; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rrdengine_datafile*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct rrdeng_df_sb*) ;
 int FUNC_5 (struct rrdengine_datafile*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,int,int *) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int *,TYPE_2__*,int ,int *,int,int ,int *) ;
 int FUNC_15 (int) ;

int FUNC_16(struct rrdengine_datafile *VAR_11)
{
    struct rrdengine_instance *VAR_12 = VAR_11->ctx;
    uv_fs_t VAR_13;
    uv_file VAR_14;
    int VAR_15, VAR_16;
    struct rrdeng_df_sb *VAR_17;
    uv_buf_t VAR_18;
    char VAR_19[VAR_6];

    FUNC_5(VAR_11, VAR_19, sizeof(VAR_19));
    VAR_16 = FUNC_6(VAR_19, VAR_0 | VAR_1 | VAR_2, &VAR_14);
    if (VAR_16 < 0) {
        ++VAR_12->stats.fs_errors;
        FUNC_8(&VAR_9, 1);
        return VAR_16;
    }
    VAR_11->file = VAR_14;
    ++VAR_12->stats.datafile_creations;

    VAR_15 = FUNC_7((void *)&VAR_17, VAR_8, sizeof(*VAR_17));
    if (FUNC_11(VAR_15)) {
        FUNC_3("posix_memalign:%s", FUNC_9(VAR_15));
    }
    (void) FUNC_10(VAR_17->magic_number, VAR_3, VAR_5);
    (void) FUNC_10(VAR_17->version, VAR_4, VAR_7);
    VAR_17->tier = 1;

    VAR_18 = FUNC_12((void *)VAR_17, sizeof(*VAR_17));

    VAR_15 = FUNC_14(((void*)0), &VAR_13, VAR_14, &VAR_18, 1, 0, ((void*)0));
    if (VAR_15 < 0) {
        FUNC_0(VAR_13.result < 0);
        FUNC_2("uv_fs_write: %s", FUNC_15(VAR_15));
        ++VAR_12->stats.io_errors;
        FUNC_8(&VAR_10, 1);
    }
    FUNC_13(&VAR_13);
    FUNC_4(VAR_17);
    if (VAR_15 < 0) {
        FUNC_1(VAR_11);
        return VAR_15;
    }

    VAR_11->pos = sizeof(*VAR_17);
    VAR_12->stats.io_write_bytes += sizeof(*VAR_17);
    ++VAR_12->stats.io_write_requests;

    return 0;
}
