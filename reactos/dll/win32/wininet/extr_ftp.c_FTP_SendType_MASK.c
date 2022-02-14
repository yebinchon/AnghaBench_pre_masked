
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwContext; } ;
struct TYPE_6__ {TYPE_1__ hdr; int sndSocket; } ;
typedef TYPE_2__ ftp_session_t ;
typedef char WCHAR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(ftp_session_t *VAR_4, DWORD VAR_5)
{
    INT VAR_6;
    WCHAR VAR_7[] = { 'I','\0' };
    BOOL VAR_8 = VAR_0;

    FUNC_3("\n");
    if (VAR_5 & VAR_2)
        VAR_7[0] = 'A';

    if (!FUNC_1(VAR_4->sndSocket, VAR_1, VAR_7, 0, 0, 0))
        goto lend;

    VAR_6 = FUNC_0(VAR_4, VAR_4->hdr.dwContext)/100;
    if (VAR_6)
    {
        if (VAR_6 == 2)
            VAR_8 = VAR_3;
 else
            FUNC_2(VAR_6);
    }

lend:
    return VAR_8;
}
