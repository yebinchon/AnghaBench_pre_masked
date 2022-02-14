
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_7__ {char m_nClientBW2; int m_nClientBW; } ;
struct TYPE_6__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMP ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;

int
FUNC_2(RTMP *VAR_4)
{
    RTMPPacket VAR_5;
    char VAR_6[256], *VAR_7 = VAR_6 + sizeof(VAR_6);

    VAR_5.m_nChannel = 0x02;
    VAR_5.m_headerType = VAR_2;
    VAR_5.m_packetType = VAR_3;
    VAR_5.m_nTimeStamp = 0;
    VAR_5.m_nInfoField2 = 0;
    VAR_5.m_hasAbsTimestamp = 0;
    VAR_5.m_body = VAR_6 + VAR_1;

    VAR_5.m_nBodySize = 5;

    FUNC_0(VAR_5.m_body, VAR_7, VAR_4->m_nClientBW);
    VAR_5.m_body[4] = VAR_4->m_nClientBW2;
    return FUNC_1(VAR_4, &VAR_5, VAR_0);
}
