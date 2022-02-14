
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwContext; } ;
struct TYPE_6__ {TYPE_1__ hdr; int sndSocket; } ;
typedef TYPE_2__ ftp_session_t ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(ftp_session_t *VAR_4)
{
    INT VAR_5;
    BOOL VAR_6 = VAR_0;

    FUNC_3("\n");
    if (!FUNC_1(VAR_4->sndSocket, VAR_1, VAR_3, 0, 0, 0))
        goto lend;

    VAR_5 = FUNC_0(VAR_4, VAR_4->hdr.dwContext);
    if (VAR_5)
        VAR_6 = VAR_2;
    else
        FUNC_2(VAR_5);

lend:
    return VAR_6;
}
