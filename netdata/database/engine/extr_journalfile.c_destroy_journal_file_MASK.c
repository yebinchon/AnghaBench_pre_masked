
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_fs_t ;
struct rrdengine_journalfile {int file; } ;
struct TYPE_2__ {int journalfile_deletions; int fs_errors; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdengine_datafile {struct rrdengine_instance* ctx; } ;
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

int FUNC_8(struct rrdengine_journalfile *VAR_2, struct rrdengine_datafile *VAR_3)
{
    struct rrdengine_instance *VAR_4 = VAR_3->ctx;
    uv_fs_t VAR_5;
    int VAR_6;
    char VAR_7[VAR_0];

    FUNC_1(VAR_3, VAR_7, sizeof(VAR_7));

    VAR_6 = FUNC_4(((void*)0), &VAR_5, VAR_2->file, 0, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_0("uv_fs_ftruncate(%s): %s", VAR_7, FUNC_7(VAR_6));
        ++VAR_4->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_5);

    VAR_6 = FUNC_3(((void*)0), &VAR_5, VAR_2->file, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_0("uv_fs_close(%s): %s", VAR_7, FUNC_7(VAR_6));
        ++VAR_4->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_5);

    VAR_6 = FUNC_6(((void*)0), &VAR_5, VAR_7, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_0("uv_fs_fsunlink(%s): %s", VAR_7, FUNC_7(VAR_6));
        ++VAR_4->stats.fs_errors;
        FUNC_2(&VAR_1, 1);
    }
    FUNC_5(&VAR_5);

    ++VAR_4->stats.journalfile_deletions;

    return VAR_6;
}
