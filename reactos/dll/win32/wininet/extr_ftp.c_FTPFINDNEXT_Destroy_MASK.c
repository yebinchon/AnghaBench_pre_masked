
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_6__ {struct TYPE_6__* lpszName; } ;
struct TYPE_5__ {size_t size; TYPE_3__* lpafp; TYPE_1__* lpFtpSession; } ;
struct TYPE_4__ {int hdr; } ;
typedef TYPE_2__* LPWININETFTPFINDNEXTW ;
typedef size_t DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(object_header_t *VAR_0)
{
    LPWININETFTPFINDNEXTW VAR_1 = (LPWININETFTPFINDNEXTW) VAR_0;
    DWORD VAR_2;

    FUNC_0("\n");

    FUNC_1(&VAR_1->lpFtpSession->hdr);

    for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++)
    {
        FUNC_2(VAR_1->lpafp[VAR_2].lpszName);
    }
    FUNC_2(VAR_1->lpafp);
}
