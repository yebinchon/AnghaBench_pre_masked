
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dwContext; } ;
struct TYPE_9__ {int lstnSocket; TYPE_1__ hdr; int sndSocket; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (int) ;

__attribute__((used)) static BOOL FUNC_8(ftp_session_t *VAR_3, LPCWSTR VAR_4, DWORD VAR_5)
{
    INT VAR_6;
    BOOL VAR_7 = VAR_0;

    FUNC_6("\n");
    if (!FUNC_0(VAR_3))
        goto lend;

    if (!FUNC_4(VAR_3, VAR_5))
        goto lend;

    if (!FUNC_3(VAR_3))
        goto lend;

    if (!FUNC_2(VAR_3->sndSocket, VAR_1, VAR_4, 0, 0, 0))
     goto lend;
    VAR_6 = FUNC_1(VAR_3, VAR_3->hdr.dwContext);
    if (VAR_6)
    {
        if (VAR_6 == 150 || VAR_6 == 125)
            VAR_7 = VAR_2;
 else
            FUNC_5(VAR_6);
    }

lend:
    if (!VAR_7 && VAR_3->lstnSocket != -1)
    {
        FUNC_7(VAR_3->lstnSocket);
        VAR_3->lstnSocket = -1;
    }

    return VAR_7;
}
