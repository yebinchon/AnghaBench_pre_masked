
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwContext; } ;
struct TYPE_7__ {TYPE_1__ hdr; int lpszPassword; int sndSocket; } ;
typedef TYPE_2__ ftp_session_t ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_5(ftp_session_t *VAR_3)
{
    INT VAR_4;
    BOOL VAR_5 = VAR_0;

    FUNC_4("\n");
    if (!FUNC_2(VAR_3->sndSocket, VAR_1, VAR_3->lpszPassword, 0, 0, 0))
        goto lend;

    VAR_4 = FUNC_0(VAR_3, VAR_3->hdr.dwContext);
    if (VAR_4)
    {
        FUNC_4("Received reply code %d\n", VAR_4);

        if (VAR_4 == 230)
            VAR_5 = VAR_2;


        else if (VAR_4 == 332)
            VAR_5 = FUNC_1(VAR_3);
        else
            FUNC_3(VAR_4);
    }

lend:
    FUNC_4("Returning %d\n", VAR_5);
    return VAR_5;
}
