
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ result; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_file ;
typedef int uv_buf_t ;
struct rrdeng_df_sb {int tier; int version; int magic_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct rrdeng_df_sb*) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int *,int,int ,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(uv_file VAR_6)
{
    int VAR_7;
    struct rrdeng_df_sb *VAR_8;
    uv_buf_t VAR_9;
    uv_fs_t VAR_10;

    VAR_7 = FUNC_4((void *)&VAR_8, VAR_4, sizeof(*VAR_8));
    if (FUNC_7(VAR_7)) {
        FUNC_2("posix_memalign:%s", FUNC_5(VAR_7));
    }
    VAR_9 = FUNC_8((void *)VAR_8, sizeof(*VAR_8));

    VAR_7 = FUNC_9(((void*)0), &VAR_10, VAR_6, &VAR_9, 1, 0, ((void*)0));
    if (VAR_7 < 0) {
        FUNC_1("uv_fs_read: %s", FUNC_11(VAR_7));
        FUNC_10(&VAR_10);
        goto error;
    }
    FUNC_0(VAR_10.result >= 0);
    FUNC_10(&VAR_10);

    if (FUNC_6(VAR_8->magic_number, VAR_0, VAR_2) ||
        FUNC_6(VAR_8->version, VAR_1, VAR_3) ||
        VAR_8->tier != 1) {
        FUNC_1("File has invalid superblock.");
        VAR_7 = VAR_5;
    } else {
        VAR_7 = 0;
    }
    error:
    FUNC_3(VAR_8);
    return VAR_7;
}
