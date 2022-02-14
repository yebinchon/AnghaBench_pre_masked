
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_12__ {int av_val; } ;
struct TYPE_11__ {int m_numInvokes; } ;
struct TYPE_10__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMP ;
typedef TYPE_3__ AVal ;


 char* FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static int
FUNC_4(RTMP *VAR_7, AVal *VAR_8)
{
    RTMPPacket VAR_9;
    char VAR_10[1024], *VAR_11 = VAR_10 + sizeof(VAR_10);
    char *VAR_12;
    VAR_9.m_nChannel = 0x03;
    VAR_9.m_headerType = VAR_4;
    VAR_9.m_packetType = VAR_5;
    VAR_9.m_nTimeStamp = 0;
    VAR_9.m_nInfoField2 = 0;
    VAR_9.m_hasAbsTimestamp = 0;
    VAR_9.m_body = VAR_10 + VAR_3;

    FUNC_2(VAR_2, "UsherToken: %s", VAR_8->av_val);
    VAR_12 = VAR_9.m_body;
    VAR_12 = FUNC_1(VAR_12, VAR_11, &VAR_6);
    VAR_12 = FUNC_0(VAR_12, VAR_11, ++VAR_7->m_numInvokes);
    *VAR_12++ = VAR_0;
    VAR_12 = FUNC_1(VAR_12, VAR_11, VAR_8);

    if (!VAR_12)
        return VAR_1;

    VAR_9.m_nBodySize = VAR_12 - VAR_9.m_body;

    return FUNC_3(VAR_7, &VAR_9, VAR_1);
}
