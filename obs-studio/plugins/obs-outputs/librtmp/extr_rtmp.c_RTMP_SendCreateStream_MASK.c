
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_7__ {int m_numInvokes; } ;
struct TYPE_6__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMP ;


 char* FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_3(RTMP *VAR_6)
{
    RTMPPacket VAR_7;
    char VAR_8[256], *VAR_9 = VAR_8 + sizeof(VAR_8);
    char *VAR_10;

    VAR_7.m_nChannel = 0x03;
    VAR_7.m_headerType = VAR_2;
    VAR_7.m_packetType = VAR_3;
    VAR_7.m_nTimeStamp = 0;
    VAR_7.m_nInfoField2 = 0;
    VAR_7.m_hasAbsTimestamp = 0;
    VAR_7.m_body = VAR_8 + VAR_1;

    VAR_10 = VAR_7.m_body;
    VAR_10 = FUNC_1(VAR_10, VAR_9, &VAR_5);
    VAR_10 = FUNC_0(VAR_10, VAR_9, ++VAR_6->m_numInvokes);
    *VAR_10++ = VAR_0;

    VAR_7.m_nBodySize = VAR_10 - VAR_7.m_body;

    return FUNC_2(VAR_6, &VAR_7, VAR_4);
}
