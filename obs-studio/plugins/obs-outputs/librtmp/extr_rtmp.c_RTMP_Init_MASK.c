
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int timeout; int swfAge; scalar_t__ nStreams; scalar_t__ curStreamIdx; } ;
struct TYPE_6__ {int sb_socket; } ;
struct TYPE_8__ {int m_bSendChunkSizeInfo; int m_nBufferMS; int m_nClientBW; int m_nClientBW2; int m_nServerBW; double m_fAudioCodecs; double m_fVideoCodecs; TYPE_2__ Link; void* m_outChunkSize; void* m_inChunkSize; TYPE_1__ m_sb; } ;
typedef TYPE_3__ RTMP ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void
FUNC_2(RTMP *VAR_2)
{





    FUNC_1(VAR_2, 0, sizeof(RTMP));
    VAR_2->m_sb.sb_socket = -1;
    VAR_2->m_inChunkSize = VAR_0;
    VAR_2->m_outChunkSize = VAR_0;
    VAR_2->m_bSendChunkSizeInfo = 1;
    VAR_2->m_nBufferMS = 30000;
    VAR_2->m_nClientBW = 2500000;
    VAR_2->m_nClientBW2 = 2;
    VAR_2->m_nServerBW = 2500000;
    VAR_2->m_fAudioCodecs = 3191.0;
    VAR_2->m_fVideoCodecs = 252.0;
    VAR_2->Link.curStreamIdx = 0;
    VAR_2->Link.nStreams = 0;
    VAR_2->Link.timeout = 30;
    VAR_2->Link.swfAge = 30;
}
