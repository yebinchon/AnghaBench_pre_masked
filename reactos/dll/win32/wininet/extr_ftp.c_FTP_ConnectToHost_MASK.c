
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dwContext; } ;
struct TYPE_8__ {TYPE_1__ hdr; int lpszUserName; int sndSocket; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_6(ftp_session_t *VAR_3)
{
    INT VAR_4;
    BOOL VAR_5 = VAR_0;

    FUNC_5("\n");
    FUNC_0(VAR_3, VAR_3->hdr.dwContext);

    if (!FUNC_2(VAR_3->sndSocket, VAR_1, VAR_3->lpszUserName, 0, 0, 0))
        goto lend;

    VAR_4 = FUNC_0(VAR_3, VAR_3->hdr.dwContext);
    if (VAR_4)
    {

        if (VAR_4 == 230)
            VAR_5 = VAR_2;

        else if (VAR_4 == 331)
            VAR_5 = FUNC_3(VAR_3);

        else if (VAR_4 == 332)
            VAR_5 = FUNC_1(VAR_3);
        else
            FUNC_4(VAR_4);
    }

    FUNC_5("Returning %d\n", VAR_5);
lend:
    return VAR_5;
}
