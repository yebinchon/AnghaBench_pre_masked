
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; size_t st_size; } ;
typedef TYPE_1__ uv_stat_t ;
struct TYPE_6__ {scalar_t__ result; TYPE_1__* ptr; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int uv_file ;
typedef size_t uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;

int FUNC_6(uv_file VAR_2, uint64_t *VAR_3, size_t VAR_4)
{
    int VAR_5;
    uv_fs_t VAR_6;
    uv_stat_t* VAR_7;

    VAR_5 = FUNC_3(((void*)0), &VAR_6, VAR_2, ((void*)0));
    if (VAR_5 < 0) {
        FUNC_2("uv_fs_fstat: %s\n", FUNC_5(VAR_5));
    }
    FUNC_0(VAR_6.result == 0);
    VAR_7 = VAR_6.ptr;
    if (!(VAR_7->st_mode & VAR_0)) {
        FUNC_1("Not a regular file.\n");
        FUNC_4(&VAR_6);
        return VAR_1;
    }
    if (VAR_7->st_size < VAR_4) {
        FUNC_1("File length is too short.\n");
        FUNC_4(&VAR_6);
        return VAR_1;
    }
    *VAR_3 = VAR_7->st_size;
    FUNC_4(&VAR_6);

    return 0;
}
