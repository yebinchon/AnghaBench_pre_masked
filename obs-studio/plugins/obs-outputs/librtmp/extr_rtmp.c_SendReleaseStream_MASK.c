
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_9__ {TYPE_1__* streams; } ;
struct TYPE_11__ {TYPE_2__ Link; int m_numInvokes; } ;
struct TYPE_10__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
struct TYPE_8__ {int playpath; } ;
typedef TYPE_3__ RTMPPacket ;
typedef TYPE_4__ RTMP ;


 char* FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(RTMP *VAR_6, int VAR_7)
{
    RTMPPacket VAR_8;
    char VAR_9[1024], *VAR_10 = VAR_9 + sizeof(VAR_9);
    char *VAR_11;

    VAR_8.m_nChannel = 0x03;
    VAR_8.m_headerType = VAR_3;
    VAR_8.m_packetType = VAR_4;
    VAR_8.m_nTimeStamp = 0;
    VAR_8.m_nInfoField2 = 0;
    VAR_8.m_hasAbsTimestamp = 0;
    VAR_8.m_body = VAR_9 + VAR_2;

    VAR_11 = VAR_8.m_body;
    VAR_11 = FUNC_1(VAR_11, VAR_10, &VAR_5);
    VAR_11 = FUNC_0(VAR_11, VAR_10, ++VAR_6->m_numInvokes);
    *VAR_11++ = VAR_0;
    VAR_11 = FUNC_1(VAR_11, VAR_10, &VAR_6->Link.streams[VAR_7].playpath);
    if (!VAR_11)
        return VAR_1;

    VAR_8.m_nBodySize = VAR_11 - VAR_8.m_body;

    return FUNC_2(VAR_6, &VAR_8, VAR_1);
}
