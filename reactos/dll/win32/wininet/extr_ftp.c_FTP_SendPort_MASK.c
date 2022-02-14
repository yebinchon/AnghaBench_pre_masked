
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int dwContext; } ;
struct TYPE_8__ {int S_addr; } ;
struct TYPE_9__ {TYPE_1__ S_un; } ;
struct TYPE_10__ {int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_12__ {TYPE_4__ hdr; int sndSocket; TYPE_3__ lstnSocketAddress; } ;
typedef TYPE_5__ ftp_session_t ;
typedef char WCHAR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*,int,int,int,int,int,int) ;

__attribute__((used)) static BOOL FUNC_5(ftp_session_t *VAR_3)
{
    static const WCHAR VAR_4[] = {'%','d',',','%','d',',','%','d',',','%','d',',','%','d',',','%','d','\0'};
    INT VAR_5;
    WCHAR VAR_6[64];
    BOOL VAR_7 = VAR_0;
    FUNC_3("\n");

    FUNC_4(VAR_6, VAR_4,
  VAR_3->lstnSocketAddress.sin_addr.S_un.S_addr&0x000000FF,
        (VAR_3->lstnSocketAddress.sin_addr.S_un.S_addr&0x0000FF00)>>8,
        (VAR_3->lstnSocketAddress.sin_addr.S_un.S_addr&0x00FF0000)>>16,
        (VAR_3->lstnSocketAddress.sin_addr.S_un.S_addr&0xFF000000)>>24,
        VAR_3->lstnSocketAddress.sin_port & 0xFF,
        (VAR_3->lstnSocketAddress.sin_port & 0xFF00)>>8);

    if (!FUNC_1(VAR_3->sndSocket, VAR_1, VAR_6, 0, 0, 0))
        goto lend;

    VAR_5 = FUNC_0(VAR_3, VAR_3->hdr.dwContext);
    if (VAR_5)
    {
        if (VAR_5 == 200)
            VAR_7 = VAR_2;
        else
            FUNC_2(VAR_5);
    }

lend:
    return VAR_7;
}
