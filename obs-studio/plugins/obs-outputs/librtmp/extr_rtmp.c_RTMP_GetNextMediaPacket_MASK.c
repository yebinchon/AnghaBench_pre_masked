
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sb_timedout; } ;
struct TYPE_15__ {int m_pausing; scalar_t__ m_mediaStamp; size_t m_mediaChannel; size_t m_channelsAllocatedIn; int * m_channelTimestamp; int m_pauseStamp; TYPE_1__ m_sb; int m_bPlaying; } ;
struct TYPE_14__ {scalar_t__ m_nTimeStamp; int m_hasAbsTimestamp; int m_nBodySize; int m_packetType; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMP ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int ,int ,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int VAR_1 ;

int
FUNC_6(RTMP *VAR_2, RTMPPacket *VAR_3)
{
    int VAR_4 = 0;

    while (!VAR_4 && FUNC_3(VAR_2)
            && FUNC_5(VAR_2, VAR_3))
    {
        if (!FUNC_1(VAR_3) || !VAR_3->m_nBodySize)
        {
            continue;
        }

        VAR_4 = FUNC_2(VAR_2, VAR_3);

        if (!VAR_4)
        {
            FUNC_0(VAR_3);
        }
        else if (VAR_2->m_pausing == 3)
        {
            if (VAR_3->m_nTimeStamp <= VAR_2->m_mediaStamp)
            {
                VAR_4 = 0;







                FUNC_0(VAR_3);
                continue;
            }
            VAR_2->m_pausing = 0;
        }
    }

    if (VAR_4)
        VAR_2->m_bPlaying = VAR_1;
    else if (VAR_2->m_sb.sb_timedout && !VAR_2->m_pausing)
        VAR_2->m_pauseStamp = VAR_2->m_mediaChannel < VAR_2->m_channelsAllocatedIn ?
                          VAR_2->m_channelTimestamp[VAR_2->m_mediaChannel] : 0;

    return VAR_4;
}
