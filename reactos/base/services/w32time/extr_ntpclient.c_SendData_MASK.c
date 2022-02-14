
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_0; } ;
struct TYPE_8__ {int LiVnMode; TYPE_1__ TransmitTimestamp; } ;
struct TYPE_7__ {int ntpAddr; TYPE_3__ SendPacket; int Sock; } ;
typedef TYPE_1__ TIMEPACKET ;
typedef int SOCKADDR_IN ;
typedef int SOCKADDR ;
typedef TYPE_2__* PINFO ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ,char*,int,int ,int *,int) ;

__attribute__((used)) static BOOL
FUNC_3(PINFO VAR_3)
{
    TIMEPACKET VAR_4 = { 0, 0 };
    INT VAR_5;

    FUNC_1(&VAR_3->SendPacket, sizeof(VAR_3->SendPacket));
    VAR_3->SendPacket.LiVnMode = 0x1b;
    if (!FUNC_0(&VAR_4))
        return VAR_0;
    VAR_3->SendPacket.TransmitTimestamp = VAR_4;

    VAR_5 = FUNC_2(VAR_3->Sock,
                 (char *)&VAR_3->SendPacket,
                 sizeof(VAR_3->SendPacket),
                 0,
                 (SOCKADDR *)&VAR_3->ntpAddr,
                 sizeof(SOCKADDR_IN));

    if (VAR_5 == VAR_1)
        return VAR_0;

    return VAR_2;
}
