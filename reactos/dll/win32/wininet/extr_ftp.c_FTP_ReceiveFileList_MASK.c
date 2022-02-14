
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int children; } ;
struct TYPE_11__ {TYPE_5__ hdr; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int WININETFTPFINDNEXTW ;
struct TYPE_10__ {int * hInternet; int entry; int dwContext; int htype; } ;
struct TYPE_12__ {int index; TYPE_1__ hdr; TYPE_2__* lpFtpSession; int * lpafp; int size; } ;
typedef TYPE_3__* LPWININETFTPFINDNEXTW ;
typedef int LPWIN32_FIND_DATAW ;
typedef int * LPFILEPROPERTIESW ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int * HINTERNET ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,int **,int *) ;
 int FUNC_2 (char*,TYPE_2__*,...) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static HINTERNET FUNC_7(ftp_session_t *VAR_2, INT VAR_3, LPCWSTR VAR_4,
 LPWIN32_FIND_DATAW VAR_5, DWORD_PTR VAR_6)
{
    DWORD VAR_7 = 0;
    LPFILEPROPERTIESW VAR_8 = ((void*)0);
    LPWININETFTPFINDNEXTW VAR_9 = ((void*)0);

    FUNC_2("(%p,%d,%s,%p,%08lx)\n", VAR_2, VAR_3, FUNC_5(VAR_4), VAR_5, VAR_6);

    if (FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_8, &VAR_7))
    {
        if(VAR_5)
            FUNC_0(VAR_8, VAR_5);

        VAR_9 = FUNC_4(&VAR_2->hdr, &VAR_0, sizeof(WININETFTPFINDNEXTW));
        if (VAR_9)
        {
            VAR_9->hdr.htype = VAR_1;
            VAR_9->hdr.dwContext = VAR_6;
            VAR_9->index = 1;
            VAR_9->size = VAR_7;
            VAR_9->lpafp = VAR_8;

            FUNC_3( &VAR_2->hdr );
            VAR_9->lpFtpSession = VAR_2;
            FUNC_6( &VAR_2->hdr.children, &VAR_9->hdr.entry );
        }
    }

    FUNC_2("Matched %d files\n", VAR_7);
    return VAR_9 ? VAR_9->hdr.hInternet : ((void*)0);
}
