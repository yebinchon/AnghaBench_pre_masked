
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_7__ {scalar_t__ nResumeTS; int flags; } ;
struct TYPE_9__ {double m_numInvokes; TYPE_1__ m_read; } ;
struct TYPE_8__ {int m_nChannel; char* m_body; int m_nBodySize; scalar_t__ m_hasAbsTimestamp; scalar_t__ m_nInfoField2; scalar_t__ m_nTimeStamp; int m_packetType; int m_headerType; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMP ;


 char* FUNC_0 (char*,char*,double) ;
 char* FUNC_1 (char*,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_3(RTMP *VAR_7, int VAR_8)
{
    RTMPPacket VAR_9;
    char VAR_10[256], *VAR_11 = VAR_10 + sizeof(VAR_10);
    char *VAR_12;

    VAR_9.m_nChannel = 0x08;
    VAR_9.m_headerType = VAR_2;
    VAR_9.m_packetType = VAR_3;
    VAR_9.m_nTimeStamp = 0;
    VAR_9.m_nInfoField2 = 0;
    VAR_9.m_hasAbsTimestamp = 0;
    VAR_9.m_body = VAR_10 + VAR_1;

    VAR_12 = VAR_9.m_body;
    VAR_12 = FUNC_1(VAR_12, VAR_11, &VAR_6);
    VAR_12 = FUNC_0(VAR_12, VAR_11, ++VAR_7->m_numInvokes);
    *VAR_12++ = VAR_0;
    VAR_12 = FUNC_0(VAR_12, VAR_11, (double)VAR_8);

    VAR_9.m_nBodySize = VAR_12 - VAR_9.m_body;

    VAR_7->m_read.flags |= VAR_4;
    VAR_7->m_read.nResumeTS = 0;

    return FUNC_2(VAR_7, &VAR_9, VAR_5);
}
