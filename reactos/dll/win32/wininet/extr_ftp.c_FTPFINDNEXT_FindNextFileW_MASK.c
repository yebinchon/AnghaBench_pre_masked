
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_11__ {int hdr; void* find_data; } ;
typedef TYPE_4__ find_next_task_t ;
struct TYPE_12__ {int hdr; TYPE_3__* lpFtpSession; } ;
typedef TYPE_5__ WININETFTPFINDNEXTW ;
struct TYPE_10__ {TYPE_2__* lpAppInfo; } ;
struct TYPE_8__ {int dwFlags; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,void*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (int *,int ,int) ;

__attribute__((used)) static DWORD FUNC_3(object_header_t *VAR_3, void *VAR_4)
{
    WININETFTPFINDNEXTW *VAR_5 = (WININETFTPFINDNEXTW*)VAR_3;

    if (VAR_5->lpFtpSession->lpAppInfo->hdr.dwFlags & VAR_2)
    {
        find_next_task_t *VAR_6;

        VAR_6 = FUNC_2(&VAR_5->hdr, VAR_1, sizeof(*VAR_6));
        VAR_6->find_data = VAR_4;

        FUNC_1(&VAR_6->hdr);
        return VAR_0;
    }

    return FUNC_0(VAR_5, VAR_4);
}
