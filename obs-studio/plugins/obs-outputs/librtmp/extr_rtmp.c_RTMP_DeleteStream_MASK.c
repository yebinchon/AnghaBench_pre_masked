
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int protocol; } ;
struct TYPE_7__ {int m_stream_id; TYPE_1__ Link; int m_bPlaying; } ;
typedef TYPE_2__ RTMP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

void
FUNC_2(RTMP *VAR_2, int VAR_3)
{
    if (VAR_2->m_stream_id < 0)
        return;

    VAR_2->m_bPlaying = VAR_0;

    if ((VAR_2->Link.protocol & VAR_1))
        FUNC_1(VAR_2, VAR_3);

    FUNC_0(VAR_2, VAR_2->m_stream_id);
    VAR_2->m_stream_id = -1;
}
