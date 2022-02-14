
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_fs_t ;
struct TYPE_2__ {int datafile_deletions; int fs_errors; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdengine_datafile {int file; struct rrdengine_instance* ctx; } ;
typedef int path ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct rrdengine_datafile*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*,int *) ;
 char* FUNC_7 (int) ;

int FUNC_8(struct rrdengine_datafile *VAR_2)
{
    struct rrdengine_instance *VAR_3 = VAR_2->ctx;
    uv_fs_t VAR_4;
    int VAR_5;
    char VAR_6[VAR_0];

    FUNC_1(VAR_2, VAR_6, sizeof(VAR_6));

    VAR_5 = FUNC_4(((void*)0), &VAR_4, VAR_2->file, 0, ((void*)0));
    if (VAR_5 < 0) {
        FUNC_0("uv_fs_ftruncate(%s): %s", VAR_6, FUNC_7(VAR_5));
        ++VAR_3->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_4);

    VAR_5 = FUNC_3(((void*)0), &VAR_4, VAR_2->file, ((void*)0));
    if (VAR_5 < 0) {
        FUNC_0("uv_fs_close(%s): %s", VAR_6, FUNC_7(VAR_5));
        ++VAR_3->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_4);

    VAR_5 = FUNC_6(((void*)0), &VAR_4, VAR_6, ((void*)0));
    if (VAR_5 < 0) {
        FUNC_0("uv_fs_fsunlink(%s): %s", VAR_6, FUNC_7(VAR_5));
        ++VAR_3->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_4);

    ++VAR_3->stats.datafile_deletions;

    return VAR_5;
}
