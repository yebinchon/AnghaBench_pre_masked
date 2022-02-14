
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int seekTime; } ;
struct TYPE_14__ {int m_bPlaying; scalar_t__ m_mediaChannel; TYPE_1__ Link; } ;
struct TYPE_13__ {scalar_t__ m_packetType; int m_nBodySize; int member_0; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMP ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*) ;

int
FUNC_6(RTMP *VAR_4, int VAR_5)
{
    RTMPPacket VAR_6 = { 0 };




    if (VAR_5 > 0)
        VAR_4->Link.seekTime = VAR_5;

    VAR_4->m_mediaChannel = 0;

    while (!VAR_4->m_bPlaying && FUNC_3(VAR_4) && FUNC_5(VAR_4, &VAR_6))
    {
        if (FUNC_1(&VAR_6))
        {
            if (!VAR_6.m_nBodySize)
                continue;
            if ((VAR_6.m_packetType == VAR_1) ||
                    (VAR_6.m_packetType == VAR_3) ||
                    (VAR_6.m_packetType == VAR_2))
            {
                FUNC_4(VAR_0, "Received FLV packet before play()! Ignoring.");
                FUNC_0(&VAR_6);
                continue;
            }

            FUNC_2(VAR_4, &VAR_6);
            FUNC_0(&VAR_6);
        }
    }

    return VAR_4->m_bPlaying;
}
