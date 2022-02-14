
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_nBytesRead; scalar_t__ m_nBodySize; int m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; scalar_t__ m_nChannel; scalar_t__ m_packetType; scalar_t__ m_headerType; } ;
typedef TYPE_1__ RTMPPacket ;


 int VAR_0 ;

void
FUNC_0(RTMPPacket *VAR_1)
{
    VAR_1->m_headerType = 0;
    VAR_1->m_packetType = 0;
    VAR_1->m_nChannel = 0;
    VAR_1->m_nTimeStamp = 0;
    VAR_1->m_nInfoField2 = 0;
    VAR_1->m_hasAbsTimestamp = VAR_0;
    VAR_1->m_nBodySize = 0;
    VAR_1->m_nBytesRead = 0;
}
