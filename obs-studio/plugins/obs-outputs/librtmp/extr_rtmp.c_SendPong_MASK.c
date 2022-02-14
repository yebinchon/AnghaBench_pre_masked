
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_7__ {int m_nBWCheckCounter; } ;
struct TYPE_6__ {int m_nChannel; int m_nTimeStamp; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; int m_packetType; int m_headerType; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMP ;


 char* FUNC_0 (char*,char*,double) ;
 char* FUNC_1 (char*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(RTMP *VAR_6, double VAR_7)
{
    RTMPPacket VAR_8;
    char VAR_9[256], *VAR_10 = VAR_9 + sizeof(VAR_9);
    char *VAR_11;

    VAR_8.m_nChannel = 0x03;
    VAR_8.m_headerType = VAR_3;
    VAR_8.m_packetType = VAR_4;
    VAR_8.m_nTimeStamp = 0x16 * VAR_6->m_nBWCheckCounter;
    VAR_8.m_nInfoField2 = 0;
    VAR_8.m_hasAbsTimestamp = 0;
    VAR_8.m_body = VAR_9 + VAR_2;

    VAR_11 = VAR_8.m_body;
    VAR_11 = FUNC_1(VAR_11, VAR_10, &VAR_5);
    VAR_11 = FUNC_0(VAR_11, VAR_10, VAR_7);
    *VAR_11++ = VAR_0;

    VAR_8.m_nBodySize = VAR_11 - VAR_8.m_body;

    return FUNC_2(VAR_6, &VAR_8, VAR_1);
}
