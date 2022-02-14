
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int pbuf ;
struct TYPE_7__ {int SWFVerificationResponse; } ;
struct TYPE_9__ {TYPE_1__ Link; } ;
struct TYPE_8__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMP ;


 char* FUNC_0 (char*,char*,short) ;
 char* FUNC_1 (char*,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_5 (char*,int ,int) ;

int
FUNC_6(RTMP *VAR_5, short VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
    RTMPPacket VAR_9;
    char VAR_10[256], *VAR_11 = VAR_10 + sizeof(VAR_10);
    int VAR_12;
    char *VAR_13;

    FUNC_2(VAR_1, "sending ctrl. type: 0x%04x", (unsigned short)VAR_6);

    VAR_9.m_nChannel = 0x02;
    VAR_9.m_headerType = VAR_3;
    VAR_9.m_packetType = VAR_4;
    VAR_9.m_nTimeStamp = 0;
    VAR_9.m_nInfoField2 = 0;
    VAR_9.m_hasAbsTimestamp = 0;
    VAR_9.m_body = VAR_10 + VAR_2;

    switch(VAR_6)
    {
    case 0x03:
        VAR_12 = 10;
        break;
    case 0x1A:
        VAR_12 = 3;
        break;
    case 0x1B:
        VAR_12 = 44;
        break;
    default:
        VAR_12 = 6;
        break;
    }

    VAR_9.m_nBodySize = VAR_12;

    VAR_13 = VAR_9.m_body;
    VAR_13 = FUNC_0(VAR_13, VAR_11, VAR_6);

    if (VAR_6 == 0x1B)
    {





    }
    else if (VAR_6 == 0x1A)
    {
        *VAR_13 = VAR_7 & 0xff;
    }
    else
    {
        if (VAR_12 > 2)
            VAR_13 = FUNC_1(VAR_13, VAR_11, VAR_7);

        if (VAR_12 > 6)
            VAR_13 = FUNC_1(VAR_13, VAR_11, VAR_8);
    }

    return FUNC_4(VAR_5, &VAR_9, VAR_0);
}
