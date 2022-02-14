
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* m_body; int m_nBodySize; int m_nInfoField2; int m_nTimeStamp; int m_nChannel; int m_packetType; } ;
typedef TYPE_1__ RTMPPacket ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,unsigned char) ;

void
FUNC_1(RTMPPacket *VAR_1)
{
    FUNC_0(VAR_0,
             "RTMP PACKET: packet type: 0x%02x. channel: 0x%02x. info 1: %d info 2: %d. Body size: %u. body: 0x%02x",
             VAR_1->m_packetType, VAR_1->m_nChannel, VAR_1->m_nTimeStamp, VAR_1->m_nInfoField2,
             VAR_1->m_nBodySize, VAR_1->m_body ? (unsigned char)VAR_1->m_body[0] : 0);
}
