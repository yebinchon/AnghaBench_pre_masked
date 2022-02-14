
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef long ngx_int_t ;
struct TYPE_5__ {int nFileSizeLow; int nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
typedef TYPE_1__ ngx_file_info_t ;
typedef int ngx_err_t ;
struct TYPE_6__ {int nFileSizeLow; int nFileSizeHigh; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int dwFileAttributes; } ;
typedef TYPE_2__ WIN32_FILE_ATTRIBUTE_DATA ;


 long FUNC_0 (int *,int ,TYPE_2__*) ;
 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *,size_t*) ;
 scalar_t__ FUNC_4 (int *,int *,size_t) ;

ngx_int_t
FUNC_5(u_char *VAR_5, ngx_file_info_t *VAR_6)
{
    size_t VAR_7;
    long VAR_8;
    u_short *VAR_9;
    ngx_err_t VAR_10;
    WIN32_FILE_ATTRIBUTE_DATA VAR_11;
    u_short VAR_12[VAR_3];

    VAR_7 = VAR_3;

    VAR_9 = FUNC_3(VAR_12, VAR_5, &VAR_7);

    if (VAR_9 == ((void*)0)) {
        return VAR_1;
    }

    VAR_8 = VAR_1;

    if (FUNC_4(VAR_5, VAR_9, VAR_7) != VAR_2) {
        goto failed;
    }

    VAR_8 = FUNC_0(VAR_9, VAR_0, &VAR_11);

    VAR_6->dwFileAttributes = VAR_11.dwFileAttributes;
    VAR_6->ftCreationTime = VAR_11.ftCreationTime;
    VAR_6->ftLastAccessTime = VAR_11.ftLastAccessTime;
    VAR_6->ftLastWriteTime = VAR_11.ftLastWriteTime;
    VAR_6->nFileSizeHigh = VAR_11.nFileSizeHigh;
    VAR_6->nFileSizeLow = VAR_11.nFileSizeLow;

failed:

    if (VAR_9 != VAR_12) {
        VAR_10 = VAR_4;
        FUNC_1(VAR_9);
        FUNC_2(VAR_10);
    }

    return VAR_8;
}
