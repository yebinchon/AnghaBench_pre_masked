
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
struct TYPE_11__ {TYPE_2__ Link; } ;
struct TYPE_10__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; int m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
struct TYPE_8__ {int playpath; int id; } ;
typedef TYPE_3__ RTMPPacket ;
typedef TYPE_4__ RTMP ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,int *,int *) ;
 char* FUNC_1 (char*,char*,int ) ;
 char* FUNC_2 (char*,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_4(RTMP *VAR_11, int VAR_12)
{
    RTMPPacket VAR_13;
    char VAR_14[1024], *VAR_15 = VAR_14 + sizeof(VAR_14);
    char *VAR_16;

    VAR_13.m_nChannel = 0x08;
    VAR_13.m_headerType = VAR_6;
    VAR_13.m_packetType = VAR_7;
    VAR_13.m_nTimeStamp = 0;
    VAR_13.m_nInfoField2 = VAR_11->Link.streams[VAR_12].id;
    VAR_13.m_hasAbsTimestamp = 0;
    VAR_13.m_body = VAR_14 + VAR_5;

    VAR_16 = VAR_13.m_body;
    VAR_16 = FUNC_2(VAR_16, VAR_15, &VAR_10);
    VAR_16 = FUNC_1(VAR_16, VAR_15, 0);
    *VAR_16++ = VAR_1;
    *VAR_16++ = VAR_0;
    *VAR_16++ = 0;
    *VAR_16++ = 0;
    *VAR_16++ = 0;
    *VAR_16++ = VAR_2;
    VAR_16 = FUNC_0(VAR_16, VAR_15, &VAR_9, &VAR_11->Link.streams[VAR_12].playpath);
    if (!VAR_16)
        return VAR_4;
    if (VAR_16 + 3 >= VAR_15)
        return VAR_4;
    *VAR_16++ = 0;
    *VAR_16++ = 0;
    *VAR_16++ = VAR_3;

    VAR_13.m_nBodySize = VAR_16 - VAR_13.m_body;

    return FUNC_3(VAR_11, &VAR_13, VAR_8);
}
