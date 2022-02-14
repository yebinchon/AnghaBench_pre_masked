
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t m_mediaChannel; size_t m_channelsAllocatedIn; int m_pauseStamp; int * m_channelTimestamp; } ;
typedef TYPE_1__ RTMP ;


 int FUNC_0 (TYPE_1__*,int,int ) ;

int FUNC_1(RTMP *VAR_0, int VAR_1)
{
    if (VAR_1)
        VAR_0->m_pauseStamp = VAR_0->m_mediaChannel < VAR_0->m_channelsAllocatedIn ?
                          VAR_0->m_channelTimestamp[VAR_0->m_mediaChannel] : 0;
    return FUNC_0(VAR_0, VAR_1, VAR_0->m_pauseStamp);
}
